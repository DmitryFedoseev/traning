#include <stdio.h>

int sum(a, b);
int raz(a, b);
int um(a, b);

int main(){
    printf("Hello, World!\n");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
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
