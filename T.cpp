#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,x,b,i,s,sum;
    long long int o=0;
    cin>>n>>a>>b;
    for(i=1; i<=n; i++)
    {
        x=i;
        sum=0;
        while(x>0)
        {
            s=x%10;
            x=x/10;
            sum=sum+s;
        }

        if(sum>=a&&sum<=b)
        {
            o=o+i;
        }
    }
    cout<<o<<endl;
    return 0;

}
