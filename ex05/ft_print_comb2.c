/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:40:54 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/22 11:59:17 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void ft_print_comb2(void)
{
	char f, s;

	f = 0;
	while(f < 99)
	{
		s = f + 1;
		while(s <= 99)
		{
			ft_putchar(f / 10 + '0');
			ft_putchar(f % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if(f != 98)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
			s++;
		}
	f++;
	}

}

int main ()
{
	ft_print_comb2();
	return(0);
}
