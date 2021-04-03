#include <stdio.h>
#include <stdint.h>
uint8_t x = 0;
uint16_t sum = 0;
void main()
{
	while (x < 101)
	{
		if (x % 2 == 0)
		{
			sum += x; 
			x++;
		}
		else
		{
			x++;
		}
	}
	printf("tong so chan =%d\r\n", sum);
	
}