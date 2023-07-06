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
        static std::string allocaBuilder(int subspace);
        static std::string loadBuilder(llvmirParser::InstructionContext *context);
        static std::string addBuilder(llvmirParser::InstructionContext *context);
        static std::string subBuilder(llvmirParser::InstructionContext *context);

        static std::string storeBuilder(llvmirParser::InstructionContext *context);


        static std::string getRegister();
    };


    }
#endif //LLVMIRLEX_ARMBUILDER_H
