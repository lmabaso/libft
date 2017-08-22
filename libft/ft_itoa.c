/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 11:45:05 by lmabaso           #+#    #+#             */
/*   Updated: 2017/08/22 11:26:19 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num(int nbr)
{
	int i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		a;

	a = 0;
	i = num(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		a = 1;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	i--;
	while (i > 0)
	{
		str[i--] = (n % 10) + 48;
		n = n / 10;
	}
	str[0] = (a) ? '-' : (n % 10) + 48;
	return (str);
}
