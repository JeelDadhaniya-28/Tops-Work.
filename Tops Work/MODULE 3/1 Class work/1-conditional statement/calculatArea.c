#include <stdio.h>

int main() {
    char area;
    float pi = 3.14;
    float a = 0.5;

    printf("Are you find area of circle, rectangle, square, triangle to press \'c\', \'r\', \'s\', \'t\'.");
    scanf("%c", &area);

    switch(area){
        case 'c':{
            float r, circle;
            
            printf("Enter the value of r:");
            scanf("%f", &r);
            circle = pi *(r *r);
            printf("Area of circle is:%.2f", circle);

            break;
        }

        case 'r':{
            float width, length, rectangle;
            
            printf("Enter the value of width:");
            scanf("%f", &width);
            printf("Enter the value of length:");
            scanf("%f", &length);
            rectangle = width *length;
            printf("Area of rectangle is:%.2f", rectangle);

            break;
        }

        case 's':{
            float square;
            
            printf("Enter the value of square:");
            scanf("%f", &square);
            square *= square;
            printf("Area of square is:%.2f", square);

            break;
        }

        case 't':{
            float base, hight, triangle;
            
            printf("Enter the value of base:");
            scanf("%f", &base);
            printf("Enter the value of hight:");
            scanf("%f", &hight);
            triangle = a *base *hight;
            printf("Area of triangle is:%.2f", triangle);

            break;
        }

        default:{
            printf("Enter carrect charactor.");
            break;
        }
    }

    return 0;
}