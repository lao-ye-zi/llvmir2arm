//
// Created by lyz on 7/15/23.
//

#ifndef LLVMIRLEX_ARMPROGRAM_H
#define LLVMIRLEX_ARMPROGRAM_H
#include <utility>
#include <memory>

#include "ARMSen.h"

namespace ARMGen
{

class TopEntity
{
public:
    TopEntity() = default;
    explicit TopEntity(string name)
        : name(std::move(name))
    {
    }
    std::string         name;
    virtual std::string toString() = 0;
};


class Long : public TopEntity
{
public:
    string toString() override;
    Long(string name, string val, string section)
        : _name(std::move(name))
        , _val(std::move(val))
        , _section(std::move(section))
    {
    }

protected:
    string _name;
    string _val;
    string _section;
};

class Array : public TopEntity
{
public:
    string toString() override;
    Array(string name, std::vector<string> vals, string section)
        : _name(std::move(name))
        , _vals(std::move(vals))
        , _section(std::move(section))
    {
    }

protected:
    string              _name;
    std::vector<string> _vals;
    string              _section;
};

class Function : public TopEntity
{
public:
    string toString() override;
    explicit Function(string name)
        : _name(std::move(name))
    {
        _instructions.clear();
    }
    void   addInst(std::shared_ptr<ARMGen::ARMSen> Inst);
    string getname();

protected:
    string                                       _name;
    std::vector<std::shared_ptr<ARMGen::ARMSen>> _instructions;
};



}   // namespace ARMGen




#endif   // LLVMIRLEX_ARMPROGRAM_H
