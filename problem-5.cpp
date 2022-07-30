#include<bits/stdc++.h>
using namespace std;
int sum=0;
int sum_digit(int);
int main()
{
    cout<<sum_digit(176)<<endl;
}
int sum_digit(int x)
{
    if(x==0)
    return sum;
    sum+=x%10;
    return sum_digit(x/=10);
}