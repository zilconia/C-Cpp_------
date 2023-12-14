// 参照元 https://yumarublog.com/c/c-sizeof/

#include <stdio.h>

// 構造体
struct Data
{
    int i;
    double d;
};

int main() {

    char c;
    short s;
    int i;
    float f;
    struct Data d;
    
    printf("char c: %lu\n", sizeof(c));
    printf("short s: %lu\n", sizeof(s));
    printf("int i: %lu\n", sizeof i);
    printf("float f: %lu\n", sizeof f);
    printf("Data d: %lu\n", sizeof d);
    printf("int: %lu\n", sizeof(int));
    printf("double: %lu\n", sizeof(double));

}