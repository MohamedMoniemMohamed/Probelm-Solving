#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int a[100005];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int mn=a[0],mx=a[n-1];
    int mxx1,mnn1,mxx2,mnn2,mxx,mnn;int mx1,mx2,mx3,mx4,mn1,mn2,mn3,mn4;
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            mxx=abs(a[i]-mx);
            mnn=abs(a[i]-a[i+1]);


        }
        else if (i==n-1)
        {
            mxx=abs(mn-a[i]);
            mnn=abs(a[i-1]-a[i]);

        }
        else{

            mxx1=abs(mx-a[i]);
            mnn1=abs(a[i]-a[i-1]);
            mxx2=abs(mn-a[i]);
            mnn2=abs(mn-a[i]);
            mx1=abs(mx-a[i]);
            mx2=abs(mn-a[i]);
            mx3=abs(a[i+1]-a[i]);
            mx4=abs(a[i-1]-a[i]);
            mn1=abs(mx-a[i]);
            mn2=abs(mn-a[i]);
            mn3=abs(a[i+1]-a[i]);
            mn4=abs(a[i-1]-a[i]);

        }
        if (i==0||i==n-1)
        {
         cout<<mnn<<" "<<mxx<<endl;
        }
        else{
        cout<<min({mn1,mn2,mn3,mn4})<<" "<<max({mx1,mx2,mx3,mx4})<<endl;}

    }

}
