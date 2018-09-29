#include <stdio.h>
#include <stdlib.h>
void function(float height_centimeters);

int main(void)
{
	float height_centimeters;

	printf("Please enter your height in centimeters : ");
	printf("_______in\b\b\b\b\b\b\b\b\b");
	scanf_s("%f", &height_centimeters);
	function(height_centimeters);
	getchar();
	return 0;
}

void function(float height_centimeters)
{
	float height_inches;

	height_inches = height_centimeters / 2.54;
	printf("My height is %.1fcm in centimeters and %.2fin in inches\n", height_centimeters, height_inches);
	system("pause");
}