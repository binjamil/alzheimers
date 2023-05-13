#include <cstdio>

int* foo(int a) {
    return &a;
}

int main() {
    int *ptr = foo(11);
    printf("%d\n", *ptr);
}
