#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, i, X, temp=0;
    cin>>N;
    for(i=1; i<=N; i++){
       cin>>X;
       if(X>=temp){
        temp=X;
       }
    }
    cout<<temp;
return 0;
}
