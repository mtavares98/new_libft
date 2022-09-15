/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:04:39 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 19:37:16 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = -1;
	little_len = ft_strlen(little);
	while (big[++i])
	{
		j = -1;
		while (++j + i < len && big[i + j] && \
		little[j] && big[i + j] == little[j])
			;
		if (j == little_len)
			return ((char *)(big + i));
	}
	return (NULL);
}
