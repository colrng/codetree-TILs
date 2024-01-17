#include<stdio.h>

int main(){

int a, b, c,mid;

scanf("%d %d %d",&a,&b,&c);

((a>b)&&(b>c) || (b>a)&& (b<c))?mid=b:printf(""); //b가 중간값이라면 mid는 b 입니다. a>b>c or c>b>a 

((b>a)&&(a>c) || (a>b)&& (a<c))?mid=a:printf(""); //a가 중간값이라면 mid는 a 입니다. b>a>c or c>a>b

((a>c)&&(c>b) || (a<c)&& (c<b))?mid=c:printf(""); //c가 중간값이라면 mid는 c입니다. a>c>b or b>c>a

printf("%d",mid); //mid를 출력합니다. 



}