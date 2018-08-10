#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("輸入第一個整數: ");
    scanf("%d", &a);
    printf("輸入第二個整數: ");
    scanf("%d", &b);
    c = a + b;
    printf("結果是: %d\n", c);
    return 0;
}
