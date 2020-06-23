/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:33:13 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/19 16:27:41 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(int d)
{
	write (1, &d, 1);
}

void ft_print_numbers()
{
	int number;
	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}

}

int main ()
{
	ft_print_numbers();
	return (0);
}
