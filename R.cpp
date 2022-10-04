#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,sum,p,q;
    while(1)
    {
        cin>>a>>b;
        sum=0;
        if(a<=0||b<=0)
        {
            break;
        }
       p=max(a,b);
       q=min(a,b);

            for(i=q; i<=p; i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
        }

    return 0;
}
