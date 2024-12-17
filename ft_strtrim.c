/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:19:41 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 10:44:44 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static  int ft_char_in_set(char c, char const *set)
{
    unsigned long   i;

    i = 0;
   while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int   i;
    char *str;
    unsigned int start;
    unsigned int end;

    start = 0;
    i = 0;
    str = (char *)malloc(sizeof(*s1) * (end - start + 1));
    while (s1[start] && ft_char_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_char_in_set(end - 1 ), set)
        end--;
    if (!str)
        return (NULL);
    while (start < end )
        str[i++] = s1[start++];
    str[i] = 0;
    return (str);
    
}