#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   // your code goes here

    int n,k,s=0;
    int a[1005];
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<k;i++)
    {
        s+=a[i];
    }
cout<<s;



}
