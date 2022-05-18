#include<bits/stdc++.h>
using namespace std;
bool used[1005];
vector<int>ve[1005];
vector<pair<int,int>>v;
int n,m,u;
void dfs(int u){
	used[u]=true;
	for(int x:ve[u]){
		if(used[x]==false){
			v.push_back({u,x});
			dfs(x);
		}
	}
}
main(){
	int t;cin >> t;
	while(t--){
		memset(used,false,sizeof(used));
		cin >> n >> m >> u;
		for(int i=0;i<=n;i++) ve[i].clear();
		v.clear();
		for(int i = 1;i<=m;i++){
			int x,y;cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		dfs(u);
		if(v.size() < n-1) cout<<-1<<endl;
		else{
			for(auto x:v) cout << x.first<<" "<<x.second<<endl;
		}
	}
}
