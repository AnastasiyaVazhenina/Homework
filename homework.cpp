#include <iostream>
int main()
{
    std::cout << "Enter a three-digit number" << std::endl;
    int k = 0;
    std::cin >> k;
    int n1 = k % 10;
    int n2 = (k % 100) / 10;
    int n3 = k / 100;
    std::cout << n1 << n2 << n3 << std::endl;
    // 7
    std::cout << "Enter the number n (1<=n<=999)" << std::endl;
    int n = 0;
    std::cin >> n;
    int s = n % 10;
    int x = (n - s) / 10 + s * 100;
    std::cout << "x=" << x << std::endl;
    // 18
    return 0;
}
