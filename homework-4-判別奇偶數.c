#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("輸入你想判別的數字: ");
    scanf("%d", &number);
    if(number%2==0){
        printf("此數為偶數\n");
    }
    if(number%3==0){
        printf("此數為奇數\n");
    }
    return 0;
}
