#include<bits/stdc++.h>
using namespace std;
main(){
	int n,l1=1;
	cin >> n;
	int a[n+1][n+1];
	vector<int>ve[n*2+1];
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]==1&&i<j){
				ve[l1].push_back(i);
				ve[l1].push_back(j);
				l1++;
			}
		}
	}
	for(int i =1;i<=n;i++){
		for(int x:ve[i]) cout<<x<<" ";
		cout<<endl;
	}
}
