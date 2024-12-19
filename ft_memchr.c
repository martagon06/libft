/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:53 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 18:55:13 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"   

void    *ft_memchr(const void *s, int c, unsigned long n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    unsigned char char_a_encontrar = (unsigned char)c;
    unsigned long   i;

    i = 0;
    while (i < n)
    {
        if (ptr[i] == char_a_encontrar)
            return (void *)(ptr + i);
        i++;
    }
    return (0);
}