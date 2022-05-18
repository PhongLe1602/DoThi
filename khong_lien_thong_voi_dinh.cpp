#include<bits/stdc++.h>
using namespace std;
bool used[1005];
vector<int>ve[1005];
void dfs(int u){
	used[u]=true;
	for(int x:ve[u]){
		if(used[x]==false){
			dfs(x);
		}
	}
}
main(){
	int n,m;
	cin >> n >> m;
	memset(used,false,sizeof(used));
	for(int i=1;i<=m;i++){
		int x,y;cin >> x >> y;
		ve[x].push_back(y);
		ve[y].push_back(x);
	}
	dfs(1);
	for(int i=1;i<=n;i++){
		if(used[i]==false){
			used[0] = true;
			cout << i <<endl;
		}
	}	
	if(used[0]==false) cout<<0;
}
