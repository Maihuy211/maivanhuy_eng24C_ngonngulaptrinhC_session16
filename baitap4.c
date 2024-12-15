# include <stdio.h>
void Arr( int a[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",*(a+i));
	}
}
int main(){
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(int);
	Arr(a,size);
}
