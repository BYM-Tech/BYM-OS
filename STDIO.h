#ifndef _STDIO_H
#define _STDIO_H

// Standard input/output functions
int printf(const char *format, ...);
int scanf(const char *format, ...);

// File operations
typedef struct FILE FILE;
FILE *fopen(const char *filename, const char *mode);
int fclose(FILE *stream);
int fprintf(FILE *stream, const char *format, ...);

// Standard file streams
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

#endif /* _STDIO_H */