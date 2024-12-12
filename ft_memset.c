/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:14:28 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/04 12:24:42 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *b, int c, unsigned long size)
{
    unsigned long   i;
    unsigned char   *s;

    i = 0;
    s = (unsigned char *)b;
    while (i < size)
        s[i++] = (unsigned char *)c;
}