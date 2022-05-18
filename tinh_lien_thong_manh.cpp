#include<bits/stdc++.h>
using namespace std;
vector<int>ve[1005];
bool used[1005];
int n,m;
void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u]==true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(auto x:ve[s]){
			if(!used[x]){
				used[x]=true;
				q.push(x);
			}
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<=n;i++) ve[i].clear();
		memset(used,false,sizeof(used));
		for(int i=1;i<=m;i++){
			int x,y;cin >> x >> y;
			ve[x].push_back(y);
		}
		bfs(1);
		for(int i = 1;i<=n;i++){
			if(!used[i]){
				used[0]=true;
				break;
			}
		}
		if(used[0]==true) cout<<"NO\n";
		else cout << "YES\n";
	}
}
