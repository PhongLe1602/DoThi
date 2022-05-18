//#include<bits/stdc++.h>
//using namespace std;
//int a[1005][1005];
//int n,m,ans;
//bool used[1005][1005];
//pair<int,int>pa[4]={{-1,0},{0,-1},{0,1},{1,0}};
//void Back(int i,int j,int sum){
//	if(i == n && j == m){
//		ans = min(ans,sum);
//	}
//	for(int k = 0; k < 4; k++){
//		int x = i + pa[k].first;
//		int y = j + pa[k].second;
//		if(x >= 1 && x <= n &&y >=1 &&y<=m&&used[x][y]==false){
//			used[x][y]= true;
//			Back(x,y,sum+a[x][y]);
//			used[x][y]= false;
//		}
//	}
//}
//main(){
//	int t;cin>>t;
//	while(t--){
//		cin >> n >> m;
//		memset(used,false,sizeof(used));
//		memset(a,0,sizeof(a));
//		for(int i = 1;i<=n;i++){
//			for(int j=1;j<=m;j++) cin >> a[i][j];
//		}
//		ans = INT_MAX;
//		Back(1,1,a[1][1]);
//		cout<<ans<<endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
long long n,m,dem;
int a[1005][1005];
pair<int,int>pa[2]={{1,0},{0,1}};
bool used[1005][1005];
void back(int i,int j){
	if(i==n-1&&j==m-1){
		dem++;
	}
	for(int k=0;k<2;k++){
		int x = i + pa[k].first;
		int y = j + pa[k].second;
		if(x >=0 &&x < n && y >=0 && y < m && used[x][y]==false){
			used[x][y]=true;
			back(x,y);
			used[x][y]=false;
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin >>n >> m;
		memset(used,false,sizeof(used));
		a[n+1][m+1]={0};
		dem = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin >> a[i][j];
		}
		back(0,0);
		cout << dem << endl;
	}
}
