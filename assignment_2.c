#include <stdio.h>

int n = 10000;//global variable to have the end of the series easily changeable

//These are all the functions that compute the results as float numbers
float Fadd_left_to_right();
float Fadd_right_to_left();
float Fadd_separately_ltr();
float Fadd_separately_rtl();

//These are all the functions that compute the results as double numbers
double Dadd_left_to_right();
double Dadd_right_to_left();
double Dadd_separately_ltr();
double Dadd_separately_rtl();

int main()
{
    //printing all the results
	printf("\tTHE RESULTS COMPUTED AS FLOAT NUMBERS\n");
	printf("The result of the summation from left to right in float is %.30f \n", Fadd_left_to_right());
	printf("The result of the summation from right to left in float is %.30f \n", Fadd_right_to_left());
	printf("The result of separate addition from left to right in float is %.30f \n", Fadd_separately_ltr());
	printf("The result of separate addition from right to left in float is %.30f \n", Fadd_separately_rtl());
	
	printf("\n\tTHE RESULTS COMPUTED AS DOUBLE NUMBERS\n");
	printf("The result of the summation from left to right in double is %.30f \n", Dadd_left_to_right());
	printf("The result of the summation from right to left in double is %.30f \n", Dadd_right_to_left());
	printf("The result of separate addition from left to right in double is %.30f \n", Dadd_separately_ltr());
	printf("The result of separate addition from right to left in double is %.30f \n", Dadd_separately_rtl());
	printf("\n");
    return 0 ;
}

float Fadd_left_to_right() //summation from left to right in float
{
	int i;
	float sum = 0;

    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 1)
            sum += (1.0/i);
        else
            sum -= (1.0/i);
    }
    return sum;
}
float Fadd_right_to_left() //summation from right to left in float
{
	int i;
	float sum = 0;

    for (i = n; i >= 1; i--) 
    {
        if (i % 2 == 1)
            sum += (1.0/i);
        else
            sum -= (1.0/i);
    }
    return sum;
}
float Fadd_separately_ltr() //computing the summations separately from left to right and then subtracting them in float
{
	int i;
	float sum1 = 0, sum2 = 0;

    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 1)
            sum1 += (1.0/i);
        else
            sum2 += (1.0/i);
    }
    return sum1 - sum2;
}
float Fadd_separately_rtl() //computing the summations separately from right to left and then subtracting them in float
{
	int i;
	float sum1 = 0, sum2 = 0;

    for (i = n; i >= 1; i--) 
    {
        if (i % 2 == 1)
            sum1 += (1.0/i);
        else
            sum2 += (1.0/i);
    }
    return sum1 - sum2;
}

double Dadd_left_to_right() //summation from left to right in double
{
    int i;
    double sum = 0;

    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 1)
            sum += (1.0/i);
        else
            sum -= (1.0/i);
    }
    return sum;
}
double Dadd_right_to_left() //summation from right to left in double
{
    int i;
    double sum = 0;

    for (i = n; i >= 1; i--) 
    {
        if (i % 2 == 1)
            sum += (1.0/i);
        else
            sum -= (1.0/i);
    }
    return sum;
}
double Dadd_separately_ltr() //computing the summations separately from left to right and then subtracting them in double
{
    int i;
    double sum1 = 0, sum2 = 0;

    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 1)
            sum1 += (1.0/i);
        else
            sum2 += (1.0/i);
    }
    return sum1 - sum2;
}
double Dadd_separately_rtl()//computing the summations separately from right to left and then subtracting them in double
{
    int i;
    double sum1 = 0, sum2 = 0;

    for (i = n; i >= 1; i--) 
    {
        if (i % 2 == 1)
            sum1 += (1.0/i);
        else
            sum2 += (1.0/i);
    }
    return sum1 - sum2;
}