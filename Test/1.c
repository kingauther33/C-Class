#include <stdio.h>
#include <math.h>

int main()
{
	int x,y;
	x = (12+6) /2 *3;
	printf("%d\n",x); // 3
	y=x= (2+3)/4;
	printf("%d\n",x); // 1
	x = (int) 3.8 + 3.3;
	printf("%d\n",x); // 
	x=(2+3)*10.5;
	printf("%d\n",x); // 52
	x=3/5*22.0;
	printf("%d\n",x); // 0
	x = 22.0 * 3/5;
	printf("%d\n",x); // 13
	
	printf("Result=%d", (1+3 && (2 * 2 + 6 /3 > 1 || 2 >8 )));
		
	return 0;

	
}
