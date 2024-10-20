#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    if (a==0)
    {
        return b;
    }else if (b==0)
    {
        return a;
    }else if (a==0 && b==0)
    {
        return 0;
    }else if (a>b)
    {
        return gcd(a%b,b);
    }else if (b>a)
    {
        return gcd(a,b%a);
    }else
    {
        return gcd(a,b%a);
    }
}

int main() {
    // Test 1
    if (gcd(1, 1) == 1)
        std::cout << "Test 1 passed" << std::endl;
    else std::cout << "Test 1 failed" << std::endl;
    // Test 2
    if (gcd(20, 20) == 20)
        std::cout << "Test 2 passed" << std::endl;
    else std::cout << "Test 2 failed" << std::endl;
    // Test 3
    if (gcd(93, 1) == 1)
        std::cout << "Test 3 passed" << std::endl;
    else std::cout << "Test 3 failed" << std::endl;
    // Test 4
    if (gcd(128, 192) == 64)
        std::cout << "Test 4 passed" << std::endl;
    else std::cout << "Test 4 failed" << std::endl;
    // Test 5
    if (gcd(351, 127) == 1)
        std::cout << "Test 5 passed" << std::endl;
    else std::cout << "Test 5 failed" << std::endl;
    // Test 6
    if (gcd(1, 37) == 1)
        std::cout << "Test 6 passed" << std::endl;
    else std::cout << "Test 6 failed" << std::endl;
    // Test 7
    if (gcd(512, 384) == 128)
        std::cout << "Test 7 passed" << std::endl;
    else std::cout << "Test 7 failed" << std::endl;
    // Test 8
    if (gcd(625, 575) == 25)
        std::cout << "Test 8 passed" << std::endl;
    else std::cout << "Test 8 failed" << std::endl;
    if (gcd(0, 42) == 42)

        std::cout << "Test 9 passed" << std::endl;

    else std::cout << "Test 9 failed" << std::endl;

    if (gcd(0, 0) == 0)

        std::cout << "Test 10 passed" << std::endl;

    else std::cout << "Test 10 failed" << std::endl;

    if (gcd(42, 0) == 42)

        std::cout << "Test 11 passed" << std::endl;

    else std::cout << "Test 11 failed" << std::endl;
    return 0;
}
