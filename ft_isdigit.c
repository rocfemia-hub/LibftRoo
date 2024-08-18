int ft_isdigit(int c)
{
    int i;

    i = 0;
    if (c >= 48 && c <= 57)
        i = 1;
    else
        i = 0;
    return (i);
}
/*#include <stdio.h>
int main()
{
    printf("%d\n", ft_isdigit('7'));
}*/