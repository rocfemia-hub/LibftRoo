/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:45:03 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/26 03:44:19 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] && dst[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    //printf("%s\n", dst);
    return (ft_strlen(src));
}
/*#include <string.h>
int main()
{
    char *str1 = strdup("aguacate");
    char *str2 = strdup("tetota");
    printf("%zu\n", ft_strlcpy(str1, str2, 0));
    return(0);
}*/
//Hay que reservar los strings con malloc (strdup --> duplica string reservando espacio de memoria con malloc) para evitar un sf