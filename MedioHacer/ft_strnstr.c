/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:56:33 by roo               #+#    #+#             */
/*   Updated: 2024/09/25 16:08:15 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!*little)
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        if (little[j] == big[i])
        {
            while(little[j] != '\0' && little[j] == big[i + j])
            {
            j++;
            }
            return((char *)&big[i]);
        }
        i++;        
    }
    printf("a\n");
    return(NULL);
}
int main()
{
    //printf("%s\n", strnstr("la rica patata amarilla","patata", 25));
    //printf("%s\n", ft_strnstr("la rica patata amarilla","zxy", 25);
    char *r = ft_strnstr("la rica patata amarilla","zxy", 25);
    printf ("%p\n", r); //(%s para printear la string cuando no es null)(%p para printear un puntero cuando es null)
}