#include<stdio.h>
#include<math.h>
struct StructCHUNHAT{
	float dai=0,rong=0,chuvi;
};
typedef StructCHUNHAT CHUNHAT;
void Nhapdl(CHUNHAT &hcn){
	while(hcn.dai < hcn.rong || hcn.rong < 0 || hcn.dai < 0){
		scanf("%f%f",(&hcn.dai),(&hcn.rong));
	}
}
void Xuatdl(CHUNHAT hcn){
	printf("%f %f %f\n",hcn.dai,hcn.rong,hcn.chuvi);
}
main(){
	CHUNHAT hcn[1005];
	int n=0;
	printf("Nhap n:\n");
	while(n < 4){
		scanf("%d",&n);
	}
	for(int i=1;i<=n;i++){
		Nhapdl(hcn[i]);
		hcn[i].chuvi = (hcn[i].dai+hcn[i].rong)*2;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(hcn[i].chuvi <hcn[j].chuvi){
				hcn[0]= hcn[i];
				hcn[i]=hcn[j];
				hcn[j]=hcn[0];
			}
		}
	}
	for(int i = 1;i<=n;i++){
		Xuatdl(hcn[i]);
	}
}
