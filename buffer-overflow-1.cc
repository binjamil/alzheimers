#include <cstdio>
#include <cstdlib>
#include <cstring>

const char* foo() {
    char *buf = (char*) malloc(3);
    strcpy(buf, "foo");
    printf("%s\n", buf);
    return buf;
}

int main() {
    const char *s = foo();
    printf("%s\n", s);
    free((void*) s);
}
