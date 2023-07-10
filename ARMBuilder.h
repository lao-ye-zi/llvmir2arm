//
// Created by litiansuo on 7/1/23.
//

#ifndef LLVMIRLEX_ARMBUILDER_H
#define LLVMIRLEX_ARMBUILDER_H

#include <string>
#include "llvmirParser.h"


namespace ARMGen{



    enum condition {
        EQ, // ==
        NE, // !=
        GT, // >
        GE, // >=
        LT, // <
        LE, // <=
        NOP
    };

    class ARMBuilder{
    public:
        ARMBuilder();

        static std::string  registerMapBuilder();
        static std::string globalIdentBuilder(llvmirParser::GlobalDefContext *context);
        static std::string funcHeaderBuilder(llvmirParser::FuncHeaderContext *context);
        static std::string labelBuilder(std::string context);
        static void allocaBuilder(llvmirParser::LocalDefInstContext *context);
        static std::string allocaAllBuilder();
        static std::string loadBuilder(llvmirParser::LocalDefInstContext *context);
        static std::string addBuilder(llvmirParser::LocalDefInstContext *context);
        static std::string subBuilder(llvmirParser::LocalDefInstContext *context);
        static std::string getBuilder(llvmirParser::LocalDefInstContext *context);


        static std::string storeBuilder(llvmirParser::StoreInstContext *context);
        static std::string retBuilder(llvmirParser::RetTermContext *context);
        static std::string brBuilder(llvmirParser::BrTermContext *context);

        static std::string fnStart();
        static std::string fnEnd();

        static void makeGlobalId(llvmirParser::ValueContext *Rn);


        static std::string getRegister();
        static std::string getId(std::string basicString);
        static std::string makeSp(int offset);
        static std::string intValue(llvmirParser::IntConstContext *context);
        static std::string floatValue(llvmirParser::FloatConstContext *context);
        static std::string arrayValue(llvmirParser::ArrayConstContext *context);
        static std::string zeroValue(llvmirParser::ArrayTypeContext *context);
        std::string        getGlobalId(std::string basicString);
    };


    }
#endif //LLVMIRLEX_ARMBUILDER_H
