#include <stdio.h>
void addArr(int *a, int *length, int position){
    int i;
	for (i=*length;i>position;i--){
        *(a + i) = *(a + i + 1);
    }
    (*length)--;
}
void arr(int *a, int length){
    int i;
    for (i = 0; i < length; ++i){
        printf("a[%d]= %d \n",i,*(a + i));
    }
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int length = sizeof(a) / sizeof(*a);
    printf("Mang ban dau: \n");
    arr(a, length);
    int position,value;
	printf("nhap vi tri can xoa: ");
	scanf("%d",&position);
    addArr(a, &length, position);
    if(position<0||position>length){
    	printf("Vi tri ko hop le");
    }else{
	    printf("\nMang sau khi xoa: \n");
        arr(a, length);
    }
    return 0;
}
