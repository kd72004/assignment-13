#include<bits/stdc++.h>
using namespace std;
int fact=1;
int factorial(int );
int main()
{
    cout<<factorial(5);
}
int factorial(int x)
{
    if(x==1)
    return 1;
    return (x)*factorial(x-1);
}