/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:15:56 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/27 16:26:13 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	while (j <= i)
	{
		str[j] = s[j];
		j++;
	}
	if (str == NULL)
		return (NULL);
	return (str);
}
