/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:02 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/06 13:39:38 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    if (s[i] == (char)c)
        return ((char*)(s + i));
    return (NULL);
}