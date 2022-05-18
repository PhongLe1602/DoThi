#include<bits/stdc++.h>
using namespace std;
bool used[1005];
int n,m,k;
vector<int>ve[1005];
void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		cout << s << " ";
		for(int x:ve[s]){
			if(used[x]==false){
				used[x]= true;
				q.push(x);
			}
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m >> k;
		memset(used,false,sizeof(used));
		for(int i = 0; i <= n; i++) ve[i].clear();
		for(int i = 1;i <= m;i++){
			int x,y; cin >> x >> y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		bfs(k);
		cout << endl;
	}
}
