#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b){
	if(a.first < b.first) return true;
	else if(a.first == b.first){
		if(a.second < b.second) return true;
		return false;
	}
	return false;
}
main(){
	int n;cin>>n;
	pair<int,int>pa[n+1];
	for(int i=1;i<=n;i++){
		int x,y;
		cin >> x >> y;
		pa[i].first = x;
		pa[i].second = y;
	}
	stable_sort(pa+1,pa+n+1,cmp);
	for(int i = 1; i <= n; i++){
		cout<<pa[i].first<<" "<<pa[i].second << endl;
	}
}
