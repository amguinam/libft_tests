#define _GNU_SOURCE
#include "libft.h"
#include "libtest.h"

int	ft_putstr_fd_test(void)
{
	int		ok;
	int		fd;
	int		n;
	char	buf[50];

	ok = 1;
	fd = memfd_create("putstr", 0);
	ft_putstr_fd("", fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 0)
	{
		printf("ft_putstr_fd empty: ko!\n");
		ok = 0;
	}
	ftruncate(fd, 0);
	ft_putstr_fd("coucou", fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 6 || memcmp(buf, "coucou", 6) != 0)
	{
		printf("ft_putstr_fd : ko!\n");
		ok = 0;
	}
	close(fd);
	return (ok);
}
