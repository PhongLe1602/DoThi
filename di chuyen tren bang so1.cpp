#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin >> a[i][j];
		}
		for(int i=0;i<n;i++){
			for(int j=0;i<m;j++){
				if(i==0){
					if(j==0){
						a[i][j]+=min(a[i][j+1],a[i+1][j]);
					}else if(j>0&&j < m - 1){
						a[i][j]+=min(a[i][j+1],min(a[i][j-1],a[i+1][j]));
					}else if(j == m - 1){
						a[i][j]+=min(a[i][j-1],a[i+1][j]);
					}
				}else if(i > 0 &&i < n - 1){
					if(j==0){
						a[i][j]+=min(a[i][j+1],min(a[i+1][j],a[i-1][j]));
					}else if(j < m - 1){
						a[i][j]+=min(min(a[i-1][j],a[i][j+1]),min(a[i][j-1],a[i+1][j]));
					}else if(j == m - 1){
						a[i][j]+=min(a[i][j-1],min(a[i+1][j],a[i-1][j]));
					}
				}else if(i==n-1){
					if(j==0){
						a[i][j]+=min(a[i][j+1],a[i-1][j]);
					}else if(j>0&&j < m - 1){
						a[i][j]+=min(a[i][j+1],min(a[i][j-1],a[i-1][j]));
					}else if(j == m - 1){
						a[i][j]+=min(a[i][j-1],a[i-1][j]);
					}
				}
			}
		}
		cout << a[n-1][m-1]<<endl;
	}
}
