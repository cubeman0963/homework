#include<stdio.h>
int main(int argc, char const *argv[])
{
    int guess,answer;
    answer = 67;/*可任意修改數字*/
    printf("猜一個數字: ");
    while(guess!=answer){
        scanf("%d", &guess);
        if(guess>answer){
            printf("太大了,在猜一次!\n");
            continue;
        }
        if(guess<answer){
            printf("太小了,在猜一次!\n");
            continue;
        }
    }
    printf("猜對了,恭喜!\n");
    return 0;
}
