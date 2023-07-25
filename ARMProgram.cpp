//
// Created by lyz on 7/15/23.
//

#include <sstream>
#include "ARMProgram.h"


string ARMGen::Long::toString()
{
    std::stringstream ss;
    ss << Tab << ".type" << Tab << _name << ",%object" << NewLine;
    ss << Tab << _section << NewLine;
    ss << Tab << ".globl" << Tab << _name << NewLine;
    ss << _name << ":" << NewLine;
    ss << Tab << ".long" << Tab << _val << NewLine;
    ss << NewLine;
    return ss.str();
}
string ARMGen::Array::toString()
{
    std::stringstream ss;
    ss << Tab << ".type" << Tab << _name << ",%object" << NewLine;
    ss << Tab << _section << NewLine;
    ss << Tab << ".globl" << Tab << _name << NewLine;
    ss << _name << ":" << NewLine;
    for (auto x : _vals) {
        if (x[0] == 'z') {
            ss << Tab << "." << x << NewLine;
        } else
            ss << Tab << ".long" << Tab << x << NewLine;
    }
    ss << NewLine;
    return ss.str();
}
string ARMGen::Function::toString()
{
    std::stringstream ss;
    ss << Tab << ".globl" << Tab << _name << NewLine;
    ss << Tab << ".type" << Tab << _name << ",%function" << NewLine;
    ss << Tab << ".code" << Tab << "32" << NewLine;
    ss << _name << ":" << NewLine;
    ss << Tab << ".fnstart" << NewLine;
    for (auto x : _instructions) { ss << x->toString(); }
    ss << Tab << ".fnend" << NewLine;
    ss << NewLine;
    return ss.str();
}
void ARMGen::Function::addInst(const std::shared_ptr<ARMGen::ARMSen> Inst)
{
    _instructions.push_back(Inst);
}
string ARMGen::Function::getname()
{
    return this->_name;
}
