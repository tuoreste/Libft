/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:09:57 by otuyishi          #+#    #+#             */
/*   Updated: 2024/07/25 09:42:25 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return ((char *)str);
}
