#include <iostream>
using namespace std;

int factorial()
{
    int n;
    cin >> n;
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    cout << factorial();

    return 0;
}