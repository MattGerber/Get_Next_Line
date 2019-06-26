/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:49:35 by magerber          #+#    #+#             */
/*   Updated: 2019/06/10 17:15:21 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(size + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (size + 1)
	{
		ptr[size] = 0;
		size--;
	}
	return (ptr);
}
