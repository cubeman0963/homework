#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,max,low;
    printf("輸入第一個數: ");
    scanf("%d", &a);
    printf("輸入第二個數: ");
    scanf("%d", &b);
    if(a>b) {
        max=a;
        low=b;
    }
    if(a<b) {
        max=b;
        low=a;
    }
    printf("%d 比 %d 來得大\n", max, low);
    return 0;
}
