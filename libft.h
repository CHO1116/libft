/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:45:09 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/11 22:57:15 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//for using size_t && using the function 'malloc'
# include <stdlib.h>
//man function in term
int		ft_isalpha(int c);  //fin.
int		ft_isdigit(int c);  //fin.
int		ft_isalnum(int c);  //fin.
int		ft_isascii(int c);  //fin.
int		ft_isprint(int c);  //fin.
size_t	ft_strlen(const char *s);   //fin.
void	ft_memset();
void    ft_bzero(void *s, size_t n);
void	ft_memcpy();
void	ft_memmove();
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);	//restrict?????
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);	//restrict?????
int		ft_toupper(int c);  //fin.
int		ft_tolower(int c);  //fin.
void	ft_strchr();
void	ft_strrchr();
int		ft_strncmp(const char *s1, const char *s2, size_t n);   //re check
void	ft_memchr();
void	ft_memcmp();
void	ft_strnstr();
int		ft_atoi(const char *str);   //re check
void    *ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1); //re check
//new function
void	ft_substr();
void	ft_strjoin();
void	ft_strtrim();
void	ft_split();
void	ft_itoa();
void	ft_strmapi();
void	ft_striteri();
void	ft_putchar_fd();
void	ft_putstr_fd();
void	ft_putendl_fd();
void	ft_putnbr_fd();
#endif