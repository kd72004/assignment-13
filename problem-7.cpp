#include<bits/stdc++.h>
using namespace std;
int HCF(int ,int );
int main()
{
    cout<<HCF(5,7)<<endl;
}
int HCF(int x,int y)
{
    if(x%y==0)
    return y;
    return HCF(y,x%y);
}