#include<bits/stdc++.h>
using namespace std;
class NV{
	public:
		string ma,name;
	private:
		int hsl,lcb,pc,tong;
	
};
main(){
	NV a[10];
	for(int i=1;i<=3;i++){
		cin >> a[i].ma;
		scanf("\n");
		getline(cin,a[i].name);
		cin >> a[i].hsl >> a[i].lcb >> a[i].pc;
		a[i].tong=a[i].hsl*a[i].lcb+a[i].pc;
	}
	for(int i=1;i<=3;i++){
		cout <<a[i].ma<<" ";
		cout<<a[i].tong<<endl;
	}
}

