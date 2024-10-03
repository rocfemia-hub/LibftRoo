/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:35:10 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/03 15:59:42 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	// if (d[i] == '\0' && s[i] == '\0')
	//    return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[8] = "Cereza";
	char str2[6] = "Picota";
	printf("%s\n", (char *)ft_memmove(str1, str2, 0));
	char str3[] = "Cereza";
	char str4[6] = "Picota";
	printf("%s\n", (char *)memmove(str3, str4, 0));
	return (0);
}