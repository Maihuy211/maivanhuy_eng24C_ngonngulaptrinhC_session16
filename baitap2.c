# include <stdio.h>
void swap(int *num1, int *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main(){
	int num1=21;
	int num2=10;
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	swap(&num1,&num2);
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
}
