#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum,t,m,n,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        m=min(a,b);
        n=max(a,b);
        sum=0;
        c=0;
        for(j=m+1; j<n; j++)
        {

            if(j%2!=0)
            {
                c++;
                sum=sum+j;
            }
        }
        if(c>0){
                cout<<sum<<endl;
            }
         else{
            cout<<0<<endl;
         }
    }
    return 0;
}
