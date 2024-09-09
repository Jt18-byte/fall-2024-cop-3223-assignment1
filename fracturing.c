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

 //This function is to calculate the distance
double calculateDistance() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);

    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point#2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("the distance between the two point is %.2lf\n", distance );

    return distance;
}
// This function is to calculate the perimeter
double calculateperimeter() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    
    double width = (x2 - x1);
    double height = (y2 - y1);
    double perimeter = 2 * (height + width);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    //The diffuculty on this function was a 2
    return 2;
}
// this function is to calculate Area
double calculateArea() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);

    double width = (x2 - x1);
    double height = (y2 - y1);
    double area = width * height;

    printf("point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("point #2 entered: x1 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area)

    //The difficult on this function was a 2
    return 2;
}
 // This function is to calculate width
double calculateWidth() {
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    double width = (x2 - x1)

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    //The difficulty on this function was a 1
    return 1;
}
 // This function is to calculate height
double calculateHeight(){
    double x1, y1, x2, y2;
    userinput(&x1, &y1, &x2, &y2);
    double height = (y2 - y1);

   // The difficulty on this function was a 1
    return 1;
}

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

   // The Difficult on this function was a 1
    return 1;
}
    


