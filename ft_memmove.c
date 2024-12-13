/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:16:42 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/05 13:38:31 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_memmove(char *dest, const char *src, unsigned long size)
{
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;
    if (!dest && !src)
        return (NULL);
    if  (d < s)
        ft_memcpy(d, s, size);
    else 
    {
            while (size--)
                d[size] = s[size];
    }
    return (d);
}