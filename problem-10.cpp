#include <bits/stdc++.h>
using namespace std;
int base_expo(int, int);
int main()
{
    cout << base_expo(2, 10) << endl;
}
int base_expo(int b, int e)
{
    if (e == 0)
        return 1;
    return (b) * base_expo(b,e -= 1); // base =2 exponent =2 
}
