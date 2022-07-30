#include<bits/stdc++.h>
using namespace std;
int sum_square(int );
int main()
{
    cout<<sum_square(5)<<endl;
}
int sum_square(int x)
{
    if(x==1)
    return 1;
    return (x*x)+sum_square(x-1);
}