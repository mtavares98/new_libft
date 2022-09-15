/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:13:49 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:45:47 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = (unsigned char *)s;
	chr = c;
	i = -1;
	while (++i < n)
		if (str[i] == chr)
			return (str + i);
	return (NULL);
}
