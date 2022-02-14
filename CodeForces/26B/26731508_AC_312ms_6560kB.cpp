#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long len=s.length();
    long long r=0,l=0,c=0;
    for (int i=0;i<len;i++)
    {
        if (s[i]== '(' )l++;
        else if (s[i]==')')
        {
            if (l>0)
            c+=2;
            if (l>0)
            l--;
        }
    }
    cout<<c;
}
