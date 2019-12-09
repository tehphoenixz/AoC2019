#ifndef AOC_5_H
#define AOC_5_H

#include <vector>

#include "IntCodeCPU.h"

namespace AoC_5 {
    long long AB(std::vector<long long> program, int systemID) {
        IntCodeCPU computer(program);
        computer.Input(systemID);
        computer.RunToEnd();
        return computer.Output();
    }
}

#endif