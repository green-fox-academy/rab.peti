#include "point.h"

point_t create_point(float x, float y){
    point_t point;
    point.x = x;
    point.y = y;
    return point;
}

float distance(point_t p1, point_t p2){
    float x_distance;
    float y_distance;
    if(p1.x > p2.x)
        x_distance = p1.x - p2.x;
    else
        x_distance = p2.x - p1.x;
    if(p1.y > p2.y)
        y_distance = p1.y - p2.y;
    else
        y_distance = p2.y - p1.y;
    return x_distance + y_distance;
}

