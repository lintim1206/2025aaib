//week06-3.cpp
//SOIT107_Base_008
#include <stdio.h>

int main()
{
	int n, now;
	int ans = 1;
	printf("Enter the number of values to be processed: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		scanf("%d", &now);
		ans *= now;
	}
	printf("Product of the %d values is %d", n, ans);
}
