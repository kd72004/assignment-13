#include<bits/stdc++.h>
using namespace std;
int sum=0;
int   sum_number(int );
int main()
{
    cout<<sum_number(5);
}
int  sum_number(int x)
{
    if(x==1)
    return 1*2-1;
    return (x*2-1) +  sum_number(x-1);
}
