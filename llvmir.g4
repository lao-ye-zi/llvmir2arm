grammar llvmir;

compilationUnit: topLevelEntity* EOF;

topLevelEntity:
	typeDef
	| globalDecl
	| globalDef
	| funcDecl
	| funcDef;
typeDef:
	LocalIdent '=' 'type' type;

//全局变量声明定义
globalDecl:
	GlobalIdent '=' internalLinkage? preemption? immutable type ;
globalDef:
	GlobalIdent '=' internalLinkage? preemption? immutable type constant;
//need
internalLinkage:
	'appending'
	| 'available_externally'
	| 'common'
	| 'internal'
	| 'linkonce'
	| 'linkonce_odr'
	| 'private'
	| 'weak'
	| 'weak_odr';
preemption: 
	'dso_local' | 'dso_preemptable';
immutable: 
	'constant' | 'global';

//全局函数声明定义
funcDecl: 
	'declare' funcHeader;//函数声明
funcDef: 
	'define' funcHeader funcBody;//函数定义

funcHeader:
	preemption? type GlobalIdent
		'(' params ')';
funcBody: 
	'{' basicBlock+ '}';
//基本块
basicBlock: 
	LabelIdent? instruction* terminator;
instruction:
	localDefInst
	| valueInstruction
	| storeInst;
terminator:
	retTerm
	| brTerm
	| condBrTerm;

localDefInst: LocalIdent '=' valueInstruction;
valueInstruction:
	//算数指令
	addInst
	| fAddInst
	| subInst
	| fSubInst
	| mulInst
	| fMulInst
	| uDivInst
	| sDivInst
	| fDivInst
	| uRemInst
	| sRemInst
	| fRemInst
	//位移指令
	| shlInst
	| lShrInst
	| aShrInst
	| andInst
	| orInst
	| xorInst
	// Memory instructions
	| allocaInst
	| loadInst
	| getElementPtrInst
	// Conversion instructions
	| zExtInst
	| sExtInst
	| siToFpInst
	| fpToSiInst
	| bitCastInst
	// Other instructions
	| iCmpInst
	| fCmpInst
	| callInst;

//value instructions
overflowFlag: 
	'nsw' | 'nuw';
addInst: 
	'add' overflowFlag* typeValue ',' value;
fAddInst:
	'fadd' typeValue ',' value;
subInst:
	'sub' overflowFlag* typeValue ',' value;
fSubInst:
	'fsub' typeValue ',' value;
mulInst:
	'mul' overflowFlag* typeValue ',' value;
fMulInst:
	'fmul' typeValue ',' value;
uDivInst:
	'udiv' typeValue ',' value;
sDivInst:
	'sdiv' typeValue ',' value;
fDivInst:
	'fdiv' typeValue ',' value;
uRemInst:
	'urem' typeValue ',' value;
sRemInst:
	'srem' typeValue ',' value;
fRemInst:
	'frem' typeValue ',' value;
//store instructions
storeInst:
	'store'  typeValue ',' typeValue;

//move instructions
shlInst:
	'shl' overflowFlag* typeValue ',' value;
lShrInst:
	'lshr' typeValue ',' value;
aShrInst:
	'ashr' typeValue ',' value;
andInst: 
	'and' typeValue ',' value;
orInst: 
	'or' typeValue ',' value;
xorInst: 
	'xor' typeValue ',' value;

//memory instructions
allocaInst:
	'alloca' type (
		',' typeValue
	)?;
loadInst:
	'load' type ',' typeValue;
getElementPtrInst:
	'getelementptr' inBounds? type ',' typeValue (',' typeValue)*;

//conversion instructions
bitCastInst:
	'bitcast' typeValue 'to' type;
zExtInst:
	'zext' typeValue 'to' type;
sExtInst: 
	'sext' typeValue 'to' type;
siToFpInst:
	'sitofp' typeValue 'to' type;
fpToSiInst:
	'fptosi' typeValue 'to' type;

//other instructions
iCmpInst:
	'icmp' iPred typeValue ',' value;
fCmpInst:
	'fcmp' fPred typeValue ',' value;
callInst:
	'call' type value '(' args ')';

//terminator instructions
retTerm:
	'ret' 'void'
	|'ret' concreteType value;
brTerm: 'br' label;
condBrTerm:
	'br' IntType value ',' label ',' label;

