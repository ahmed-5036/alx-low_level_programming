#include "main.h"

/**
 * main - displays the information contained in the ELF header of an ELF file
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int elf_fd;
    Elf64_Ehdr elf_header;
    ssize_t bytes_read;

    /* Check for correct number of arguments */
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    /* Open ELF file */
    elf_fd = open(argv[1], O_RDONLY);
    if (elf_fd == -1)
        handle_error("Error: Can't open file", argv[1], 98);

    /* Read ELF header */
    bytes_read = read(elf_fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read == -1)
        handle_error("Error: Can't read from file", argv[1], 98);

    /* Check ELF magic number */
    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
        handle_error("Error: Not an ELF file", argv[1], 98);

    /* Display ELF header information */
    print_elf_header(&elf_header);

    /* Close ELF file */
    if (close(elf_fd) == -1)
        handle_error("Error: Can't close fd", argv[1], 100);

    return (0);
}

/**
 * handle_error - prints an error message to stderr and exits the program
 * @message: the error message to print
 * @file: the name of the file associated with the error
 * @exit_code: the exit code to use when exiting the program
 */
void handle_error(const char *message, const char *file, int exit_code)
{
    dprintf(STDERR_FILENO, "%s %s\n", message, file);
    exit(exit_code);
}

/**
 * print_elf_header - prints the information contained in the ELF header
 * @header: a pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
    /* Implement the logic to print the ELF header information here */
    /* Refer to your original code for this part */
}

