/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 03:19:24 by zelhajou          #+#    #+#             */
/*   Updated: 2022/11/05 03:53:08 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	char s;

	if (n < 0)
		write(fd, '-', 1);
	if (n > 9)
		ft_putnbr_fd(n / 10);
	ft_
}