#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int area(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    struct Rectangle rect;

    rect.length = 10;
    rect.width = 5;

    printf("Area of Rectangle: %d\n", area(rect));

    return 0;
}