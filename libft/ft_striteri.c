/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabaso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 09:46:11 by lmabaso           #+#    #+#             */
/*   Updated: 2017/08/11 15:24:58 by lmabaso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, char (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
	{
		f(i++, s++);
	}
}