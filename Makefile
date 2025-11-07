CC = cc
CFLAGS = -Wall -Wextra -Werror
TEST = useful.c \
	ft_isalpha_test.c \
	ft_isdigit_test.c \
	ft_isalnum_test.c \
	ft_isascii_test.c \
	ft_isprint_test.c \
	ft_strlen_test.c \
	ft_memset_test.c \
	ft_bzero_test.c \
	ft_memcpy_test.c \
	ft_memmove_test.c \
	ft_strlcpy_test.c \
	ft_strlcat_test.c \
	ft_toupper_test.c \
	ft_tolower_test.c \
	ft_strchr_test.c \
	ft_strrchr_test.c \
	ft_strncmp_test.c \
	ft_memchr_test.c \
	ft_memcmp_test.c \
	ft_strnstr_test.c \
	ft_atoi_test.c \
	ft_calloc_test.c \
	ft_strdup_test.c \
	ft_substr_test.c \
	ft_strjoin_test.c \
	ft_strtrim_test.c \
	ft_split_test.c \
	ft_itoa_test.c \
	ft_strmapi_test.c \
	ft_striteri_test.c \
	ft_putchar_fd_test.c \
	ft_putstr_fd_test.c \
	ft_putendl_fd_test.c \
	ft_putnbr_fd_test.c
TESTBONUS = ft_lstnew_test.c \
	ft_lstadd_front_test.c \
	ft_lstsize_test.c \
	ft_lstlast_test.c \
	ft_lstadd_back_test.c \
	ft_lstdelone_test.c \
	ft_lstclear_test.c \
	ft_lstiter_test.c \
	ft_lstmap_test.c
TESTALL = $(TEST) $(TESTBONUS)
OBJECTS = $(TEST:.c=.o)
OBJECTSALL = $(TESTALL:.c=.o)

test.out: $(OBJECTS) main_test.c
	$(MAKE) -C .. all
	$(CC) $(CFLAGS) -c -I.. main_test.c -o main_test.o
	$(CC) $(CFLAGS) $(OBJECTS) main_test.o -o $@ -L.. -lft -lbsd

.PHONY: norme test clean
test: test.out norme
	./test.out

norme:
	#norminette ../*.[ch]

%.o: %.c libtest.h
	$(CC) $(CFLAGS) -c -I.. $< -o $@

clean:
	rm -f $(OBJECTS) test.out

testall.out: $(OBJECTSALL) main_test.c
	$(MAKE) -C .. bonus
	$(CC) $(CFLAGS) -c -D LIBFT_BONUS -I.. main_test.c -o main_test.o
	$(CC) $(CFLAGS) $(OBJECTSALL) main_test.o -o $@ -L.. -lft -lbsd

.PHONY: testall fclean
testall: testall.out norme
	./testall.out

fclean: clean
	rm -f $(OBJECTSALL) testall.out
