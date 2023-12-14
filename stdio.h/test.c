#include<stdio.h>
int main(void){
    char a;
    
    printf("Hello World!\n");
    printf("何か入力せよ：");
    scanf("%c", &a);

    printf("\n入力結果：%c\n", a);
    return 0;
}