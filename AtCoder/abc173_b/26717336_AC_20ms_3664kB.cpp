#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   // your code goes here
    int t;long long c0=0,c1=0,c2=0,c3=0;
    string s;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        cin>>s;
        if (s=="AC")c0++;
        else if (s=="WA")c1++;
        else if (s=="TLE")c2++;
        else if (s=="RE")c3++;
    }
    cout<<"AC x "<<c0<<endl;
    cout<<"WA x "<<c1<<endl;
    cout<<"TLE x "<<c2<<endl;
    cout<<"RE x "<<c3<<endl;
}
