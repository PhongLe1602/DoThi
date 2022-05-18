#include<bits/stdc++.h>
using namespace std;
bool check[1005];
int n,m,k;
vector<int>ve[1005];
void Back(int u){
	cout << u <<" ";
	for(int x:ve[u]){
		if(check[x]==false){
			check[x]=true;
			Back(x);
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m >> k;
		memset(check,false,n+1);
		for(int i=0;i<=n;i++) ve[i].clear();
		for(int i = 1;i<=m;i++){
			int x,y;cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		check[k]=true;
		Back(k);
		cout<<endl;
	}
}

