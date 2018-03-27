#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<iostream> 
using namespace std;
int main()
{
    int n, x1;
    float accuracy, term, denominator, x, sinx, sinval;
 
    printf("Enter the value of x (in degrees) \n");
    scanf("%f", &x);
    x1 = x;
    /*  Converting degrees to radians */
    x = x * (3.142 / 180.0);
    sinval = sin(x);
    printf("Enter the accuracy for the result \n");
    scanf("%f", &accuracy);
    term = x;
    sinx = term;
    n = 1;
    do
    {
        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sinx = sinx + term;
        n = n + 1;
    } while (accuracy <= fabs(sinval - sinx));
    printf("Sum of the sine series = %f \n", sinx);
    printf("Using Library function sin(%d) = %f\n", x1, sin(x));
}

/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	float x=30;
	float accuracy=10,denominator,term,sinval,sinx,x1;
	x=x*(22/7)/180.0;
	sinval=sin(x);
	sinx=x;
	term=x;
	do{
		denominator=2*n*(2*n+1);
		term=-term*x*x/denominator;
		sinx=sinx+term;
		n=n+1;
	}while(accuracy<=fabs(sinval-sinx));
	cout<<"sinx "<<sinx;
}
*/
