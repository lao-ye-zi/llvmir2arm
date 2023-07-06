#include "ARMBuilder.h"

std::string Registers[] = { "r0", "r1", "r2", "r3", "r4", "r5", "r6",  "r7", "r8", "r9", "r10", "r11", "r12", "sp", "lr", "pc"};
std::string Tab = "\t";
std::string NewLine = "\n";

ARMGen::ARMBuilder::ARMBuilder() = default;

std::string ARMGen::ARMBuilder::registerMapBuilder()
{
    /*
     * 返回.s最开头的一些注册表，比如.text, .file等
     */
    std::string armCode;
    armCode += Tab + ".text" + NewLine;
    return armCode;
}

std::string ARMGen::ARMBuilder::globalIdentBuilder(llvmirParser::GlobalDefContext* context)
{
        /*
     * 返回一个变量的构造
         */
    std::stringstream armCode;
    std::string IdName = context->GlobalIdent()->getText();
    armCode << Tab << ".type" << Tab << IdName << ",%object" << NewLine;
    armCode << Tab << ".globl" << Tab << IdName << NewLine;
    armCode << IdName << ":" << NewLine;
    //填充内容
    armCode << NewLine;
    return armCode.str();
}

std::string ARMGen::ARMBuilder::funcHeaderBuilder(llvmirParser::FuncHeaderContext* context)
{
    std::stringstream armCode;
    std::string FuncName = context->GlobalIdent()->getText();
    armCode << Tab << ".globl" << Tab << FuncName << NewLine;
    armCode << Tab << ".type" << Tab << FuncName << ",%function" << NewLine;
    armCode << Tab << ".code\t32" << NewLine;
    armCode << FuncName << ":" << NewLine;
    //根据params操作一下寄存器
    armCode << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::labelBuilder(std::string context)
{
    return context+":\n";
}
std::string ARMGen::ARMBuilder::loadBuilder(llvmirParser::InstructionContext* context)
{
    return " ";
}
std::string ARMGen::ARMBuilder::addBuilder(llvmirParser::InstructionContext* context)
{
    return " ";
}
std::string ARMGen::ARMBuilder::subBuilder(llvmirParser::InstructionContext* context)
{
    return " ";
}
std::string ARMGen::ARMBuilder::storeBuilder(llvmirParser::InstructionContext* context)
{
    std::stringstream armCode;
    armCode << Tab << "mov" << getRegister() << " " <<
    return " ";
}
std::string ARMGen::ARMBuilder::allocaBuilder(int subspace)
{
    return std::string();
}
std::string ARMGen::ARMBuilder::getRegister()
{
    return "r0";
}
