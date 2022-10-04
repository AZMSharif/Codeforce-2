#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,j;
    cin>>a;
    for(i=a; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
