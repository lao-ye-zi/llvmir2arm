//
// Created by lyz on 7/15/23.
//

#ifndef LLVMIRLEX_ARMSEN_H
#define LLVMIRLEX_ARMSEN_H
#include <string>
#include <utility>
#include <vector>

#define Tab "\t"
#define NewLine "\n"
#define Space " "
#define Comma ","
#define HASHTAG "#"

using std::string;

namespace ARMGen
{
enum class ARMOP {
    // math
    ADD = 100,
    VADD,
    SUB,
    VSUB,
    MUL,
    VMUL,
    VDIV,
    RSB,

    // memory
    MOV,
    MVN,
    STR,
    LDR,
    VSTR,
    VLDR,
    VCVT_SF,
    VCVT_FS,

    // terminator
    B,
    BL,
    BGT,
    BGE,
    BLT,
    BLE,
    BEQ,
    BNE,
    PUSH,
    POP,

    // compare
    CMP,
    CMN,

    // unknown
    UNKNOWN = 114514
};

class ARMSen
{
public:
    ARMSen() = default;
    explicit ARMSen(string name)
        : name(std::move(name))
    {
    }
    std::string         name;
    virtual std::string toString() = 0;

protected:
    ARMOP _op = ARMOP::UNKNOWN;

public:
    [[nodiscard]] ARMOP getOp() const;
};

class AddSen : public ARMSen
{
public:
    string toString() override;
    AddSen(string Rd, string Rn1, string Rn2)
        : _rd(std::move(Rd))
        , _rn1(std::move(Rn1))
        , _rn2(std::move(Rn2))
    {
        _op  = ARMOP::ADD;
        _rn3 = "";
    }
    AddSen(string Rd, string Rn1, string Rn2, string Rn3)
        : _rd(std::move(Rd))
        , _rn1(std::move(Rn1))
        , _rn2(std::move(Rn2))
        , _rn3(std::move(Rn3))
    {
        _op = ARMOP::ADD;
    }

protected:
    string _rd;
    string _rn1;
    string _rn2;
    string _rn3;
};

class VaddSen : public ARMSen
{
public:
    string toString() override;
    VaddSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::VADD;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class SubSen : public ARMSen
{
public:
    string toString() override;
    SubSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::SUB;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class VsubSen : public ARMSen
{
public:
    string toString() override;
    VsubSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::VSUB;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class MulSen : public ARMSen
{
public:
    string toString() override;
    MulSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::MUL;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class VmulSen : public ARMSen
{
public:
    string toString() override;
    VmulSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::VMUL;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class VdivSen : public ARMSen
{
public:
    string toString() override;
    VdivSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::VDIV;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class RsbSen : public ARMSen
{
public:
    string toString() override;
    RsbSen(string Rd, string Rn1, string Rn2)
        : _Rd(std::move(Rd))
        , _Rn1(std::move(Rn1))
        , _Rn2(std::move(Rn2))
    {
        _op = ARMOP::RSB;
    }

protected:
    string _Rd;
    string _Rn1;
    string _Rn2;
};

class MovSen : public ARMSen
{
public:
    string toString() override;
    MovSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::MOV;
    }

protected:
    string _Rd;
    string _Rn;
};

class MvnSen : public ARMSen
{
public:
    string toString() override;
    MvnSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::MVN;
    }

protected:
    string _Rd;
    string _Rn;
};

class StrSen : public ARMSen
{
public:
    string toString() override;
    StrSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::STR;
    }

protected:
    string _Rd;
    string _Rn;
};

class LdrSen : public ARMSen
{
public:
    string toString() override;
    LdrSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::LDR;
    }

protected:
    string _Rd;
    string _Rn;
};

class VstrSen : public ARMSen
{
public:
    string toString() override;
    VstrSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::VSTR;
    }

protected:
    string _Rd;
    string _Rn;
};

class VldrSen : public ARMSen
{
public:
    string toString() override;
    VldrSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::VLDR;
    }

protected:
    string _Rd;
    string _Rn;
};

class VcvtSFSen : public ARMSen
{
public:
    string toString() override;
    VcvtSFSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::VCVT_SF;
    }

protected:
    string _Rd;
    string _Rn;
};

class VcvtFSSen : public ARMSen
{
public:
    string toString() override;
    VcvtFSSen(string Rd, string Rn)
        : _Rd(std::move(Rd))
        , _Rn(std::move(Rn))
    {
        _op = ARMOP::VCVT_FS;
    }

protected:
    string _Rd;
    string _Rn;
};

class BSen : public ARMSen
{
public:
    string toString() override;
    BSen(string Label)
        : _Label(std::move(Label))
    {
        _op = ARMOP::B;
    }

protected:
    string _Label;
};

class BlSen : public ARMSen
{
public:
    string toString() override;
    BlSen(string Func)
        : _Func(std::move(Func))
    {
        _op = ARMOP::BL;
    }

protected:
    string _Func;
};

class BgtSen : public ARMSen
{
public:
    string toString() override;
    BgtSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BGT;
    }

protected:
    string _label;
};

class BgeSen : public ARMSen
{
public:
    string toString() override;
    BgeSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BGE;
    }

protected:
    string _label;
};

class BltSen : public ARMSen
{
public:
    string toString() override;
    BltSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BLT;
    }

protected:
    string _label;
};

class BleSen : public ARMSen
{
public:
    string toString() override;
    BleSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BLE;
    }

protected:
    string _label;
};

class BeqSen : public ARMSen
{
public:
    string toString() override;
    BeqSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BEQ;
    }

protected:
    string _label;
};

class BneSen : public ARMSen
{
public:
    string toString() override;
    BneSen(string label)
        : _label(std::move(label))
    {
        _op = ARMOP::BNE;
    }

protected:
    string _label;
};

class PushSen : public ARMSen
{
public:
    string toString() override;
    PushSen(string rgs)
        : _registers(std::move(rgs))
    {
        _op = ARMOP::PUSH;
    }

protected:
    string _registers;
};

class PopSen : public ARMSen
{
public:
    string toString() override;
    PopSen(string rgs)
        : _registers(std::move(rgs))
    {
        _op = ARMOP::POP;
    }

protected:
    string _registers;
};

class CmpSen : public ARMSen
{
public:
    string toString() override;
    CmpSen(string rn1, string rn2)
        : _rn1(std::move(rn1))
        , _rn2(std::move(rn2))
    {
        _op = ARMOP::CMP;
    }

protected:
    string _rn1;
    string _rn2;
};

class CmnSen : public ARMSen
{
public:
    string toString() override;
    CmnSen(string rn1, string rn2)
        : _rn1(std::move(rn1))
        , _rn2(std::move(rn2))
    {
        _op = ARMOP::CMN;
    }

protected:
    string _rn1;
    string _rn2;
};
class Label : public ARMSen
{
public:
    string toString() override;
    Label(string name)
        : _name(std::move(name))
    {
        _op = ARMOP::UNKNOWN;
    }

protected:
    string _name;
};

class GlobalId : public ARMSen
{
public:
    string toString() override;
    GlobalId(string name)
        : _name(std::move(name))
    {
        _op = ARMOP::UNKNOWN;
    }

protected:
    string _name;
};

}   // namespace ARMGen







#endif   // LLVMIRLEX_ARMSEN_H
