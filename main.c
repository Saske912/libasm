/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:40:49 by pfile             #+#    #+#             */
/*   Updated: 2020/09/26 20:52:34 by pfile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libasm.h"
#define HE "Hello worldhello"
#define NE "Hello world hello"
#define CE "Hello worlshello"

/*
**	void	*malloc(size_t size)
**	{
**		return (NULL);
**	}
*/

int		main(void)
{
	char	*dst;
	char	*str;
	char	*str1;
	char	*str2;

	if (!(dst = (char *)calloc(30, sizeof(char))))
		return (-1);
	if (!(str = (char *)calloc(30, sizeof(char))))
		return (-1);
	if (!(str1 = (char *)calloc(30, sizeof(char))))
		return (-1);
	if (!(str2 = (char *)calloc(30, sizeof(char))))
		return (-1);
	printf("\n**ft_strlen**\n\n");
	printf("m: |%zu|\n", ft_strlen("hello world\nthis is thestring very long to printing enithing else then afjiuawhepfauhrgaphrg[aehrg[erhg[erhg8[rgh[8aergh[a8dfhfa[ds8fasd[8fsa"));
	printf("o: |%zu|\n", strlen("hello world\nthis is thestring very long to printing enithing else then afjiuawhepfauhrgaphrg[aehrg[erhg[erhg8[rgh[8aergh[a8dfhfa[ds8fasd[8fsa"));
	printf("m: |%zu|\n", ft_strlen("hello world\n"));
	printf("o: |%zu|\n", strlen("hello world\n"));
	printf("m: |%zu|\n", ft_strlen(""));
	printf("o: |%zu|\n", strlen(""));
	printf("m: |%zu|\n", ft_strlen("hello\n worldhello"));
	printf("o: |%zu|\n", strlen("hello\n worldhello"));
	printf("\n**ft_strcpy**\n\n");
	printf("m: |%s|\n", ft_strcpy(dst, HE));
	printf("o: |%s|\n", HE);
	printf("m: |%s|\n", ft_strcpy(str1, NE));
	printf("o: |%s|\n", NE);
	printf("m: |%s|\n", ft_strcpy(str2, CE));
	printf("o: |%s|\n", CE);
	printf("m: |%s|\n", ft_strcpy(dst, ""));
	printf("o: |%s|\n", "");
	printf("\n**ft_strcmp**\n\n");
	ft_strcpy(str, HE);
	printf("m: |%d|\n", ft_strcmp(str, str));
	printf("m: |%d|\n", strcmp(str, str));
	printf("m: |%d|\n", ft_strcmp(dst, str));
	printf("o: |%d|\n", strcmp(dst, str));
	printf("m: |%d|\n", ft_strcmp(str1, str2));
	printf("o: |%d|\n", strcmp(str1, str2));
	printf("m: |%d|\n", ft_strcmp(str2, str1));
	printf("o: |%d|\n", strcmp(str2, str1));
	printf("m: |%d|\n", ft_strcmp(str1, dst));
	printf("o: |%d|\n", strcmp(str1, dst));
	printf("m: |%d|\n", ft_strcmp(dst, str1));
	printf("o: |%d|\n", strcmp(dst, str1));
	printf("\n**ft_write**\n\n");
	printf(" |m: |%zd|\n", ft_write(1, str, ft_strlen(str)));
	printf(" |o: |%zd|\n", write(1, str, strlen(str)));
	printf(" |m: |%zd|\n", ft_write(1, str, ft_strlen(str) - 1));
	printf(" |o: |%zd|\n", write(1, str, strlen(str) - 1));
	printf(" |m: |%zd|\n", ft_write(1, NULL, 1));
	perror("zsh");
	printf(" |o: |%zd|\n", write(1, NULL, 1));
	perror("zsh");
	printf("\n**ft_read**\n\n");
	int	f;
	if (!(f = open("file", O_RDONLY)))
		return (-1);
	int	z;
	if (!(z = open("file2", O_RDONLY)))
		return (-1);
	printf(" |m: |%zd|\n", ft_read(f , str, ft_strlen(str)));
	printf(" |o: |%zd|\n", read(z, str, strlen(str)));
	printf(" |m: |%zd|\n", ft_read(f, str, ft_strlen(str) - 1));
	printf(" |o: |%zd|\n", read(z, str, strlen(str) - 1));
	printf(" |m: |%zd|\n", ft_read(f, NULL, 1));
	perror("zsh");
	printf(" |o: |%zd|\n", read(z, NULL, 1));
	perror("zsh");
	printf("\n**ft_strdup**\n\n");
	char	*str3;
	char	*str4;
	printf("m: |%s|\n", (str3 = ft_strdup(str1)));
	printf("o: |%s|\n", (str4 = strdup(str1)));
	free(str3);
	free(str4);
	printf("m: |%s|\n", (str3 = ft_strdup("")));
	printf("o: |%s|\n", (str4 = strdup("")));
	free(str3);
	free(str4);
	return (0);
}
