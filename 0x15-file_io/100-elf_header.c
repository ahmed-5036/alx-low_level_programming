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
	int i;	
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type)
    {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

