#ifndef __UIO_H
#define __UIO_H

#define CON     1

/* standard file descriptor */
#define stdin   0
#define stdout  1 
#define stderr  2

int uio_init();

char getch(int fd);
char getchar();
int gets(char *str);

void putch(int fd, char ch);
void putchar(char ch);
void puts(char *str);
void fprintf(int fd, char *fmt, ...);
void printf(char *fmt, ...);

#endif