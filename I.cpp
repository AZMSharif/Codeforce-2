#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,temp,t=0,m;
    cin>>n;
    temp=n;
    while(n>0)
    {
        m=n%10;
        t=(t*10)+m;
        n=n/10;
    }
    if(temp==t)
    {
        cout<<t<<endl<<"YES"<<endl;
    }
    else{
        cout<<t<<endl<<"NO"<<endl;
    }
    return 0;
}
