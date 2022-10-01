#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n=0,x,i;
    cin>>x;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            n++;
        }
    }
    if(n>0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
