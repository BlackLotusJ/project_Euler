#include <stdio.h>
/*By considering the terms in the Fibonacci sequence whose values do not exceed four million,
  find the sum of the even-valued terms.*/
int main ()
{
    int n1 = 0, n2 = 1, n3 , sum = 0;

    while (n2 < 4000000)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if (n2 % 2 == 0)
        {
            sum += n2;
        }
    }
    printf("%d", sum);
    return (0);
}
