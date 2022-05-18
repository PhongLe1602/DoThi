#include<bits/stdc++.h>
using namespace std;
int n,m,g;
bool used[1005];
vector<int>ve[1005];
vector<pair<int,int>>v;
void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int x:ve[s]){
			if(used[x]==false){
				v.push_back({s,x});
				used[x]=true;
				q.push(x);
			}
		}
	}
	
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m >> g;
		memset(used,false,sizeof(used));
		for(int i=0;i<=n;i++) ve[i].clear();
		v.clear();
		for(int i=1;i<=m;i++){
			int x,y;cin >> x >> y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		bfs(g);
		if(v.size()<n-1) cout<<-1<<endl;
		else{
			for(auto x:v) cout<<x.first<<" "<<x.second<<endl;
		}
	}
}
