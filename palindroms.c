#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    int f=0;
    int l = (strlen(s)-1);
    printf("Enter a string ");
    scanf("%s", &s);
    while(l>=1){
        if((s[f])==(s[l])){
            printf("It's a palindrome");
        }else{
            printf("Not a palindrome");
        }
          l--;
          f++;
    }
}