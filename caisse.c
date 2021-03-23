#include <stdio.h>




int main() {
	double amt_paid,amt ;

	printf("Input the amount to be paid: ");
	scanf("%lf",&amt_paid);

	printf("Enter Your Money: ");
	scanf("%lf",&amt);


	while ( amt_paid > amt)
	{

		printf("Enter Your Money: ");
		scanf("%lf",&amt);

	}

	

	return 0;
}
