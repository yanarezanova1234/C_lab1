
#include <math.h>
#include <stdio.h>

int main(){
	double sum = 0;						
	double x = 99;							
	if  (x > 0 && x <= 2 )					
	{
		x -= 1;

		for (int i = 1; i < 5000; i += 2)
		{
			sum += ((double)(pow(x, i)) / (double)i - (double) pow(x, i + 1) / (double)(i + 1));
		}
	}
	else if (x > 2)							
	{
		for (int i = 1; i < 5000; i += 2)
		{
			x = x / (x - 1);
			sum += 1 / (i * pow(x, i));
		}
	}
	else									
		{
		printf("Error: x <= 0");
		return 1;
		}
	printf("ln=%f", sum);
}
