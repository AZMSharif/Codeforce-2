#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,i,gcd;
    cin>>p>>n;
    for(i=1; i<=p; i++)
    {
        if(p%i==0&&n%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    return 0;
}
