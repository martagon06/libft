/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:47:40 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 10:44:47 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
    }                   t_list;

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int  c);
int ft_isdigit(int c);
int ft_isprint(int c);
unsigned long   ft_strlen(const char *str);
void *ft_memset(void *b, int c, unsigned long size);
void    ft_bzero(void *str, unsigned long size);
int ft_memcpy(const void *src,void *dest, unsigned long size);
int ft_memmove(char *dest, const char *src, unsigned long size);
unsigned long   ft_strlcpy(char *dest, const char *src, unsigned long size);
unsigned long   ft_strlcpy(char *dest, const char *src, unsigned long size);
unsigned long   ft_strlcat(char *dest, const char *src, unsigned long size);
int	ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *str, const char *str2, unsigned long c);
void    *ft_memchr(const void *s, int c, unsigned long n);
int memcmp(const void *s1, const void *s2, unsigned long n);
char *ft_strnstr(const char *big, const char *little, unsigned long len);
char *ft_strnstr(const char *big, const char *little, unsigned long len);
int ft_atoi(const char *ptr);   
void *ft_calloc(unsigned long nmemb, unsigned long size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif