/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:44:37 by roo               #+#    #+#             */
/*   Updated: 2024/09/23 16:53:43 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i  = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return (0);
}
/*#include <stdio.h>
int main ()
{
    printf("%d\n", ft_strncmp("patatita", "patata", 1));
    return(0);
}*/