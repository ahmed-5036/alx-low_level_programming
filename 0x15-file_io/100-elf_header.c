#include "main.h"
#include <elf.h>

/**
 * display_error - prints errors and exits
 * @message: error message to display
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - prints information from the ELF header
 * @elf_header: pointer to the ELF header structure
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	printf("Magic: %02x %02x %02x %02x\n",
	       elf_header->e_ident[EI_MAG0],
	       elf_header->e_ident[EI_MAG1],
	       elf_header->e_ident[EI_MAG2],
	       elf_header->e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header->e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header->e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header->e_type);
	printf("Entry point address: %lx\n", elf_header->e_entry);
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 if successful, 1 on error
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error: failed to open the file");
		return (1);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Failed to read ELF header");
		close(fd);
		return (1);
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return (1);
	}

	display_elf_header_info(&elf_header);
	close(fd);
	return (0);
}

