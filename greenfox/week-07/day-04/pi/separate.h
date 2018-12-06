#ifndef PI_SEPARATE_H
#define PI_SEPARATE_H
#define PI 3.14

typedef struct {
    int radius;
} circle;

float area_of_circle(int radius){
    return PI * radius * radius;
}

float circumference_of_circle(int radius){
    return 2 * radius * PI;
}
#endif //PI_SEPARATE_H
