#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}

int n,m;
vi adj[100001];
bool used[100001];

void dfs(int u){
	used[u]=true;
	for(int x :adj[u]){
		if(!used[x])
			dfs(x);
	}
}


void inp(){
	cin>>n>>m;
	FOR(i,0,m){
		int x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms(used,false);
	dfs(1);
	bool ok = true;
	FOR(i,1,n+1){
		if(!used[i]){
			//cout<<i<<endl;
			ok=false;break;
		}
	}
	cout<<(ok ? "YES\n" : "NO\n");
	FOR(i,1,n+1) adj[i].clear();
}


int main(){
	//FileIO();
	int t;cin>>t;
	while(t--){
		inp();
	}
}
