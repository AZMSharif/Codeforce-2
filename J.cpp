#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        if(n<2||n>1000){
        break;
    }
        t=0;
        for(j=1; j<=i; j++){
           if(i%j==0){
            t++;
           }
        }
        if(t<=2)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
return 0;
}
