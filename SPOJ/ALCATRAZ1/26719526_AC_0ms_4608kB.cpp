#include <iostream>

using namespace std;

int main()
{
    int t;long long sum=0;
    cin>>t;
    string s;
    for (int f=1;f<=t;f++)
    {
        cin>>s;
        for (int i=0;i<s.length();i++)
        {
            int a;
            a=s[i]-'0';
            sum+=a;

        }
        cout<<sum<<endl;
        sum=0;
    }
}
