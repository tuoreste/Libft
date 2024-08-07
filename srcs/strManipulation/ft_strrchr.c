/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:46:35 by otuyishi          #+#    #+#             */
/*   Updated: 2024/07/25 09:42:25 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		iter;
	char	*c_s;

	c_s = (char *)s;
	iter = ft_strlen(s);
	c_s = c_s + iter;
	while (iter >= 0 && c_s && *c_s != (char)c)
	{
		c_s--;
		iter--;
	}
	if (!c_s || iter < 0)
		return (NULL);
	return ((char *)c_s);
}
