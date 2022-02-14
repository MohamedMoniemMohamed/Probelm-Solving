#include <iostream>
#include <algorithm>
using namespace std;
int main()
{   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // your code goes here
    int t,a;long long c=0;int freq1[200]={0},freq2[200]={0};int fr1[200]={0},fr2[200]={0};int x1[200]={0},x2[200]={0};
    cin>>t;
    string s,z;
    for (int f=1;f<=t;f++)
    {

        cin>>s;
        cin>>z;
        sort(s.begin(),s.end());
        sort(z.begin(),z.end());
        int len1=s.length(),len2=z.length();
        int mn;
        for (int i=0;i<len1;i++)
        {     if ((int)s[i]>=97&&(int)s[i]<=123){
              freq1[s[i]-'a']++;}
              if ((int)s[i]>=48&&(int)s[i]<=57){
                    //cout<<"yes s"<<endl;
              x1[s[i]-'0']++;
              }
              if ((int)s[i]>=65&&(int)s[i]<=90) {
                fr1[s[i]-'A']++;
              }

        }
        for (int i=0;i<len2;i++)
        {
             if ((int)z[i]>=97&&(int)z[i]<=123){
              freq2[z[i]-'a']++;}
             if ((int)z[i]>=48&&(int)z[i]<=57){
                   // cout<<"yez z"<<endl;
                x2[z[i]-'0']++;
              }
             if ((int)z[i]>=65&&(int)z[i]<=90) {
                fr2[z[i]-'A']++;
              }
        }
        for (int i=0;i<200;i++)
        {
            if (freq1[i]>0&&freq2[i]>0)
            {
               mn=min(freq1[i],freq2[i]);
               c+=mn;
            }
            if (fr1[i]>0&&fr2[i]>0)
            {
               mn=min(fr1[i],fr2[i]);
               c+=mn;
            }
            if (x1[i]>0&&x2[i]>0)
            {//cout<<"yes"<<endl;
               mn=min(x1[i],x2[i]);
               c+=mn;
            }
        }
        cout<<c<<endl;
        c=0;
        // freq1[200]={0},freq2[200]={0};fr1[200]={0},fr2[200]={0};
        for (int i=0;i<200;i++)
        {
            freq1[i]=0;
            freq2[i]=0;
            fr1[i]=0;
            fr2[i]=0;
            x1[i]=0;
            x2[i]=0;

        }


   }
}
