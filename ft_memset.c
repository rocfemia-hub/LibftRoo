/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:10:58 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/30 16:56:49 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n != '\0')
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
int	main()
{
	char str[8] = "patatita";
	printf("%s\n", str);
	ft_memset(str, '*', 4);
	//ft_memset(str+4, '*', 4);
	printf("%s\n", str);
	return (0);
}*/