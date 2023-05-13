#include <cstdio>
#include <cstdlib>

int main() {
    int foo = 11;
    free(&foo);
    printf("%d\n", foo);
}
