/*Solution of non-linear equations using Secant Method*/

#include <stdio.h>
#include <math.h>
float f0(float );	//to calculate fx0
float f1(float );	//to calculete fx1
int main()
{
    float x0,x1,x2,fx0,fx1,error,E;
    printf("enter the value of x0 and x1:\n");
    scanf("%f %f",&x0,&x1);
    printf("Enter the value of accuracy limit:\n");
    scanf("%f",&E);
    do{
        fx0 = f0(x0);
        fx1 = f1(x1);
        x2 = (x1 - (fx1*(x1-x0))/(fx1-fx0));
        error = fabs((x2-x1)/x2);
        if(error>E)
        {
            x0 = x1;
            x1 = x2;
        }
    }while(error>E);
    printf("\nThe root is %f ",x2);
return 0;
}

float f0(float x)
{
    float v = 2*x*x+4*x-10;
    return(v);
}
float f1(float x)
{
    float w = 2*x*x+4*x-10;
    return(w);
}
