/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 05:04:34 by roo               #+#    #+#             */
/*   Updated: 2024/09/30 13:51:15 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int dlen;
    int slen;

    i = 0;
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (dlen >= size)
        return(slen + size);
    while (src[i] && dlen + i < size) //-1 ???
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + i);
}

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main()
{
    char *str1 = strdup("Patatita");
	char *str2 = strdup("Rica");
	printf("%zu\n", ft_strlcat(str1, str2, 10));
    printf("%s\n", str1);
    /*char *str3 = strdup("Patatita");
	char *str4 = strdup("Rica");
	printf("%zu\n", strlcat(str3, str4, 13));
    printf("%s\n", str3);
	return(0);*/
}
