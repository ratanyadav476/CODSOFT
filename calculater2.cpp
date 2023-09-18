#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int  a, b;
    int n;
    float result = 0;
    cout << "enter the condation n" << endl;
    cin >> n;
    cout << "enter the a" << endl;
    cin >> a;
    cout << "enter the b" << endl;
    cin >> b;
    if (n==1)
    {
        result = a + b;
        cout << result;
    }
    else if (n == 2)

    {
        result = a - b;
        cout << result;
    }
    else if (n == 3)

    {
        result = a * b;
        cout << result;
    }
    else if (n == 4)

    {
        result = a / b;
        cout << result;
    }
    else
    {
        cout << "case not exist" << endl;
    }
    return 0;
}