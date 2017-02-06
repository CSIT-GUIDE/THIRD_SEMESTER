#include <stdio.h>
#include <math.h>
float f(float );
int main()
{
	float xl,xu,xm,fxl,fxu,fxm,E,err;
	printf("enter value of xl and xu:\n");
	scanf("%f",&xl);
	scanf("%f",&xu);
	printf("enter Accuracy limit");
	scanf("%f",&E);
	do{
		xm = (xl+xu)/2;
		fxl = f(xl);
		fxu = f(xu);
		fxm = f(xm);
		printf("A");
		printf("xl = %f ,xu = %f ,xm = %f ,fxl = %f ,fxu = %f ,fxm =%f\n",xl,xu,xm,fxl,fxu,fxm);

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
	float v = 3*x*x - 6*x +2 ;
	return (v);
}
