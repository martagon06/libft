/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:16:56 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 18:53:12 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, unsigned long len)
{
    unsigned long needle_len;
    unsigned long i;

    needle_len = ft_strlen(little);
    i = 0;
    if (*little == '\0')
        return (char *)big;
    while (i + needle_len <= len)
    {
        if (ft_strcmp(big[i], little, needle_len) == 0)
            return ((char *)big[i]);
        i++;    
    }
    return (0);
}