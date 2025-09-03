// area of circle = 3.14 * r * r
// area of rectangle = lenght * breadth

#include<stdio.h>
int main()
{
	float r, l, b, AOC, AOR;
	printf("Enter Radius : ");
	scanf("%f",&r);
	printf("Enter lenght : ");
	scanf("%f",&l);
	printf("Enter breadth : ");
	scanf("%f",&b);
	AOC = 3.14 * r * r;
	AOR = l * b;
	printf("\n Area of a Circle : %.2f",AOC);
	printf("\n Area of a Rectangle : %.2f",AOR);
	return 0;
}
