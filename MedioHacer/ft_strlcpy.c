/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:45:03 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/26 01:51:30 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < size)
    {
        dst[i] = src[i];
    }
    return (ft_strlen(src));
}
#include <stdio.h>
int main()
{
    printf("%zu\n", ft_strlcpy("patata", "picota", 4));
    return(0);
}