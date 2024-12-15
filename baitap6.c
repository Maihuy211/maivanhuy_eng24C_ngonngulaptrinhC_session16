# include <stdio.h>
void Arr( int *a, int size){
	int i;
	for(i=0;i<size;i++){
		printf("a[%d]= %d \n",i,*(a+i));
	}
}
void earchArr(int *a, int size,int x){
	int i,check=-1;
	for(i=0;i<size;i++){
		if(a[i]==x){
			check=i;
			break;
	    }
	}
	if(check==-1){
		printf("ko tim thay %d trong mang",x);
	}else{
		printf("vi tri cua phan tu %d trong mang la: %d",x,i);
	}
}
int main(){
	int a[]={1,2,3,4,5,6,7};
	int size=sizeof(a)/sizeof(int);
	Arr(a,size);
	int x;
	printf("nhap so muon tim: ");
	scanf("%d",&x);
	earchArr(a,size,x);
}
