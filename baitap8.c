# include <stdio.h>
# include <string.h>
void printftString(char *inputString){
    fputs(inputString,stdout);
}
void reverseString(char *inputString){
    int i;
    for(i=strlen(inputString)-1;i>=0;i--){
    	printf("%c",*(inputString+i));
    }
}
int main(){
    char inputString[100];
    printf("nhap chuoi inputString: ");
    fgets(inputString,100,stdin);
    printftString(inputString);
    printf("chuoi sau khi dao nguoc la: \n");
    reverseString(inputString);
   return 0;
}
