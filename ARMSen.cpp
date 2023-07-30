//
// Created by lyz on 7/15/23.
//

#include "ARMSen.h"

string opToStr(ARMGen::ARMOP op_)
{
    switch (op_) {
    case ARMGen::ARMOP::ADD: return "add";
    case ARMGen::ARMOP::VADD: return "vadd.f32";
    case ARMGen::ARMOP::SUB: return "sub";
    case ARMGen::ARMOP::VSUB: return "vsub.f32";
    case ARMGen::ARMOP::MUL: return "mul";
    case ARMGen::ARMOP::VMUL: return "vmul.f32";
    case ARMGen::ARMOP::SDIV: return "sdiv";
    case ARMGen::ARMOP::VDIV: return "vdiv.f32";
    case ARMGen::ARMOP::SREM: return "srem";
    case ARMGen::ARMOP::RSB: return "rsb";
    case ARMGen::ARMOP::MLA: return "mla";
    case ARMGen::ARMOP::MOV: return "mov";
    case ARMGen::ARMOP::MVN: return "mvn";
    case ARMGen::ARMOP::MOVGT: return "movgt";
    case ARMGen::ARMOP::MOVGE: return "movge";
    case ARMGen::ARMOP::MOVLT: return "movlt";
    case ARMGen::ARMOP::MOVLE: return "movle";
    case ARMGen::ARMOP::MOVEQ: return "moveq";
    case ARMGen::ARMOP::MOVNE: return "movne";
    case ARMGen::ARMOP::STR: return "str";
    case ARMGen::ARMOP::LDR: return "ldr";
    case ARMGen::ARMOP::VSTR: return "vstr";
    case ARMGen::ARMOP::VLDR: return "vldr";
    case ARMGen::ARMOP::VCVT_SF: return "vcvt.s32.f32";
    case ARMGen::ARMOP::VCVT_FS: return "vcvt.f32.s32";
    case ARMGen::ARMOP::B: return "b";
    case ARMGen::ARMOP::BL: return "bl";
    case ARMGen::ARMOP::BGT: return "bgt";
    case ARMGen::ARMOP::BGE: return "bge";
    case ARMGen::ARMOP::BLT: return "blt";
    case ARMGen::ARMOP::BLE: return "ble";
    case ARMGen::ARMOP::BEQ: return "beq";
    case ARMGen::ARMOP::BNE: return "bne";
    case ARMGen::ARMOP::PUSH: return "push";
    case ARMGen::ARMOP::POP: return "pop";
    case ARMGen::ARMOP::CMP: return "cmp";
    case ARMGen::ARMOP::CMN: return "cmn";
    default: return "error";
    }
}

ARMGen::ARMOP ARMGen::ARMSen::getOp() const
{
    return _op;
}
string ARMGen::AddSen::toString()
{
    if (_rn3.empty()) {
        return Tab + opToStr(getOp()) + Space + _rd + Comma + Space + _rn1 + Comma + Space + _rn2 +
               NewLine;
    } else
        return Tab + opToStr(getOp()) + Space + _rd + Comma + Space + _rn1 + Comma + Space + _rn2 +
               Comma + Space + "mul" + Comma + Space + _rn3 + NewLine;
}

string ARMGen::VaddSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::SubSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::VsubSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}
string ARMGen::MulSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}
string ARMGen::VmulSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::SdivSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::VdivSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::SremSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}

string ARMGen::RsbSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           NewLine;
}
string ARMGen::MlaSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn1 + Comma + Space + _Rn2 +
           Comma + Space + _Rn3 + NewLine;
}



string ARMGen::MovSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MvnSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MovgeSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MovgtSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MovltSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MovleSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::MoveqSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}

string ARMGen::MovneSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}
string ARMGen::StrSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rn + Comma + Space + "[" + _Rd + "]" + NewLine;
}

string ARMGen::LdrSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}


string ARMGen::VstrSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rn + Comma + Space + _Rd + NewLine;
}

string ARMGen::VldrSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}


string ARMGen::VcvtSFSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}

string ARMGen::VcvtFSSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Rd + Comma + Space + _Rn + NewLine;
}

string ARMGen::BSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _Label + NewLine;
}

string ARMGen::BlSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _Func + NewLine;
}

string ARMGen::BgtSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::BgeSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::BltSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::BleSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::BeqSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::BneSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "." + _label + NewLine;
}

string ARMGen::PushSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "{" + _registers + "}" + NewLine;
}

string ARMGen::PopSen::toString()
{
    return Tab + opToStr(getOp()) + Space + "{" + _registers + "}" + NewLine;
}

string ARMGen::CmpSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _rn1 + Comma + Space + _rn2 + NewLine;
}

string ARMGen::CmnSen::toString()
{
    return Tab + opToStr(getOp()) + Space + _rn1 + Comma + Space + _rn2 + NewLine;
}


string ARMGen::Label::toString()
{
    return "." + _name + NewLine;
}

string ARMGen::GlobalId::toString()
{
    return "\t.long\t" + _name.erase(0, 1) + NewLine;
}

