/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicusan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 23:42:39 by anicusan          #+#    #+#             */
/*   Updated: 2016/07/12 00:39:11 by anicusan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1[0] != '\0' || s2[0] != '\0')
	{
		while (s1[i] == s2[i] && i < n)
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (0);
			i++;
		}
		if (s1[i] != s2[i] && i != n)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
