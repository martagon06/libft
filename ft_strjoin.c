/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:39:16 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/14 14:22:18 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	str = (char *)malloc(sizeof(*s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str [j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
