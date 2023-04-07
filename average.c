
#include <stdio.h>
int main ()
{
    int n, i, numbers[100], sum=0;
    float average;
    printf ("Enter the number of numbers in your sequence");
    scanf("%d", &n);
    printf ("Enter the numbers in the sequence");
       for (i=0 ; i<n ; i++)
       {
           scanf ("%d", &numbers[i]);
           sum=sum+numbers[i];
       }
    average=sum/n;
    printf ("%lf", average);
    return 0;
}
