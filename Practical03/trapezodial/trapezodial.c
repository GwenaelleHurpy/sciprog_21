#include<stdio.h>
#include<math.h>

int main(){

//We declare the variables
	int N=12, i;	
	float a=0.0, b_deg=60.0;

//We convert pi/3 to radians
//We declare the variable
	float b_rad;
	b_rad=(M_PI * b_deg)/180.0;
	printf("pi/3 in radian is %f\n", b_rad);
//We calculate the area for the initial sum area f(x0)+f(xN)
	float area=tan(a)+tan(b_rad);
	printf("The inital sum area is %f\n", area);
//We create a for loop 2*f(x1)+2f(2)+...+2*f(N-1)
	for(i=5; i<60; i=i+5){
		area=area+2*tan((M_PI*i)/180);
		printf("The new area at %d is %f\n", i/5, area);
	} 
//Multiply with b-a/2N
	float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
	area=mult_rad*area;
//We print the approximative value
	printf("The trapezoidal result is %f\n", area);
//We print the real result
	printf("The real result is%f\n", log(2.0)); 
return 0;
}
