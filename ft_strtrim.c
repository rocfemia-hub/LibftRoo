/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:53:28 by roo               #+#    #+#             */
/*   Updated: 2024/10/11 17:28:59 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_ptr_len(const char *s1, const char *set)
{
    int i;
    int j;
    char *ptrlen;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        while (s1[i] == set[i])
            i++;
        while (s1[i] != set[i])
        {
            ptrlen[j] = s1[i];
            i++;
            j++;
        }
        return(ft_strlen(ptrlen));
    }
    return(ft_strlen(ptrlen));
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_ptr_len("jjjPepinojjj", "jjj"));
    return(0);
}
/*char				*ft_strtrim(const char *s1, const char *set)
{
    size_t i;
    size_t j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = malloc(ft_strlen(ptr) * sizeof(char) + 1);
    if (!ptr)
        return(NULL);
    while (s1[i] != '\0')
    {
        while (s1[i] == set[i])
            i++;
        while (s1[i] != set[i])
        {
            ptr[j] = s1[i];
            i++;
            j++;
        }
        ptr[j] = '\0';
        return(ptr);
    }
    ptr[i] = '\0';
    return(ptr);
}*/