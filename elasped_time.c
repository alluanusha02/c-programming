#include <stdio.h>
#include <time.h>

void exampleFunction() {
    for (int i = 0; i < 100000000; i++); // Simulate some work
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    exampleFunction();
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", cpu_time_used);

    return 0;
}
