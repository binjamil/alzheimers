#include <cstdio>

const char* foo() {
    char buf[10] = "foo";
    return buf;
}

int main() {
    printf("%s\n", foo());
}
