#include <stdio.h>
#include <math.h>

#define PI 3.14159

double Distance(int x1,int x2,int y1,int y2) {                                         //Distance Formule

    double result = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return result;

}

double calculateDistance() {                                                           //Distance Calculation
    //Get User Inputs to set arguments
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y1: ");
    scanf("%d", &y1);

    printf("y2: \n");
    scanf("%d", &y2);

    double result = Distance(x1,x2,y1,y2);                                                        //Formula for Distance

    printf("Point #1 entered: x1 = %.d ; y1 = %.d\n",x1,y1);                           //Print Point 1
    printf("Point #2 entered: x2 = %.d ; y2 = %.d\n",x2,y2);                           //Print Point 2
    printf("The distance between the two points is %.3lf\n", result);                  //Print Distance
    return 2;

}

double calculatePerimeter(){                                                           //Perimeter Calculation
    //Get User Inputs to set arguments
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y1: ");
    scanf("%d", &y1);

    printf("y2: \n");
    scanf("%d", &y2);
    
    double result = PI*Distance(x1, x2, y1, y2);
    printf("The perimeter of the city encompassed by your request is %.3lf\n",result);      //Print Area
    return 2;

}

double calculateArea(){                                                                //Area Calculation
    //Get User Inputs to set arguments
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y1: ");
    scanf("%d", &y1);

    printf("y2: \n");
    scanf("%d", &y2);

    double result = PI*pow(.5*Distance(x1,x2,y1,y2),2);
    printf("The area of the city encompassed by your request is %.3lf\n",result);      //Print Area
    return 3;

}

double calculateWidth(){                                                               // Width Calculation
    //Get User Inputs to set arguments
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y1: ");
    scanf("%d", &y1);

    printf("y2: \n");
    scanf("%d", &y2);
    double result = Distance(x1,x2,y1,y2);
    printf("The width of the city encompassed by your request is %.3lf\n",result);      //Print Width
    return 1;


}
double calculateHeight(){                                                               //Height Calculation
    //Get User Inputs to set arguments
    int x1;
    int y1;
    int x2;
    int y2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y1: ");
    scanf("%d", &y1);

    printf("y2: \n");
    scanf("%d", &y2);
    double result = Distance(x1,x2,y1,y2);
    printf("The height of the city encompassed by your request is %.3lf\n",result);     //Print Height
    return 1;
}


int main(int argc, char** argv){                                                        //Main function
   
    //Call Functions to get results
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
