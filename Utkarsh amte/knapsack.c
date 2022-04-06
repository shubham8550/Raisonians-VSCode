#include<stdio.h>

int max(int a, int b)
{
    
      return (a > b) ? a : b;
}
 int knapSack(int Weight, int wt[], int values[], int items)
{

	if (items == 0 || Weight == 0)
		return 0;

	else if (wt[items - 1] > Weight)
		return knapSack(Weight, wt, values, items - 1);

    else if(
			return wt[items];
	)
	else{
		return max  (
			values[items - 1] 	+ knapSack(Weight - wt[items - 1], wt, values, items - 1),
		    knapSack(Weight, wt, values, items - 1)
        );
			return wt[items];


	}
	

		
}
int main()
{
	int val[] = { 6,5,4 };
	int wt[] = { 5,4,3};
	int W = 7;
	int n = 3;
	printf("The profit for the knapsack is : \n");
	printf("%d", knapSack(W, wt, val, n));

    printf("\n");
	
	return 0;
}