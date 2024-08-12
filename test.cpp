#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long lb;
const int N=2e5+10;
#define For(i,a,b) for(int i=a;i<=b;i++)
#define roF(i,a,b) for(int i=a;i>=b;i--)
#define ios ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define ce cout<<"\n"
#define pb push_back
#define ppb pop_back
#define Fr(i,a,b,c) for(int i=a;i<=b;i+=c)
#define rF(i,a,b,c) for(int i=a;i>=b;i-=c)
#define NO; cout<<"NO"<<endl;
#define YES; cout<<"YES"<<endl;
#define kyg " "
#define fi first
#define se second
int a[N];    
int main()
{
	ios;
	int T=1;
	cin>>T;
	while(T--) 
	{
		  char x,y; cin>>x>>y;
    int c1=x-'0';
    int c2=y-'0';
    cout<<c1+c2<<endl;
	}
	return 0;
}
// if(f==1)
// cout<<"YES"<<endl;
// else
// cout<<"NO"<<endl;
// if(f==1)
// cout<<"Yes"<<endl;
// else
// cout<<"No"<<endl;