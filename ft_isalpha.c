int ft_isalpha(int c)
{
    int i;

    i = 0;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        i = 1;
    else 
        i = 0;
    return (i);
}
/*#include <stdio.h>
int main()
{
    printf("%d\n", ft_isalpha('h'));
}*/