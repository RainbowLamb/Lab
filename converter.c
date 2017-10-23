#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	float input, c, f, k;
	char scale;
	printf("Enter input and scale:\n");
	scanf_s("%f ", &input); 
	scanf_s("%c", &scale);	
	switch (scale) {
		case 'C':		/*enter degrees Celsius*/					
			f = input * 9 / 5 + 32;
			k = input + 273.15;
			printf("%.2f", input);
			printf(" C:\n");
			printf("%.2f", f);
			printf(" F\n");
			printf("%.2f", k);
			printf(" K\n");
			break;
		case 'F':		/*enter degrees Fahrenheit*/					
			c = (input - 32) * 5 / 9;
			k = (input - 32) * 5 / 9 + 273, 15;
			printf("%.2f", input);
			printf(" F:\n");
			printf("%.2f", c);
			printf(" C\n");
			printf("%.2f", k);
			printf(" K\n");
			break;
		case 'K':		/*enter degrees in Kelvin*/					
			c = input - 273.15;
			f = (input - 273.15) * 9 / 5 + 32;
			printf("%.2f", input);
			printf(" K:\n");
			printf("%.2f", c);
			printf(" C\n");
			printf("%.2f", f);
			printf(" F\n");
			break;
		default:						
			printf("Incorrect input.\n");
	}


    return 0;
}
