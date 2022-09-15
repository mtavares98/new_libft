/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:03:06 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 21:39:39 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**split_aux(char **split, char const *s, char c, int counter)
{
	char	*tmp;
	int		i;

	tmp = NULL;
	i = -1;
	while (*s && *s == c)
		s++;
	while (s[++i] != c && s[i])
		;
	if (i > 0)
		tmp = malloc(i + 1);
	if (tmp)
	{
		split = split_aux(split, s + i, c, counter + 1);
		tmp[i] = '\0';
		while (--i > -1)
			tmp[i] = s[i];
	}
	if (!split)
		split = malloc(sizeof(char *) * (counter + 1));
	if (!split)
		return (NULL);
	split[counter] = tmp;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = split_aux(NULL, s, c, 0);
	return (split);
}
