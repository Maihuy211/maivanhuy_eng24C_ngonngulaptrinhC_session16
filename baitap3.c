# include<stdio.h>
int sum(int a , int b,int  *result){
	*result=a+b;
	return *result;
}
int main(){
	int a,b,result;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	printf("tong = %d", sum(a,b,&result));
}
