/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:56:38 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 14:11:57 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (n);
	i = -1;
	while (s1[++i] && s2[i] && s1[i] == s2[i] && i < n)
		;
	return ((unsigned char)*(s1 + i - (n == i)) - \
	(unsigned char)*(s2 + i - (n == i)));
}
