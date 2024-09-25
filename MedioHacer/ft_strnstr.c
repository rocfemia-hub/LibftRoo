/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:56:33 by roo               #+#    #+#             */
/*   Updated: 2024/09/25 11:36:00 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (big[i] != '\0' && i < len)
    {
        if(little[j] == big[i])
        {
            while(little[j] != '\0' && little[j] == big[i + j])
            {
               j++;
            }
            i++;        
            return((char *)&big[i]);
        }
        else 
            return(NULL);
    }
    return (big);
}
int main()
{
    printf("%s\n", strnstr("la rica patata amarilla","patata", 25));
    printf("%s\n", ft_strnstr("la rica patata amarilla","patata", 25));
    return (0);
}