#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	cin.ignore(1);
	for(int i=1;i<n+1;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string num;
		while(ss>>num){
			if(stoi(num)>i){
				cout<<i<<" "<<num<<"\n";
			}
		}
	}
}

