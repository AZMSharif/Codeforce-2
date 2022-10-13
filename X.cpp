#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,x,i,c;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        int s=0;
        c=0;
        x=0;
        cin>>a;
        while(a>0)
        {
            x=a%2;
            a=a/2;
            if(x==1)
            {
                c++;
            }
        }
        s=pow(2,c)-1;
        cout<<s<<endl;
    }

    return 0;
}
