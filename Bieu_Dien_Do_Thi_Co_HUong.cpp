#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int>ve[n+1];
		for(int i = 1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			ve[x].push_back(y);
		}
		for(int i=1;i<=n;i++) sort(ve[i].begin(),ve[i].end());
		for(int i = 1;i<=n;i++){
			cout << i <<": ";
			for(int k:ve[i]){
				cout <<k<<" ";
			}
			cout<<endl;
		}
	}
}
