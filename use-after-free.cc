#include <cstdio>
#include <cstdlib>
#include <cstring>

const char* foo() {
    char *buf = (char*) malloc(10);
    strcpy(buf, "foo");
    printf("%s\n", buf);
    return buf;
}

int main() {
    const char *s = foo();
    free((void*) s);
    printf("%s\n", s);
}
