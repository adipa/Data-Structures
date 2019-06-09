#include<stdio.h>
char value(int x);


int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    calculate(x,1000,2);
}

char value(int x)
{
    if(x==1) return 'I';
    else if(x==5) return 'V';
    else if(x==10) return 'X';
    else if(x==50) return 'L';
    else if(x==100) return 'C';
    else if(x==500) return 'D';
    else if(x==1000) return 'M';

}


void calculate(int x, int v, int m)
{
    if(x==v)
    {
        printf("%c", value(v));
        return;
    }
    if(x==v/m)
    {
        printf("%c", value(v/m));
        return;
    }

    while(x < v/m)
    {
            v = v/m;
            if(m == 2)
                m = 5;
            else
                m = 2;
    }

    if(x==(v - v/m ))
    {
        printf("%c%c",value(v/m),value(v));
        return;
    }
    else
    {
    printf("%c",value(v/m));
    x = x - (v/m);
    }
    return calculate(x, v, m);




}
