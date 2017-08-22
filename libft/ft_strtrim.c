/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 17:09:57 by lmabaso           #+#    #+#             */
/*   Updated: 2017/08/18 12:26:12 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			end;
	size_t			len;
	char			*str;
	char			*s1;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	start = 0;
	len = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] == ' ' || s1[start] == '\n' || s1[start] == '\t')
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (s1[end] == ' ' || s1[end] == '\n' || s1[end] == '\t')
		end--;
	len = end - start;
	str = ft_strsub(s1, start, len + 1);
	return (str);
}
