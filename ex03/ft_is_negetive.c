/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negetive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunxumal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:13:20 by bunxumal          #+#    #+#             */
/*   Updated: 2020/06/21 15:28:13 by bunxumal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char a)

{
write(1,&a,1);
}

void ft_is_negative(int n)
{
           if(n<0)

          {  
			 ft_putchar('N');
          }

		   else

		  {
		      ft_putchar('P');
		  }
		   
}

int main()
{
ft_is_negative(-2);
	return 0;
}
