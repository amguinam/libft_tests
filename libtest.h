#ifndef	LIBTEST_H
# define LIBTEST_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <sys/mman.h>

int		ft_isalpha_test(void);
int		ft_isdigit_test(void);
int		ft_isalnum_test(void);
int		ft_isascii_test(void);
int		ft_isprint_test(void);
int		ft_strlen_test(void);
int		ft_memset_test(void);
int		ft_bzero_test(void);
int		ft_memcpy_test(void);
int		ft_memmove_test(void);
int		ft_strlcpy_test(void);
int		ft_strlcat_test(void);
int		ft_toupper_test(void);
int		ft_tolower_test(void);
int		ft_strchr_test(void);
int		ft_strrchr_test(void);
int		ft_strncmp_test(void);
int		ft_memchr_test(void);
int		ft_memcmp_test(void);
int		ft_strnstr_test(void);
int		ft_atoi_test(void);
int		ft_calloc_test(void);
int		ft_strdup_test(void);
int		ft_substr_test(void);
int		ft_strjoin_test(void);
int		ft_strtrim_test(void);
int		ft_split_test(void);
int		ft_itoa_test(void);
int		ft_strmapi_test(void);
int		ft_striteri_test(void);
int		ft_putchar_fd_test(void);
int		ft_putstr_fd_test(void);
int		ft_putendl_fd_test(void);
int		ft_putnbr_fd_test(void);

void	useful_noop(void *content);
void    useful_delet(void *content);
int		useful_check_tab( size_t nmemb, char type, void	*tab,...);
int		useful_check_tabs(size_t nmemb, char **tabs, ...);
void	useful_write_tabs(char	**tab);
char	useful_add_index(unsigned int i, char c);
void	useful_add_index_ptr(unsigned int i, char *c);
int		useful_check_list(t_list *list, char **expected);
void	useful_upper(void *content);
void	*useful_new_list(void *content);
void	*useful_add_a(void *content);
void	useful_print_bytes(char *bytes, size_t n);

int		ft_lstnew_test(void);
int		ft_lstadd_front_test(void);
int		ft_lstsize_test(void);
int		ft_lstlast_test(void);
int		ft_lstadd_back_test(void);
int		ft_lstdelone_test(void);
int		ft_lstclear_test(void);
int		ft_lstiter_test(void);
int		ft_lstmap_test(void);

#endif
