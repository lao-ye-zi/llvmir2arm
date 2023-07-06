//
// Created by gao on 7/5/23.
//
#include <fstream>
#include <iostream>
#include <ostream>

#include "antlr4-runtime.h"
#include "tree/AbstractParseTreeVisitor.h"
#include "tree/ParseTree.h"
#include "llvmirLexer.h"
#include "llvmirParser.h"
#include "llvmirVisitor.h"

using namespace antlrcpp;
using namespace antlr4;
using std::cout;
using std::endl;
using tree::ErrorNode;
using tree::ParseTree;
using tree::TerminalNode;
constexpr bool      is_debug    = true;
static std::ostream null_stream = std::ostream(nullptr);



int main(int, const char**)
{
    std::ifstream file;
    std::ofstream outfile;

    auto sourceFileName = "../testsrc/1.ll";

    outfile.open("../testsrc/1.txt", std::ios::out);
    file.open(sourceFileName, std::ios::in);
    if (!file) {
        cout << "no such file" << endl;
        return 0;
    }
//    LOGD("File Fine.");
    ANTLRInputStream  input(file);
    llvmirLexer         lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        //        LOGD(token->toString());
    }

    llvmirParser                   parser(&tokens);
    auto tree = parser.compilationUnit();

    // cout<<parser.blockItem()->toStringTree(true)<<endl;

    auto visitor = Visitor();
    // visitor.visit(tree);
    tree->accept(&visitor);
    // cout << tree->toStringTree(&parser) << endl << endl;

    cout << endl;

    //    outfile << tree->toStringTree(&parser, true) << endl;

//    IRCtrl::g_builder->setFilename(sourceFileName);
//    IRCtrl::g_builder->build(outfile);


    outfile.close();
    return 0;
}