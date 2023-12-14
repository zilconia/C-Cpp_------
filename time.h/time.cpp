#include<stdio.h>
#include<time.h>
int main(void){
    time_t t;
    struct tm *tm;
    char buf[256];
    
    time(&t);
    tm = localtime(&t);
    strftime(buf, sizeof(buf), "%Y年%m月%d日 %H時%M分%S秒", tm);
    printf("%s\n", buf);
    return 0;
}