/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:54:55 by roo               #+#    #+#             */
/*   Updated: 2024/10/09 03:02:45 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  words_num(const char *s, char c)
{   
    int i;
    int j;

    i = 0;
    j = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && (i == 0 || s[i - 1] == c))
            j++;
        i++;
    }
    return(j);
}
static int lett_words(const char *s, char c)
{
    int i;
    int lett_len;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && (i == 0 || s[i - 1] == c))
        {
            lett_len = 0;
            while(s[i] != c)
            {
                lett_len++;
                i++;
            }
            return(lett_len);
        }
        i++;
    }
    return (0);
}
static void free_free(char **matrix, int c)
{
    int i;

    i = 0;
    while (i < c)
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}
char    **ft_split(const char *s, char c)
{
    int i;
    int j;
    size_t words;
    char **matrix;
    
    i = 0;
    j = 0;
    words = words_num((char *)s, c);
    if (words == 0)
        return(NULL);
    matrix = (char **)malloc((words + 1) * sizeof(char *));
    if(!matrix)
        return(NULL);
    while(s[i])
    {
        while(s[i] != c && (i == 0 || s[i - 1] == c))
        {
            matrix[words] = malloc(lett_words((char *)s, c) * sizeof(char));
            if(!matrix[words])
                return(free_free(matrix, (size_t)words_num), NULL);
            matrix[words][j] = s[i];
            j++;
            i++;
        }
        i++;
    }
    return(matrix);
}
#include <stdio.h>
int main()
{
	char s[] = " Me  gustan las  patatas ";
	char c = ' ';
	int i = 0;
	char **p = ft_split(s, c);
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
    //printf("%i\n", lett_words(" Me  gustan las  patatas ", ' '));
    return(0);
}
/*#include <stdio.h>
int main()
{
    printf("%i\n", words_num(" Me  gustan las  patatas ", ' '));
    return(0);
} */
//malloc(words_num() * (char *))
//char **matrix;
/*#include <stdio.h>
int main(ORIGINAL)
{
    char matrix[][] = "Me gustan las patatas"
    printf("%s\n", ft_split("Me  gustan las patatas", ' '));
}*/