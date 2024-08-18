int ft_isprint(int c)
{
    int i;

    i = 0;
    if (c >= 32 && c <= 126)
        i = 1;
    else
        i = 0;
    return (i);
}
/*#include <stdio.h>
int main()
{
    printf("%d\n", ft_isprint('f'));
}*/