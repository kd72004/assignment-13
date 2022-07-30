#include<bits/stdc++.h>
using namespace std;
int c=0;
int count_num(int );
int main()
{
    cout<<count_num(123)<<endl;
}
int count_num(int x)
{
    if(x==0)
    {
        return c;
    }
    c++;
    return count_num(x/=10);
}