/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:35:22 by roo               #+#    #+#             */
/*   Updated: 2024/10/10 18:09:23 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    int s3_len;
    char *s3;

    i = 0;
    j = 0;
    s3_len = ft_strlen(s1) + ft_strlen(s2);
    s3 = malloc(s3_len * sizeof(char) + 1);
	if (!s3)
		return (NULL);
    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        s3[i] = s2[j];
        i++;
        j++;
    }
    s3[i] = '\0';
    return (s3);
}
/*#include <stdio.h>
int main()
{
    printf("%s\n", ft_strjoin("", ""));
    return (0);
}*/