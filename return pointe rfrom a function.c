#include <stdio.h>

int *addTen(int *data) {
    int i;
    for (i = 0; i < 5; i++) {
        *(data + i) = *(data + i) + 10;
    }
    return data;
}

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    int *result;
    int i;
    result = addTen(data);
    for (i = 0; i < 5; i++) {
        printf("%d ", *(result + i));
    }
    return 0;
}