//need fragment
fragment AsciiLetter: [A-Za-z];
fragment Letter: AsciiLetter | [-$._];
fragment EscapeLetter: Letter | '\\';
fragment DecimalDigit: [0-9];
fragment HexDigit: [A-Fa-f] | DecimalDigit;
fragment Decimals: DecimalDigit+;
fragment Name: Letter (Letter | DecimalDigit)*;
fragment EscapeName:
	EscapeLetter (EscapeLetter | DecimalDigit)*;
fragment Id: Decimals;
fragment IntHexLit: [us] '0x' HexDigit+;
// 浮点型常量
fragment Sign: [+-];
fragment FracLit: Sign? Decimals '.' DecimalDigit*;
fragment SciLit: FracLit [eE] Sign? Decimals;

fragment FloatHexLit: '0x' [KLMHR]? HexDigit+;
fragment GlobalName: '@' (Name | QuotedString);
fragment GlobalId: '@' Id;
fragment LocalName: '%' (Name | QuotedString);
fragment LocalId: '%' Id;
fragment QuotedString: '"' (~["\r\n])* '"';

Comment: ';' .*? '\r'? '\n' -> channel(HIDDEN);//注释
WhiteSpace: [ \t\n\r]+ -> skip;
IntLit: '-'? DecimalDigit+ | IntHexLit;
FloatLit: FracLit | SciLit | FloatHexLit;
StringLit: QuotedString;
GlobalIdent: GlobalName | GlobalId;
LocalIdent: LocalName | LocalId;
LabelIdent: (Letter | DecimalDigit)+ ':' | QuotedString ':';
IntType: 'i' DecimalDigit+;

floatKind:
	'half'
	| 'bfloat'
	| 'float'
	| 'double'
	| 'x86_fp80'
	| 'fp128'
	| 'ppc_fp128';
typeValue: 
	concreteType value;
concreteType:
	intType
	| floatType
	| pointerType
	| vectorType
	| labelType
	| arrayType
	| structType
	| namedType
	| mmxType
	| tokenType;
value:
	constant
	// %42 %foo
	| LocalIdent
	| GlobalIdent;
constant:
	boolConst
	| intConst
	| floatConst
	| nullConst
	| noneConst
	| structConst
	| arrayConst
	| vectorConst
	| zeroInitializerConst;

boolConst: 'true' | 'false';
intConst: IntLit;
floatConst: FloatLit;
nullConst: 'null';
noneConst: 'none';
structConst:
	'{' (typeConst (',' typeConst)*)? '}'
	| '<' '{' ( typeConst (',' typeConst)*)? '}' '>';
arrayConst:
	'[' (typeConst (',' typeConst)*)? ']';
vectorConst:
	'<' (typeConst (',' typeConst)*)? '>';

typeConst:
	concreteType constant;

type:
	'void'
	| 'opaque'
	| type '(' params ')'
	| intType
	| floatType
	| type addrSpace? '*'
	| opaquePointerType
	| vectorType
	| labelType
	| arrayType
	| structType
	| namedType
	| mmxType
	| tokenType;

intType:
	IntType;
floatType:
	floatKind;
pointerType:
	type addrSpace? '*' | opaquePointerType;
vectorType:
	'<' IntLit 'x' type '>'
	| '<' 'vscale' 'x' IntLit 'x' type '>';
labelType:
	'label';
arrayType:
	'[' IntLit 'x' type ']';
structType:
	'{' (type (',' type)*)? '}'
	| '<' '{' (type (',' type)*)? '}' '>';
namedType:
	LocalIdent;
mmxType:
	'x86_mmx';
tokenType:
	'token';

opaquePointerType:
	'ptr' addrSpace?;
addrSpace:
	'addrspace' '(' IntLit ')';

params: (param (',' param)*)?;
param: type LocalIdent?;
label: 'label' LocalIdent;
iPred:
	'eq'
	| 'ne'
	| 'sge'
	| 'sgt'
	| 'sle'
	| 'slt'
	| 'uge'
	| 'ugt'
	| 'ule'
	| 'ult';
inBounds: 'inbounds';
args:
	(arg (',' arg)*)?;
arg: concreteType value;
zeroInitializerConst: 'zeroinitializer';

fPred:
	'false'
	| 'oeq'
	| 'oge'
	| 'ogt'
	| 'ole'
	| 'olt'
	| 'one'
	| 'ord'
	| 'true'
	| 'ueq'
	| 'uge'
	| 'ugt'
	| 'ule'
	| 'ult'
	| 'une'
	| 'uno';