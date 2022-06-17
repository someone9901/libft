/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:33:21 by aamssafi          #+#    #+#             */
/*   Updated: 2021/11/30 19:44:43 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*pd;
	const char	*ps;

	pd = (char *) dst;
	ps = (char *) src;
	i = 0;
	if (dst == src)
		return (dst);
	if ((pd == NULL) && (ps == NULL))
		return (0);
	while (n > 0)
	{
		pd[i] = ps[i];
		i++;
		n--;
	}
	return (pd);
}
