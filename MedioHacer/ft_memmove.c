/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:35:10 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/04 01:00:42 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d[i] == '\0' && s[i] == '\0')
		return (0);
	if ((ft_strlen(s)) >= (ft_strlen(d)))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while(i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (d);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Cerezas";
	char str2[] = "Picota";
	printf("%s Propia\n", (char *)ft_memmove(str1, str2, 9));
	/*char str3[] = "Cerezas";
	char str4[] = "Picota";
	printf("%s Original\n", (char *)memmove(str3, str4, 9));*/
	return (0);
}