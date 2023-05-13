#include <cstdlib>
#include <cstring>

int main() {
    char *foo = (char*) malloc(10);
    strcpy(foo, "foo");
    free(foo);
    free(foo);
}
