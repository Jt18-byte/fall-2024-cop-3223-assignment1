// Joshua Thomas
// COP 3223
// Assignment 1

#include <stdio.h>
#include <math.h>

// #define PI
#define PI 3.14159

// I Couldn't run my code without declaring my
//functions I received help and i'll put it in the collaboration log
void userinput(double *x1, double *y1, double *x2, double *y2);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// This function takes user input and makes it universal
void userinput(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter the (x1) coordinate: ");
    scanf("%lf", x1);
    printf("Enter the (y1) coordinate: ");
    scanf("%lf", y1);
    printf("Enter the (x2) coordinate: ");
    scanf("%lf", x2);
    printf("Enter the (y2) coordinate: ");
    scanf("%lf", y2);
}

// This function is to calculate the distance
double calculateDistance() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

// I rated the difficulty a two
    return 2;
}

// This function is to calculate the perimeter
double calculatePerimeter() {
    
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);

    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double perimeter = 2 * (width + height);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

   // I rated the difficulty a 2
    return 2;
}

// This function is to calculate the area
double calculateArea() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);

    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);

   // I rated the difficulty a 2
    return 2;
}

// This function is to calculate the width
double calculateWidth() {
    
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    //I rated the difficulty a 1
    return 1;
}

// This function is to calculate the height
double calculateHeight() {
   
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    //I rated the difficulty a 1
    return 1;
}



