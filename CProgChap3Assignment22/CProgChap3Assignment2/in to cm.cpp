#include <stdio.h>
#include <stdlib.h>
void function(float height_inches);

int main(void) 
{
	float height_inches;

	printf("Please enter your height in inches : ");
	printf("_______in\b\b\b\b\b\b\b\b\b");
	scanf_s("%f", &height_inches);
	function(height_inches);
	getchar();
	return 0;
}

void function(float height_inches)
	{
		float height_centimeters;

		height_centimeters = height_inches * 2.54;
		printf("My height is %.2fin in inches and %.1fcm in centimeters\n", height_inches, height_centimeters);
		system("pause");
	}
