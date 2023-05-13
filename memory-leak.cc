#include <cstdio>
#include <cstdlib>

void leak(int n) {
    // Allocates memory that is never freed
    int *a = (int*) malloc(n * sizeof(int));
    return;
}

int main() {
    // Program will keep around useless 400MiB of 
    // memory allocated until it is terminated
    for (int i = 0; i < 100000; ++i) {
        leak(1000);
    }

    int input;
    scanf("%d", &input);
}
