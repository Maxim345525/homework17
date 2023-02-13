#include <iostream>
int sum(int a, int b)
{
    if (a - b == 1)
      return 0;
    return b + sum(a, b - 1);
}
int main()
{
    int a;
    std::cout << "Enter start: ";
    std::cin >> a;
    int b;
    std::cout << "Enter end: ";
    std::cin >> b;
    if (a == b || a > b)
        return 0;
    std::cout << "The sum is " << sum(a, b);
    return 0;
}
