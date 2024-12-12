/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:15:56 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/11 20:38:02 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strdup(const char *s)
{
    unsigned long i;
    char *str;

    i = 0;
    if (!s)
        return (0);
    str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] == s[i];
        i++;
    }
    str[i] = 0;
    return (str);
}