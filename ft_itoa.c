/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:16:18 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/18 14:26:55 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static size_t	ft_intlen(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10 ;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*i;
	size_t		l;
	long int	nb;

	nb = n;
	l = ft_intlen(n);
	if (n < 0)
	{
		nb *= -1;
		l++;
	}
	i = malloc(l + 1);
	if (!i)
		return (NULL);
	i[l] = '\0';
	while (l--)
	{
		i[l] = nb % 10 + '0';
		nb /= 10 ;
	}
	if (n < 0)
		i [0] = '-';
	return (i);
}
int main()
{
	printf("%s\n", ft_itoa(-44));
	printf("%s\n", itoa(-44));
}
