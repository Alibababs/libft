/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <pbailly@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:08:59 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/26 19:36:25 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char s, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	len;
	char	*str;

	i = 0;
	while (trim(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (trim(s1[j], set))
		j--;
	len = j - i;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	x = 0;
	while (i < len)
	{
		str[x] = s1[i];
		x++;
		i++;
	}
	str[x] = '\0';
	return (str);
}
