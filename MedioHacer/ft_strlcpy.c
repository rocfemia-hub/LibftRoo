/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:45:03 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/26 02:27:10 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while (src[i] && dst[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    return (ft_strlen(src));
}
#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char *patata = "patata";
    char *tetota = "tetota";
    printf("%zu\n", ft_strlcpy(patata, tetota, 4));
    return(0);
}