#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define edl "\n"
string NO="NO",YES="YES",no="no",yes="yes",Yes="Yes",No="No";
int t;//test;
ll n;
void fast()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int a[100009];//1e5;
int fr[100009];//1e5;
//map<string,int>fr;//فركونسي للاسترنج
int main()
{fast();

    // الحل
    // row=3;col=3
        int x,row,col;
        for (int i=1;i<=5;i++)
        {
            for (int j=1;j<=5;j++)
            {
                cin>>x;
                if (x==1)
                {
                    row=i;
                    col=j;
                }
            }
        }
    ll ans =abs(3-row)+abs(3-col);
    cout<<ans;



}
