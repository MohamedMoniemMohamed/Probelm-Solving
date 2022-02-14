#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   // your code goes here

    int t,id1,id2,n;long long c=0;
    int a[100005];long long x=0;int b[100005];int z=0;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
      cin>>id1;
      a[z]=id1;
      z++;
      cin>>n;
      for (int k=1;k<=n;k++)
      {
          cin>>id2;
          b[x]=id2;
          x++;
      }
    }
    sort(b,b+x);
    int q[10005];int q1=0;
    for (int i=0;i<x;i++)
    {
        if (b[i]!=b[i+1])
        {
            q[q1]=b[i];
            q1++;
        }
    }
   /* for (int i=0;i<q1;i++)
    {
        cout<<q[i]<<endl;
    }*/
    for (int i=0;i<z;i++)
    {
        for (int k=0;k<q1;k++)
        {
            if (a[i]==q[k])q1--;
        }
    }
cout<<q1;



}
