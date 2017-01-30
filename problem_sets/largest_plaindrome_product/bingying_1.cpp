//LargestPalindromeProduct
#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int reverse(int num)
{
    int newNo = 0;
    while (num != 0)
    {
        int digit = num % 10;   
        newNo = newNo * 10 + digit;
        num /= 10;
    }
    return newNo;
}

int main()
{
	clock_t start;
    double duration;
    start = std::clock();
	int largest = 0;
    for (int n1 = 999; n1 >= 100; n1--)
    {
        for (int n2 = 999; n2 >= n1; n2--)
        {
            int product = n1 * n2;
            if (product > largest && reverse(product) == product)
            {
                largest = product;
            }
        }
    }
    cout << largest << endl;
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<< duration <<'\n';
    return 0;
}
