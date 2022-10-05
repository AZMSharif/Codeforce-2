#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,a,c;
    cin>>a;

    for(r=1; r<=a; r++)
    {
        for(c=1; c<=a-r; c++)
        {
            cout<<" ";
        }
        for(c=1; c<=2*r-1; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
