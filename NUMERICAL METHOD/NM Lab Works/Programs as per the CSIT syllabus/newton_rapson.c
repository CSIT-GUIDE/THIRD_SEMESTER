/*Solution of non-linear equations using Newton-Raphson Method*/

#include <stdio.h>
#include <math.h>
float f(float );	//to calculate the value of function
float f1(float );	//to calculate the value of derivative
int main()
{
    float xo,x1,fxo,fx1,err,E;
    printf("enter the initial guess x0:\n");
    scanf("%f",&xo);
    printf("Enter Accuracy Limit:\n");
    scanf("%f",&E);
    do 		//start of the iteration
    {
        fxo = f(xo);
        fx1 = f1(xo);
        x1 = xo - (fxo/fx1);

        err = fabs((x1 - xo)/x1);
        if(err>E)
        {
            xo = x1;
        }
    }while(err>E);

    printf("\nThe root is %f",x1);
return 0;
}
float f(float x)
{
    float v = x*x + 4*x - 9;
    return (v);
}
float f1(float y)
{
    float w = 2*y + 4;
    return (w);
}
