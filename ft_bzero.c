/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:06:19 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/05 13:10:05 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_bzero(void *str, unsigned long size)
{
    unsigned long i;
    char *s;

    i = 0;
    s = (char *)str;
    while (i < size)
        s[i++] = 0;
}