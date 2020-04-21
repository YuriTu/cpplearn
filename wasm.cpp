#include <iostream>

int factorial(int n);

int main()
{
    using namespace std;
    int rs = factorial(10);

    cout << "factorial 10 rs is : " << rs << std::endl;

    return 0;
}

// extern "C" {
// int factorial(int n)
// {
//     if (n <= 1) return 1;
//     return n * factorial(n -1);
// }
// }