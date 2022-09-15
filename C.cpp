#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,i,e=0,o=0,p=0,ne=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            e++;
        }
        if(x%2!=0)
        {
            o++;
        }
        if(x>0)
        {
            p++;
        }
 
        if(x<0)
        {
            ne++;
        }
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<ne<<endl;
    return 0;
}
