#define _GNU_SOURCE
#include "libft.h"
#include "libtest.h"

int	ft_putendl_fd_test(void)
{
	int		ok;
	int		fd;
	int		n;
	char	buf[50];

	ok = 1;
	fd = memfd_create("putendl", 0);
	ft_putendl_fd("", fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 1 || memcmp(buf, "\n", 1) != 0)
	{
		printf("ft_putendl_fd : ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putendl_fd("coucou", fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 7 || memcmp(buf, "coucou\n", 7) != 0)
	{
		printf("ft_putendl_fd : ko!\n");
		ok = 0;
	}
	close(fd);
	return (ok);
}
