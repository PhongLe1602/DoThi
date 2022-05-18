#include<bits/stdc++.h>
using namespace std;
bool used[1005];
vector<int>ve[1005];
int n,m,q,a,b;
void dfs(int u){
	used[u]=true;
	for(int x:ve[u]){
		if(used[x]==false){
			dfs(x);
		}
	}
}
main(){
	int t;cin >> t;
	while(t--){
		memset(used,false,sizeof(used));
		cin >> n >> m;
		for(int i=0;i<=n;i++) ve[i].clear();
		for(int i = 1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		cin >> q;
		while(q--){
			int x,y;
			cin >> x >> y;
			memset(used,false,sizeof(used));
			dfs(x);
			if(used[y]==false) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
}
