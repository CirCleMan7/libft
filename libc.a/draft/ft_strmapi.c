/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:06:57 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:07:25 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    upper(unsigned int nbr, char s)
// {
//     return (ft_toupper(s));
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*collect;
	int		i;

	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	collect = str;
	while (*s)
	{
		*str = f(i++, *s);
		str++;
		s++;
	}
	*str = '\0';
	return (collect);
}

// int main()
// {
//     printf("%s", ft_strmapi("hello", upper));
// }
