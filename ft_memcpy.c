/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:10:36 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 18:54:34 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcpy(const void *src,void *dest, unsigned long size)
{
    char *d;
    char *s;
    
    d = (char *)dest;
    s = (char *)src;
    if (!dest && !src)
        return (NULL);
    while (size--)
        *d++ = *s++;
    return(dest);
}