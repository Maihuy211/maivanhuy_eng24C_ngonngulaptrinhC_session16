# include <stdio.h>
void Arr( int *a, int size){
	int i;
	for(i=0;i<size;i++){
		printf("a[%d]= %d \n",i,*(a+i));
	}
}
void newArr( int *a, int size, int val, int pos){
	if(pos<0||pos>size){
    	printf("Vi tri ko hop le");
    }else{
        a[pos]=val;
        Arr(a,size);
	}
}
int main(){
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(int);
	Arr(a,size);
	int val,pos;
	printf("nhap vi tri can cap nhat: ");
	scanf("%d",&pos);
	printf("nhap gia tri can cap nhat: ");
	scanf("%d",&val);
	newArr(a,size,val,pos);
}
