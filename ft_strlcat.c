/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:33:19 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/04 00:54:37 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	i = len;
	if (len >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i - len] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}

// int	main()
// {
// 	printf("%zu", ft_strlcat("achraf", NULL, 0));
// }