/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:24:52 by aamssafi          #+#    #+#             */
/*   Updated: 2021/11/24 23:49:27 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = -1;
	while (++i < n && (s1[i] || s2[i]))
	{
		if ((int)s1[i] < 0 || (int)s2[i] < 0)
			return (1);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
