/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicah <imicah@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:03:32 by imicah            #+#    #+#             */
/*   Updated: 2020/08/18 16:43:21 by imicah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "string.h"
#include <unistd.h>


int		main(void)
{
	int		q;
	char	buffer[10];
	char	*p;

//	q = ft_strcmp("halla", "hallA");
	strcpy(buffer, "Hello");
	ft_strcpy(buffer, "qw432");
//	printf("%d\n",q);
	return (0);
}
