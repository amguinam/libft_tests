#include "libft.h"
#include "libtest.h"

int	main(void)
{
	int	error;

	error = 0;
	if (!ft_isalpha_test())
		error = 1;
	else
		printf("ft_isalpha : ok\n");
	if (!ft_isdigit_test())
		error = 1;
	else
		printf("ft_isdigit : ok\n");
	if (!ft_isalnum_test())
		error = 1;
	else
		printf("ft_isalnum : ok\n");
	if (!ft_isascii_test())
		error = 1;
	else
		printf("ft_isascii : ok\n");
	if (!ft_isprint_test())
		error = 1;
	else
		printf("ft_isprint : ok\n");
	if (!ft_strlen_test())
		error = 1;
	else
		printf("ft_strlen : ok\n");
	if (!ft_memset_test())
		error = 1;
	else
		printf("ft_memset : ok\n");
	if (!ft_bzero_test())
		error = 1;
	else
		printf("ft_bzero : ok\n");
	if (!ft_memcpy_test())
		error = 1;
	else
		printf("ft_memcpy : ok\n");
	if (!ft_memmove_test())
		error = 1;
	else
		printf("ft_memmove : ok\n");
	if (!ft_strlcpy_test())
		error = 1;
	else
		printf("ft_strlcpy : ok\n");
	if (!ft_strlcat_test())
		error = 1;
	else
		printf("ft_strlcat : ok\n");
	if (!ft_toupper_test())
		error = 1;
	else
		printf("ft_toupper : ok\n");
	if (!ft_tolower_test())
		error = 1;
	else
		printf("ft_tolower : ok\n");
	if (!ft_strchr_test())
		error = 1;
	else
		printf("ft_strchr : ok\n");
	if (!ft_strrchr_test())
		error = 1;
	else
		printf("ft_strrchr : ok\n");
	if (!ft_strncmp_test())
		error = 1;
	else
		printf("ft_strncmp : ok\n");
	if (!ft_memchr_test())
		error = 1;
	else
		printf("ft_memchr : ok\n");
	if (!ft_memcmp_test())
		error = 1;
	else
		printf("ft_memcmp : ok\n");
	if (!ft_strnstr_test())
		error = 1;
	else
		printf("ft_strnstr : ok\n");
	if (!ft_atoi_test())
		error = 1;
	else
		printf("ft_atoi : ok\n");
	if (!ft_calloc_test())
		error = 1;
	else
		printf("ft_calloc : ok\n");
	if (!ft_strdup_test())
		error = 1;
	else
		printf("ft_strdup : ok\n");
	if (!ft_substr_test())
		error = 1;
	else
		printf("ft_substr : ok\n");
	if (!ft_strjoin_test())
		error = 1;
	else
		printf("ft_strjoin : ok\n");
	if (!ft_strtrim_test())
		error = 1;
	else
		printf("ft_strtrim : ok\n");
	if (!ft_split_test())
		error = 1;
	else
		printf("ft_split : ok\n");
	if (!ft_itoa_test())
		error = 1;
	else
		printf("ft_itoa : ok\n");
	if (!ft_strmapi_test())
		error = 1;
	else
		printf("ft_strmapi : ok\n");
	if (!ft_striteri_test())
		error = 1;
	else
		printf("ft_striteri : ok\n");
	if (!ft_putchar_fd_test())
		error = 1;
	else
		printf("ft_putchar_fd : ok\n");
	if (!ft_putstr_fd_test())
		error = 1;
	else
		printf("ft_putstr_fd : ok\n");
	if (!ft_putendl_fd_test())
		error = 1;
	else
		printf("ft_putendl_fd : ok\n");
	if (!ft_putnbr_fd_test())
		error = 1;
	else
		printf("ft_putnbr_fd : ok\n");
#ifdef LIBFT_BONUS
	if (!ft_lstnew_test())
		error = 1;
	else
		printf("ft_lstnew : ok\n");
	if (!ft_lstadd_front_test())
		error = 1;
	else
		printf("ft_lstadd_front : ok\n");
	if (!ft_lstsize_test())
		error = 1;
	else
		printf("ft_lstsize : ok\n");
	if (!ft_lstlast_test())
		error = 1;
	else
		printf("ft_lstlast : ok\n");
	if (!ft_lstadd_back_test())
		error = 1;
	else
		printf("ft_lstadd_back : ok\n");
	if (!ft_lstdelone_test())
		error = 1;
	else
		printf("ft_lstdelone : ok\n");
	if (!ft_lstclear_test())
		error = 1;
	else
		printf("ft_lstclear : ok\n");
	if (!ft_lstiter_test())
		error = 1;
	else
		printf("ft_lstiter : ok\n");
	if (!ft_lstmap_test())
		error = 1;
	else
		printf("ft_lstmap : ok\n");
#endif
	return (error);
}
