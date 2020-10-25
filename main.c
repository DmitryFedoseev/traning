#include <stdio.h>

int sum(a, b);
int raz(a, b);
int um(a, b);
float del(a, b);
int test(a, b);

int main(){
    printf("Hello, World!\n");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    test(a, b);
    return 0;
}
int sum(a, b){
     int y;
     y = a + b;
     return(y);
 }
int raz(a, b){
     int y;
     y = a - b;
     return(y);
 }
 int um(a, b){
     int y;
     y = a * b;
     return(y);
 }
 float del(a, b){
     float y;
     y = (float) a / b;
     return(y);
 }
int test(a, b)
{
        if (a + b == sum(a, b))
        {
          printf("%d + %d = %d the answer is correct", a, b, sum(a, b));
          printf("\n");
        }
        if (a - b == raz(a, b))
        {
          printf("%d - %d = %d the answer is correct", a, b, raz(a, b));
          printf("\n");
        }
        float z;
         z = (float) a / b;
        if (z == del(a, b))
        {
          printf("%d / %d = %f the answer is correct", a, b, del(a, b));
          printf("\n");
        }
        if (a * b == um(a, b))
        {
          printf("%d * %d = %d the answer is correct", a, b, um(a, b));
          printf("\n");
        }
}
