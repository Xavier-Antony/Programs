#include <stdio.h>

int main(void) {
	// your code goes here
	double a;

    printf("Enter a number: \n");
    scanf("%lf",&a);

    if (a <= 0.0)
    {
        if (a == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
   	return 0;
}
