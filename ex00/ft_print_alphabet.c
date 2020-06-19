/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:31:59 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/19 12:03:59 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_alphabet(void)  
{
	char letter;
	letter = 'a';
	while (letter <= 'z') {
		ft_putchar (letter);
		letter ++;
	}
}
int main (void)
{
	ft_print_alphabet();
	return (0);
}
