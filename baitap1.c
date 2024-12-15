# include <stdio.h>
int main(){
	int number=21;
	int *Ptr=&number;
	printf("gia tri = %d\n",*Ptr);
	printf("dia chi = %d\n",&number);
	return 0;
}	

