#include<stdio.h>
void calculate(int x);
char value(int x);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    calculate(x);
    return 0;
}
char value(int x)
{
    if(x==1) 
      return 'I';
    else if(x==5) 
      return 'V';
    else if(x==10) 
      return 'X';
    else if(x==50) 
      return 'L';
    else if(x==100) 
      return 'C';
    else if(x==500) 
      return 'D';
    else if(x==1000) 
      return 'M';
    else 
      return '\0';

}
void calculate(int x)
{
    int c, d, e, n, i=1;
    while(x != 0){
        n = x%10;
        if(n != 0)
        {
        c = value(i);
        if(n >= 1 && n <= 3)
        {
            while(n != 0){
                printf("%c", c);
                n -= 1;
            }
        }
        else if(n >= 4 && n <= 8)
        {
            d = value(5*i);
            if(n == 4)
                printf("%c%c", c, d);
            else
            {
                printf("%c",d);
                while(n != 5){
                    printf("%c", c);
                    n -= 1;
                }
            }
        }
        else
        {
            e = value(10*i);
            if(x == 9)
                printf("%c%c", c, e);
            else
                printf("%c", e);
        }
        }
        x=x/10;
        i=10*i;
    }

}



