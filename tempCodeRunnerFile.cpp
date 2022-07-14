#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int count = 1;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count = 0;
        }
    }
    if (count == 1)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "not a prime number" << endl;
    }

    return 0;
}