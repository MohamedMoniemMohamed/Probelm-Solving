#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int a[11][11];
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==1){
            a[i][j]=1;
            }
            else if (j==1){
                a[i][j]=1;
            }
            else{
                a[i][j]=(a[i-1][j]+a[i][j-1]);
            }
        }
    }
    /*for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<a[n][n];
}
