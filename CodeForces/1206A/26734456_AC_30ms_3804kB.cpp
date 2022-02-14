#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,m;
    int a[101],b[101];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int k=0;k<m;k++)
    {
        cin>>b[k];
    }
long long x;int a1,b1;bool f1=true,f2=true,f=false;
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<m;k++)
        {f1=true,f2=true;
           x=(a[i]+b[k]);
           for (int i=0;i<n;i++)
           {
               if (x==a[i])
               {
                   f1=false;
                   break;
               }
           }
           for (int i=0;i<m;i++)
           {
               if (x==b[i])
               {
                   f2=false;
                   break;
               }
           }
           if (f1==true&&f2==true)
           {
               cout << a[i] << " " << b[k]<<endl;
                 return 0;
           }

        }
        if (f==true)
           {

               break;
           }
    }
    cout<<a1<<" "<<b1;
}
