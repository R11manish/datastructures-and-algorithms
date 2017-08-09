/*
	Mr X wants new carpeting in his family room. 
	Her family room is a 10ft by 9ft rectangle. 
	How much carpeting does he need to buy to cover 
	his entire family room?. The price one square 
	feet is 200 rupees. Write a recursive algorithm to 
	find the total cost for carpeting the room.
*/

#include<stdio.h>

int sum(int dimension, int price, int cost)
{  if (dimension<=0)
	{
		return price;
	}
	else
	{
		price = price+cost;
		return sum(--dimension, price, cost);
	}
}

int main( )
{  
	int length, breadth, cost, price=0;
	printf("%s", "Length: "); scanf("%d", &length);
	printf("%s", "Breadth: "); scanf("%d", &breadth);
	printf("%s", "Cost: "); scanf("%d", &cost);
	int sum1 = sum(length, price, cost);
	int sum2 = sum(breadth, price, sum1);
	printf("Total Price is: %d\n", +sum2);
	return 0;
}
