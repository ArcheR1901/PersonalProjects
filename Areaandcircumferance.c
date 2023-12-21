#include<stdio.h>
int main()
{
    // printf("Hey SpaceSahil\n");
    // printf("Hello World");  
    float pi = 3.14;
    float r;
    float area;
    float circumferance;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = (3.14*r*r);
    circumferance = (2 * 3.14 * r);
    printf("Area of circle is %.3f\n", area);
    
    printf("Perimeter of circle is %.3f", circumferance);

}  