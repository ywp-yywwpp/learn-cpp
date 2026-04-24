#include <iostream>

int add(int, int);

int main(int argc, char *argv[])
{
    std::cout << "argc:" << argc << ",argv:" << argv[0] << "\n";
    std::cout << "current c++ version:" << __cplusplus << "\n";

    int sum = add(100, 99);
    std::cout << "sum=" << sum << std::endl;
}

int add(int x, int y)
{
    return x + y;
}
