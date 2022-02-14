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
sort(a,a+n);sort(b,b+m);
    cout<<a[n-1]<<" "<<b[m-1];
}
