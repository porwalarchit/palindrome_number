#include<stdio.h>
void main()
{
    int n,temp,rev=0,rem=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp=n;
    while( n!=0 )
    {
        rem= n%10;
        rev= rev*10 + rem;
        n /= 10;
    }
    if (temp==rev)
        printf("%d is a palindrome.", temp);
    else
       printf("%d is not a palindrome.", temp);
}
