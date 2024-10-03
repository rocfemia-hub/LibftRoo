/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 02:44:01 by roo               #+#    #+#             */
/*   Updated: 2024/10/03 05:36:17 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if (nmemb == SIZE_MAX && size == SIZE_MAX)
    {
        return(NULL);
    }
    ptr = malloc(nmemb * size);
    if (ptr == '\0')
    {
        return(NULL);
    }
    ft_bzero(ptr, (nmemb * size));
    return(ptr);
}
/*#include <stdio.h>
int main()
{
    printf("%p\n", ft_calloc( 2, 2));
    printf("%s\n", (char *)ft_calloc( 2, 2));
    //printf("%p\n", calloc( 2, 2));
    return(0);
    //i = malloc(5 * sizeof(int));
}*/