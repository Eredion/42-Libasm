/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asegovia <asegovia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:36:43 by asegovia          #+#    #+#             */
/*   Updated: 2020/07/07 10:11:29 by asegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"

char *s;
char *s2;
char *s3;
char *s4;

int 	main (int argc, char **argv)
{
	char *path = "Makefile";

	if (argc == 1)
		path = "results.txt";
	else if (argc == 2)
		path = argv[1];
	printf("____________________________________");
	char *s = "";
	printf("\nFT_STRLEN -> string:  \"%s\"\n", s);
	printf("ft_strlen: %lu\n", ft_strlen(s));
	printf("   strlen: %lu\n", strlen(s));

	s = "Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! Toss a coin to your Witcher. O Valley of Plenty! O Valley of Plenty! ooooh! "; 
	printf("\nFT_STRLEN -> string:  \"%s\"\n", s);
	printf("ft_strlen: %lu\n", ft_strlen(s));
	printf("   strlen: %lu\n", strlen(s));
	printf("____________________________________");

	char *src = strdup("");
	char *dst = malloc(strlen(src) * sizeof(char) + 1);

	printf("FT_STRCPY\nANTES   -> SRC: \"%s\" DST: \"%s\"\n", src, dst);
	char * ret = ft_strcpy(dst, src);
	printf("DESPUÉS -> SRC: \"%s\" DST: \"%s\"\n", src, dst);
	char* sterro = "Bad file desciptor\n";
	printf("RETURN: \"%s\"\n", ret);
	free(src); 
	free(dst);

	src = strdup("Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase. Esta no es una frase.");
	dst = malloc(strlen(src) * sizeof(char) + 1);
	
	printf("ANTES   -> SRC: \"%s\" DST: \"%s\"\n", src, dst);
	ret = ft_strcpy(dst, src);
	printf("DESPUÉS -> SRC: \"%s\" DST: \"%s\"\n", src, dst);
	printf("RETURN: \"%s\"\n", ret);
	free(src); 
	free(dst);

	printf("____________________________________\n");

	char *s1 = "holi";
	char *s2 = "holi";
	printf("\nFT_STRCMP\nS1: \"%s\" S2 \"%s\"\n", s1, s2);
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("   strcmp: %d\n", strcmp(s1, s2));

	s1 = "hol";
	s2 = "holi";
	printf("\nFT_STRCMP\nS1: \"%s\" S2 \"%s\"\n", s1, s2);
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("   strcmp: %d\n", strcmp(s1, s2));

	s1 = "";
	s2 = "holi";
	printf("\nFT_STRCMP\nS1: \"%s\" S2 \"%s\"\n", s1, s2);
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("   strcmp: %d\n", strcmp(s1, s2));

	s1 = "holi";
	s2 = "";
	printf("\nFT_STRCMP\nS1: \"%s\" S2 \"%s\"\n", s1, s2);
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("   strcmp: %d\n", strcmp(s1, s2));

	s1 = "";
	s2 = "";
	printf("\nFT_STRCMP\nS1: \"%s\" S2 \"%s\"\n", s1, s2);
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("   strcmp: %d\n", strcmp(s1, s2));

	char *s3 = "_______________________________________________________________________________________________________________________________________________________________";
	char *s4 = "string largastring largastring largastring largastring largastring largastring largastring largastring largastring largastring largastring larga";
	printf("\nFT_STRCMP\nS1: \"%s\"\nS2 \"%s\"\n", s3, s4);
	printf("ft_strcmp: %d\n", ft_strcmp(s3, s4));
	printf("   strcmp: %d\n", strcmp(s3, s4));

	printf("____________________________________\nFT_WRITE\n");
	char *towrite = "hello world\n";
	printf("ft_write: \n");
	ft_write(1, towrite, ft_strlen(towrite));
	printf("write: \n");
	write(1, towrite, ft_strlen(towrite));
	int fd = open(path, O_WRONLY | O_CREAT, 0644);
	printf("\nft_write: \n");
	ft_write(fd, towrite, ft_strlen(towrite));
	printf("\nwrite: \n");
	write(fd, towrite, ft_strlen(towrite));
	printf("\n\nft_write: \n");
	ft_write(18, towrite, ft_strlen(towrite));
	printf("write: \n");
	write(18, towrite, ft_strlen(towrite));
	close(fd);

	printf("____________________________________\nFT_READ\n\n");
	fd = open(path, O_RDONLY);
	char text[10] = "\0\0\0\0\0\0\0\0\0";
	int retu = ft_read(fd, text, 11);
	close(fd);
	printf("FT_READ: \"%s\"\nRETURN VAL: %d\n", text, retu);
	char text2[10] = "\0\0\0\0\0\0\0\0\0";
	retu = ft_read(45, text2, 11);
	printf("FT_READ: \"%s\"\nRETURN VAL: %s\n", text2, sterro);
	char text5[10] = "\0\0\0\0\0\0\0\0\0";
	retu = ft_read(0, text5, 11);
	printf("FT_READ: \"%s\"\nRETURN VAL: %d\n", text2, retu);

	fd = open(path, O_RDONLY);
	char text4[10] = "\0\0\0\0\0\0\0\0\0";
	retu = read(fd, text4, 11);
	printf("   READ: \"%s\"\nRETURN VAL: %d\n", text4, retu);

	char text3[10] = "\0\0\0\0\0\0\0\0\0";
	retu = read(45, text2, 11);
	printf("   READ: \"%s\"\nRETURN VAL: %s\n", text3, strerror(errno));

	close(fd);
	char text6[10] = "\0\0\0\0\0\0\0\0\0";
	retu = ft_read(0, text6, 11);
	printf("FT_READ: \"%s\"\nRETURN VAL: %d\n", text2, retu);
	
	printf("\n____________________________________\nFT_STRDUP\n");
	
	char *new;
	char *old = "copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string copiar esta string ";
	new = ft_strdup(old);
	printf("NEW: \"%s\"\n", new);
	free(new);
	printf("freed string: OK\n");
	new = ft_strdup("");
	printf("NEW: \"%s\"\n", new);
	free(new);
	printf("freed string: OK\n");
}
