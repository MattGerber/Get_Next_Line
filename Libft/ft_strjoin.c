/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:44:08 by magerber          #+#    #+#             */
/*   Updated: 2019/06/05 15:12:23 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		catlen;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	catlen = ft_strlen(s1);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, (char *)s1, ft_strlen(s1));
	ft_memcpy(ptr + catlen, s2, (ft_strlen(s2) + 1));
	return (ptr);
}
