#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int b;
    int i,a;
    cin>>a;

    for(i=1; i<=a; i++)
    {
        cin>>b;
        int m=0;
        if(b==0)
        {
            cout<<0;
        }
        while(b>0){
        m=b%10;
        cout<<m<<" ";
        b=b/10;
        }
        cout<<endl;
}
return 0;
}
