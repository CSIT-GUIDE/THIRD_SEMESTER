/*Solution of non-linear equations using Bisection method */

#include <stdio.h>
#include <math.h>
float f(float );	//to calculate value of function
int main()
{
	float xl,xu,xm,fxl,fxu,fxm,E,err;
	printf("enter value of xl and xu:\n");
	scanf("%f %f",&xl,&xu);
	printf("enter Accuracy limit:\n");
	scanf("%f",&E);
	do{
		xm = (xl+xu)/2;
		fxl = f(xl); //calculate f(xl)
		fxu = f(xu); //calculate f(xu)
		fxm = f(xm); //calculate f(xm)
		printf("\nxl = %f ,xu = %f ,xm = %f \nfxl = %f"
			   ",fxu = %f ,fxm =%f\n",xl,xu,xm,fxl,fxu,fxm);

		if((fxl*fxm)<0)
			{
				xu = xm;
			}
		else if ((fxm*fxu)<0)
			{
				xl = xm;
			}
		else
			return(0);
	err = fabs((xl - xu)/xm);
	}while(err>E);
	printf("\n\nroot is : %f",xm);
	return(0);
}

float f(float x)
{
	float v = 3*x*x - 6*x +2 ;	//calculate value of function
	return (v);
}
