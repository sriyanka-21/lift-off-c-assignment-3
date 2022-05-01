#include <stdio.h>
int gcd(int x, int y);
int main() {
    int x,y;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    printf("G.C.D of %d and %d is %d.", x, y, gcd(x, y));
    return 0;
}

int gcd(int x, int y) {
    if (y != 0)
        return gcd(y, x % y);
    else
        return x;
}
