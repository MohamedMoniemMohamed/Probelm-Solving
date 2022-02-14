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
 
 
        int x,q1,q2,q3,q4,num;
        /*x=1012;
        q1=x%10;
            x=x/10;
            q2=x%10;
            x=x/10;
            q3=x%10;
            x=x/10;
            q4=x%10;
 
       cout<<q1<<edl<<q2<<edl<<q3<<edl<<q4<<edl;
       if (q1!=q2&&q1!=q3&&q1!=q4&&q2!=q3&&q2!=q4&&q3!=q4)
            {
                cout<<"yes";
 
            }*/
        cin>>num;
        num++;
        while(1)
        {
            x=num;
            q1=x%10;
            x=x/10;
            q2=x%10;
            x=x/10;
            q3=x%10;
            x=x/10;
            q4=x%10;
            if (q1!=q2&&q1!=q3&&q1!=q4&&q2!=q3&&q2!=q4&&q3!=q4)
            {
                cout<<num;
                break;
            }
            else
                num++;
        }
 
 
 
}