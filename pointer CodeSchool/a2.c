#include <stdio.h>
#include <Windows.h>
#include <dos.h>
void password();

int main()
{
    system("color B");
    password();
}

void password()
{
    char password[20] = {"Admin"};
    Sleep(50);
    printf("Password\n");
}