#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans = 0;
    for(int i=1;i<n;i++)
    {
        int temp;
        cin>>temp;
        ans = ans ^ temp;
    }

    for(int i=1;i<=n;i++)
    {
        ans = ans ^ i;
    }

    cout<<ans;

    return 0;

}
