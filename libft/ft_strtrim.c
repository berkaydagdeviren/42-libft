/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:19:57 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 19:17:18 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_array(char s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1 != set[j] && set[j])
	j++;
	if (!(s1 == set[j]))
	{
		return (0);
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		k;
	char	*arr;

	i = 0;
	k = 0;
	len = ft_strlen((char *)s1) - 1;
	while (is_in_array(s1[i], (char *)set) && s1[i])
		i++;
	if (i == ft_strlen((char *)s1))
		return ("");
	while (is_in_array(s1[len], (char *)set) && s1[len])
		len--;
	arr = malloc(len - i + 2);
	if (!arr)
		return (0);
	while (i <= len)
		arr[k++] = s1[i++];
	arr[k] = '\0';
	return (arr);
}
