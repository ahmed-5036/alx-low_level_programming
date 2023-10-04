#include "main.h"

/**
 * main - Entry point
 * @ac: The number of command-line arguments
 * @av: An array of command-line argument strings
 *
 * Return: 0 on success, exit codes on failure
 */
int main(int ac, char **av)
{
	int fd, bytes_read;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(fd);
		exit(98);
	}

	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		dprintf(2, "Error: Not an ELF file: %s\n", av[1]);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header.e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');

	printf("  Class:                             ");
	printf(header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32\n" : "ELF64\n");
	printf("  Data:                              ");
	printf(header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian\n" :
	       header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian\n" :
	       "Invalid data encoding\n");

	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - %s\n", get_osabi_name

