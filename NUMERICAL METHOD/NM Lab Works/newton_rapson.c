#include<stdio.h>
#include<math.h>
float f(float );
float f1(float );
int main()
{
    float xo,x1,fxo,fx1,err,E;
    printf("enter the initial guess:\n");
    scanf("%f",&xo);
    printf("Enter Accuracy Limit");
    scanf("%f",&E);
    do
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

    printf("\n\nthe root is %f",x1);
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
