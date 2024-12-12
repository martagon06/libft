/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:54:06 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/11 20:38:07 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_calloc(unsigned long nmemb, unsigned long size)
{
    void *s;

    s = malloc(nmemb * size);
    if (!s)
        return (0);
    ft_bzero(s , size * nmemb);
    return (s);
}