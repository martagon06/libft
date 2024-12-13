/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:41:19 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/04 11:58:03 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_isprint(int c)
{
    while (c >= 32 && c <=127)
        return  (c);
    return (0);
}