#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
pair<int,int>pa[8]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
long long dem =0;
void ktra(int i,int j){
	for(int k = 0 ;k < 8;k++){
		int x = i + pa[k].first;
		int y = j + pa[k].second;
		if(x >= 0 && x < n &&y >= 0 && y < m&&a[x][y]!=-1){
			dem+=a[x][y];
			a[x][y]=0;
		}
	}
}
main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin >> a[i][j];
	}
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==-1){
				ktra(i,j);
			}
		}
	}
	cout<<dem;
}
