#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
int ans,sum=0;
bool used[1005][1005];
pair<int,int>pa[4]={{-1,0},{0,-1},{0,1},{1,0}};
void back(int i,int j,int sum){
	cout << i <<" "<<j<<endl;
	if(i == n-1&&j==m-1){
		ans = sum;
	}
	int x1,y1,min1=0;
	for(int k = 0;k<4;k++){
		int x = i + pa[k].first;
		int y = j + pa[k].second;
		if(k==0&&x>=0 &&x < n&&y>=0&&y<m&&used[x][y]==false){
			x1 = x;
			y1 = y;
			min1 = a[x][y];
			continue;
		}
		if(x >= 0 && x < n&&y>=0&&y<m&&used[x][y]==false){
			if(min1 > a[x][y]){
				x1 = x;
				y1 = y;
				min1=a[x][y];
			}
		}
	}
	used[x1][y1]=true;
	back(x1,y1,sum+min1);
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m;
		a[n][m]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin >> a[i][j];
		}
		memset(used,false,sizeof(used));
		sum = 0;
		ans = 0;
		used[0][0]=true;
		back(0,0,sum);
		cout<<ans<<endl;
	}
}
