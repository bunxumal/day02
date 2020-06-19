/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:08:58 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/19 12:25:07 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int ft_putchar (char c){
	write (1, &c, 1);
	return(0);
}
void ft_print_reverse_alphabet(void)
{
	char letter;
	letter ='z';
	while (letter>='a')
	{
		ft_putchar(letter);
		letter --;
	}
}
int main (void)
{
	ft_print_reverse_alphabet();
	return (0);
}
