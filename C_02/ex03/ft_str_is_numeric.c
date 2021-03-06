/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:18:24 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/21 18:12:02 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	if (str[0] == '\0')
		cont = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			cont = 1;
		else
		{
			cont = 0;
			return (cont);
		}
		i++;
	}
	return (cont);
}

/*int	main(void)
{
	char	text[50] = "5555555";
	int i;

	i = ft_str_is_numeric(text);
	printf("%d\n", i);
	return(0);
}*/
