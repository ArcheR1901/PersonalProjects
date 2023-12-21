#include<stdio.h>
int andorcon(int a, int b){
       int d = a & b;
       int e = a | b;
       printf("AND operation on a and b with both hexadecimal and decimal values are %X %d\n", d, d);
       printf("OR operation on a and b with both hexadecimal and deciaml values are %X %d", e, e);
}
int main(){
andorcon(0xAA, 0xCB);
 return 0;
}