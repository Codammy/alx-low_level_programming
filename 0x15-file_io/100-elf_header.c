#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <string.h>

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *elf_header) {
	int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\nClass: %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
    printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", elf_header->e_type);
    printf("Entry point address: 0x%ld\n", (long)elf_header->e_entry);
}

int main(int argc, char *argv[]) {
	char *filename;
	ssize_t bytes_read;
	int fd;
	Elf64_Ehdr elf_header;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Could not open the file");
    }

    bytes_read = read(fd, &elf_header, sizeof(elf_header));
    if (bytes_read != sizeof(elf_header)) {
        print_error("Failed to read ELF header");
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}
