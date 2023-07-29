#include "main.h"

void display_error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void display_elf_header(const Elf64_Ehdr* header)
{
	int i = 0;

	printf("Magic:  ");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:  %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data:  %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:  %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX System V ABI\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("Solaris\n"); break;
		case ELFOSABI_AIX: printf("AIX\n"); break;
		case ELFOSABI_IRIX: printf("IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("TRU64 UNIX\n"); break;
		case ELFOSABI_MODESTO: printf("Novell Modesto\n"); break;
		case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
		default: printf("Unknown\n");
	}
	printf("ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:  0x%04x\n", header->e_type);
	printf("Entry point address:  0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[])
{
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	if (fd == -1)
	{
		display_error("Error opening file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Error reading ELF header");
	}
	
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		display_error("Not an ELF file");
	}
	
	display_elf_header(&header);
	close(fd);
	return 0;
}
