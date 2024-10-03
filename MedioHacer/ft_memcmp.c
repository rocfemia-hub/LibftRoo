/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 05:33:58 by roo               #+#    #+#             */
/*   Updated: 2024/10/03 13:06:28 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int	i;
    char *aux1;
    char *aux2;

    aux1 = (char *)s1;
    aux2 = (char *)s2;

	i = 0;
	while (i < n)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%i\n", ft_memcmp("Patatita", "Patata", 6)); 
    printf("%i\n", memcmp("Patatita", "Patata", 6)); 
    return(0);
}