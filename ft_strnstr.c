/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:16:56 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/28 11:17:59 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i + needle_len <= len)
	{
		if (ft_strncmp(big + i, little, needle_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
