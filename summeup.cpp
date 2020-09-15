# lang-tools-time-compl.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {

	ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll sum=0;
        while(n>0)
        {
           ll x;
            x=n%10;
            sum=sum+x;
            n=n/10;
        }
        cout<<sum<<endl;
    }
}
