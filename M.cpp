#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,m,n,x,c=0;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        n=1;
        x=i;
        while(x>0)
        {
            m=x%10;
            if(m!=4&&m!=7)
            {
                n=0;
                break;
            }
            x=x/10;
        }
        if(n==1)
        {
            c++;
            cout<<i<<" ";
        }

    }
    if (c==0)
    {
        cout<<-1;
    }
    cout<<endl;
    return 0;
}
