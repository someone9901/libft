/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:00:42 by aamssafi          #+#    #+#             */
/*   Updated: 2021/11/24 23:49:45 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		start;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] && to_trim(s1[start], set))
		start++;
	while (end > start && to_trim(s1[end - 1], set))
		end--;
	str = (char *)malloc((end - start) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	while ((s1[start]) && (start < end))
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
