#include <stdio.h>
#include <string.h>

typedef struct 
{
    int angle0;
    int angle1;
    int angle2;
} Triangle;

int triangleIsValid(Triangle triangle) 
{
    if (triangle.angle0 + triangle.angle1 + triangle.angle2) 
    {
        printf("Triangle is a valid triangle.");
        return 1;
    } 
    else 
    {
        printf("Triangle is not valid.");
        return 0;
    }
}

int main() {

    Triangle validTriangle;
    validTriangle.angle0 = 90;
    validTriangle.angle1 = 60;
    validTriangle.angle2 = 30;

    triangleIsValid(validTriangle);

    return 0;
}