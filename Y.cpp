#include <bits/stdc++.h>
using namespace std;
int main()
{

  int i,n,T=0;

  int t1 = 0, t2 = 1;
  cin>>n;
  cout<<t1<<" ";
  for (i =2; i<=n; ++i) {
    t1 = t2;
    t2 = T;
    T = t1 + t2;
    cout<<T<<" ";
  }
  cout<<endl;
  return 0;
}
