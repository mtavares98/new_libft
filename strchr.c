/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:09:52 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:41:43 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = -1;
	chr = c;
	while (s[++i] && s[i] != chr)
		;
	if (s[i] == chr)
		return ((char *)(s + i));
	return (NULL);
}
