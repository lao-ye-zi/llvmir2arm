cmake_minimum_required(VERSION 3.15)

project(llvmirLex)
set(CMAKE_CXX_STANDARD 17)
set(THREADS_PREFER_PTHREAD_FLAG ON)


# add antlr4
include_directories(/usr/local/include/antlr4-runtime)
find_package(Threads REQUIRED)
link_directories(/usr/local/lib)

# add source files like CBaseListener.cpp, CBaseVisitor.cpp, etc.
file(GLOB SRC_LIST_LLVMIR ${PROJECT_SOURCE_DIR}/llvmir*.cpp)
file(GLOB SRC_LIST_LLVMIR ${SRC_LIST_LLVMIR} ${PROJECT_SOURCE_DIR}/IR*.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST_LLVMIR} ARMBuilder.h InstructionBuilder.h ARMLogger.h BuilderNeed.h
        main.cpp
        ARMBuilder.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC /usr/local/include/antlr4-runtime)
target_link_libraries(${PROJECT_NAME} antlr4-runtime)
target_link_libraries(${PROJECT_NAME} Threads::Threads)
