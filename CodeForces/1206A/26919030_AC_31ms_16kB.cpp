#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,m;
    int a[1001],b[1001];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
int x;int a1,b1;bool f=false;
if (n>m){
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<m;k++)
        {
           x=a[i]+b[k];
           if (binary_search(a,a+n,x)==false&&binary_search(b,b+m,x)==false)
           {
               a1=a[i];
               b1=b[k];
               f=true;
               break;
           }

        }
        if (f==true)break;
    }
    cout<<a1<<" "<<b1;
  }
  else if (m>n){
    for (int k=0;k<m;k++)
    {
        for (int i=0;i<n;i++)
        {
           x=a[i]+b[k];
           if (binary_search(a,a+n,x)==false&&binary_search(b,b+m,x)==false)
           {
               a1=a[i];
               b1=b[k];
              f=true;
               break;
           }

        }
        if (f==true)break;
    }
    cout<<a1<<" "<<b1;
  }
  else {
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<m;k++)
        {
           x=a[i]+b[k];
           if (binary_search(a,a+n,x)==false&&binary_search(b,b+m,x)==false)
           {
               a1=a[i];
               b1=b[k];
               f=true;
               break;
           }

        }
        if (f==true)break;
    }
    cout<<a1<<" "<<b1;
  }
}