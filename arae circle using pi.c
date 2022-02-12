#include<Stdio.h>
#include<math.h>
int main(){
	int r,d;
	float a,c,pi=3.14;
	printf("enter the radius of circle");
	scanf("%d, &r");
	d=2*r;
	printf("the diameter of the circle is %d\n", d);
	c=2*pi*r;
	printf("the circumference of the circle is %f\n", c);
}