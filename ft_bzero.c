/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:52 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/20 11:23:04 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
/*#include <stdio.h>

int	main(void)
{
	char str[10] = "patatita";
	printf("%s\n", str);
	ft_bzero(str, 10);
	printf("%s\n", str);
}*/