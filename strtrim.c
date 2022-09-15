/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:11:45 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 21:02:24 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = -1;
	if (!s1 || !set)
		return (NULL);
	while (s1[++start] && ft_strchr(set, s1[start]))
		;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) && --end)
		;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
