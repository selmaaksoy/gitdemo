#include <stdio.h>
#include <math.h>
int main ()
{
    int numbers[10] , i , sum=0;
    double average , total=0 , std;
    for (i=0 ; i<10 ; i++)
    {
        scanf ("%d", &numbers[i]);
        sum=sum+numbers[i];
    }
    average = (double) sum/10;
    printf ("The average of 10 numbers is : %lf\n", average);
    for (i=0 ; i<10 ; i++)
    {
        total = total+ pow(numbers[i]-average , 2);
    }
    std=sqrt(total/10);
    printf ("The standard deviation of 10 numbers is : %lf\n", std);
    return 0;
}

