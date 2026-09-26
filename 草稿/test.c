#include <stdio.h>
int a = 10;
int b;
const char *s = "hello";
void plus(int a, int b);

int add(int x, int y) {
    return x + y;
}
int main(){
    add(a,b);
    printf("%s",s);
    return 0;
}
