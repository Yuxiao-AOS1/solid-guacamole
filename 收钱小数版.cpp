#include <stdio.h>
#include <stdlib.h>
int main()
{
	double price=0.0;
	double amount=0.0;
	
	printf("请输入金额:");
	scanf("%lf",&price);
	
	printf("请输入票面:");
	scanf("%lf",&amount);
	
	double change=amount-price;
	
	printf("找您%f元\n",change);
	
	system("pause");
	return 0;
	
}
