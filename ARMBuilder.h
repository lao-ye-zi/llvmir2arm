//
// Created by litiansuo on 7/1/23.
//

#ifndef LLVMIRLEX_ARMBUILDER_H
#define LLVMIRLEX_ARMBUILDER_H

#include <string>
#include "llvmirParser.h"
#include "ARMProgram.h"

#define LONG_SIZE 4

namespace ARMGen{

class ARMBuilder
{
public:
    ARMBuilder() = default;
    string toString();

    void globalIdentBuilder(llvmirParser::GlobalDefContext* context);
    void funcHeaderBuilder(llvmirParser::FuncHeaderContext* context);
    void labelBuilder(const std::string& context);
    void allocaBuilder(const std::string& LocalIdent, llvmirParser::TypeContext* type = nullptr);
    void allocaAllBuilder();
    void loadBuilder(std::string Rd, std::string Rn);
    void addBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void faddBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void subBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void fsubBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void mulBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void fmulBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void sdivBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void fdivBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);
    void sremBuilder(const std::string& Rd, std::string Rn1, std::string Rn2);


    void getBuilder(
        std::string                                  LocalId,
        std::vector<llvmirParser::TypeValueContext*> typeValue,
        llvmirParser::TypeContext*                   type
    );
    void getCheck(std::string LocalId);
    void callRegister(llvmirParser::CallInstContext* context, string local_ = "");
    void callBuilder(llvmirParser::CallInstContext* context, string local_ = "");
    void bitcastBuilder(string Rd, string Rn);
    void memsetBuilder(string start_, int space_);
    void zextBuilder(string rd_, string rn_);


    void icmpMapBuilder(const string& bool_, const string& flag_);
    void icmpBuilder(string& rn1, string& rn2);

    void storeBuilder(std::string Rn, std::string Rd);
    void retBuilder(llvmirParser::RetTermContext* context);
    void brBuilder(llvmirParser::BrTermContext* context);
    void condBrBuilder(string bool_, string label1, string label2);

    void releaseMapBuilder(llvmirParser::FuncBodyContext* context);
    void mapInsert(std::string Rd, const std::string& Rn);
    void release(const std::string& Rg);
    void makeMapGreatAgain();
    void idInsert(std::string id_);
    void fnEnd();
    void push_rg(string rg);

    static void makeGlobalId(llvmirParser::ValueContext* Rn);


    std::string         getRegister(const std::string Id);
    void                swapRegister();
    void                removeRegister(const std::string& Id);
    std::string         getId(std::string basicString);
    std::string         makeSp(int offset);
    std::string         intValue(const string& context);
    std::string         floatValue(const string& context);
    std::vector<string> arrayValue(llvmirParser::ArrayConstContext* context);
    std::string         zeroValue(llvmirParser::ArrayTypeContext* context);
    std::string         getGlobalId(std::string basicString);

protected:
    std::vector<std::shared_ptr<TopEntity>> Tops;
};


    }
#endif //LLVMIRLEX_ARMBUILDER_H
