/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 15:02:51 by lmabaso           #+#    #+#             */
/*   Updated: 2017/08/14 10:53:39 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned char	s;

	s = c;
	while (*str != '\0' && *str != s)
	{
		if (*str == '\0' && s != '\0')
			return (NULL);
		str++;
	}
	if (*str == s)
		return ((char *)str);
	else
		return (NULL);
}
