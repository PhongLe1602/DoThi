#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
 
int main(){
	int n;cin>>n;
	cin.ignore(1);
	for(int i=0;i<n;i++){
		string s;getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			int x = stol(tmp);
			a[i+1][x]=1;
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

