#include<bits/stdc++.h>
using namespace std;
int digit_sum(string s)
{
    int val=0;
    for(int i=0;i<s.size();i++)
    {
        val=(val+(s[i]-'0'))%9;
    }
    return val%9;
}
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    k=k%9;
    if(k==0)
    {
        cout<<"9";
        return 0;
    }
    else
    {
        int result=digit_sum(s);
        result=(result*k)%9;
        if(result!=0)
        {
            cout<<result;
        }
        else
        {
            cout<<"9";
        }
    }
}
