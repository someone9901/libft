/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:20:37 by aamssafi          #+#    #+#             */
/*   Updated: 2021/11/24 23:49:31 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j++] == haystack[i])
		{
			while (needle[j] && haystack[i + j] && needle[j] == haystack[i + j])
				j++;
			if (!needle[j] && (i + j) <= len)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
