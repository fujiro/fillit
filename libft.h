/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:37:23 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 01:20:44 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_start
{
	struct s_fill	*start;
}					t_start;

typedef struct		s_fill
{
	char			**tetri;
	int				dst_i;
	int				dst_j;
	int				tetri_l;
	int				tetri_h;
	int				place;
	struct s_fill	*next;
}					t_fill;

/*---------------------------------------------------------------LIBFT--------------------------------------------------------------*/
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					*ft_range(int min, int max);
int					ft_abs(int n);
int					ft_atoi(char *str);
int					ft_ascii_value(char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char *s1, char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t size);
int					ft_strnequ(const char *s1, const char *s2, int n);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_itoa(int n);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *str, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(char *src);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strmap(const char *str, char (*f) (char));
char				*ft_strmapi\
					(const char *str, char (*f) (unsigned int, char));
char				*ft_strncat(char *dst, const char *src, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr\
					(const char *str, const char *to_find, size_t size);
char				*ft_strrev(char *str);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strtrim(const char *str);
char				**ft_strsplit(char const *str, char c);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_memdel(void **ap);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(const char *str);
void				ft_putstr_fd(const char *str, int fd);
void				ft_strclr(char *str);
void				ft_strdel(char **ap);
void				ft_striter(char *str, void (*f) (char *));
void				ft_striteri(char *str, void (*f) (unsigned int, char *));
void				ft_sort_params(int ac, char **av);
void				ft_swap(int *a, int *b);
/*---------------------------------------------------------------LIBFT/-------------------------------------------------------------*/
/*---------------------------------------------------------------FILLIT-------------------------------------------------------------*/
void				ft_error(int error);
int					ft_validmap(char *str);
void				ft_print(char **map);
void				ft_printlst(t_fill *lst);
int					ft_piece_len(char **piece);
int					ft_piece_high(char **piece);
t_fill				*ft_tabtolst(char **map);
t_start				*ft_create_elem(t_start *lst, char **piece, int c);
t_start				*ft_create_lst(char **piece);
t_fill				*ft_push_left(t_fill *lst);
t_fill				*ft_push_top(t_fill *lst);
int					ft_piece_len(char **piece);
int					ft_piece_high(char **piece);
char				*ft_strlcat_r(const char *s1, const char *s2);
char				**ft_save(t_fill *piece, char **dst);
char				**ft_filetotab(char *av);
char				*ft_filetostr(char *av);
char				**ft_fillit(t_fill *lst, char **dst, int size);
char				**ft_tab_realloc(char **src);
char				**ft_letter(char **piece, int c);
int					ft_tablen(char **map);
int					ft_validform2(int i, int j, char **piece);
char				**ft_create_tab(t_fill *lst);
int					ft_sqrt(int nb);
/*---------------------------------------------------------------FILLIT/------------------------------------------------------------*/

#endif
