#include<iostream>
#include<cstring>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int i=4;
    double d=4.0;
    string s = "HackerRank ";
    int val;
    double ans;
    string res,result;
    cin>>val>>ans;
    getline(cin>> ws,res);
    val=val+i;
    ans=ans+d;
    result=s+res;
    cout<<val<<"\n"<<fixed<<setprecision(1)<<ans<<"\n"<<result<<endl;
    return 0;
}
