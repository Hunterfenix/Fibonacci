#include <iostream>

int main()
{
    int count, t1 = 0, t2 = 1, nx = 0;
    std::cout << "quanti cifre vuoi  ";
    std::cin >> count;
    for (int i = 1; i <= count; i++)
    {
        if (i == 1)
        {
            std::cout << t1 << ",";
            continue;
        }
        if (i == 2)
        {
            std::cout << t2 << ",";
            continue;
        }
        nx = t1 + t2;
        t1 = t2;
        t2 = nx;
        std::cout << nx << ",";
    }
    return 0;
}