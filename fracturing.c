// Joshua Thomas
// COP 3223
//Assignment 1


#include <stdio.h>
#include <math.h>

// #define for PI
#define PI 3.14159
// Main function

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
//This is the user input im using void to make sure it 
//doesn't have any parameters and it's universal
void userinput(double *x1, double *y1, double *x2, double *y2){
    printf("Enter the (x1) -cooridante"); 
    scanf("%lf", x1);
    printf("Enter the (y1)-coordinate");
    scanf("%lf", y1);
    printf("Enter the (x2)-coordinate");
    scanf("%lf", x2);
    printf("Enter the (y2)-coordinate");
    scanf("%lf", y2);
}

double calculateDistance() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);

    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point#2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("the distance between the two point is %.2lf\n", distance );

    return distance;
}


