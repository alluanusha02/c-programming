#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert inches to feet if greater than 12
    if(result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet += 1;
    }

    return result;
}

int main() {
    struct Distance d1 = {5, 9.5};
    struct Distance d2 = {3, 4.5};
    struct Distance result = addDistances(d1, d2);

    printf("Sum of distances = %d feet %.1f inches\n", result.feet, result.inches);

    return 0;
}
