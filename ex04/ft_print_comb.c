/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:52:48 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/21 15:36:57 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c)
{
write( 1, &c, 1);	
}

void ft_print_comb()
{
 int x;
 int y;
 int z;

 x ='0';

	while (x<='7'){
       y=x+1;
		while (y<='8'){
        z=y+1;
			while (z<='9')
			{
		ft_putchar(x);
		ft_putchar(y);
		ft_putchar(z);
		ft_putchar(',');
		ft_putchar(' ');
		z =z+1;
		}
		y=y+1;
	}
	x=x+1;
}
}
int main()
{
	ft_print_comb();
	return (0);
}
