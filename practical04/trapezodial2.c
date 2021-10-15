#include<stdio.h>
#include<math.h>

//We declare the function to convert degrees to radian
float degtorad(float degang);

int main(){

//we declare the array
int N=12, i;
float TanArr[N+1], deg, rad;

//We calculate the value of f(xi) with i=0, 1, ... 12 in the array in radians
for(i=0; i<=N; i++){
	deg=i*5.0;
	rad=degtorad(deg);
	TanArr[i]=tan(rad);
	printf("TanArr[%d]=%f (f(x) at=%d)\n", i, TanArr[i], i);
	}
//We calculate the area
float area;
area=TanArr[0]+TanArr[N];
for(i=1; i<N; i++){
	area=area+2.0*TanArr[i];
}

//We converte the area in radian
//We multiply area by (pi/3)2N 
float mult_rad=degtorad((60.0-0.0)/(2.0*N));
area=mult_rad*area;

//Approximated result
printf("\n Trapezodial result is %f\n ", area);

//Actual result
printf("Real result is %f\n ", log(2));

return 0;
}

//We write the function definition
float degtorad(float degang){
	return((M_PI*degang)/180);
}


