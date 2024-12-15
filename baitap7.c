# include <stdio.h>
void Arr( int *a, int size){
	int i;
	for(i=0;i<size;i++){
		printf("a[%d]= %d \n",i,*(a+i));
	}
}
void softArr(int *a, int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j+1]<a[j]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		 }
	}
}
int main(){
	int a[]={1,8,7,2,9,5,3,6,4};
	int size=sizeof(a)/sizeof(int);
	Arr(a,size);
	softArr(a,size);
	printf("mang sau khi sap xep la\n");
	Arr(a,size);
}
