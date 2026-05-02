#include "math_utils.h"
#include <iostream>
#include <spdlog/spdlog.h>

int main(int argc, char* argv[])
{
    std::cout << "argc:" << argc << ",argv:" << argv[0] << "\n";
    std::cout << "current c++ version:" << __cplusplus << "\n";

    int sum = add(100, 99);
    std::cout << "sum=" << sum << std::endl;

    spdlog::info("App starting...");

    int sum1 = add(200, 199);
    spdlog::info("The sum of 200 and 199 is {}", sum1);
}
