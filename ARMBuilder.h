//
// Created by litiansuo on 7/1/23.
//

#ifndef LLVMIRLEX_ARMBUILDER_H
#define LLVMIRLEX_ARMBUILDER_H

#include <string>

namespace ARMGen{

    std::string Registers[] = { "r0", "r1", "r2", "r3", "r4", "r5", "r6",  "r7", "r8", "r9", "r10", "r11", "r12", "sp", "lr", "pc"};
    std::string Tab = "\t";
    std::string NewLine = "\n";

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

        std::string  registerMapBuilder();
        std::string typedefBuilder();
        std::string globalIdentBuilder();
        std::string InternalLinkageBuilder();
    };

}

#endif //LLVMIRLEX_ARMBUILDER_H
