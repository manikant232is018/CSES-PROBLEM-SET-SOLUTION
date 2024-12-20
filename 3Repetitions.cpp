#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int maxlength = INT_MIN;
    int last = 0;
    int i;
    for(i=1;i<n;i++)
    {
        if(str[i] == str[i-1])
        {
            continue;
        }
        else
        {
            maxlength = max(maxlength,i-last);
            last = i;
        }
    }

     maxlength = max(maxlength,i-last);
     cout<<maxlength;

    return 0;
}

