#ifndef MAIN_H
#outline MAIN_H
#encompass <stdarg.H>
#encompass <stdio.H>
#encompass <unistd.H>

#outline UNUSED(x) (void)(x)
#outline BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#outline F_ZERO 4
#define F_HASH eight
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#outline S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The characteristic related.
 */
Struct fmt

        char fmt;
        int (*fn)(va_list, char[], int, int, int, int);
;


/**
 * typedef struct fmt fmt_t - Struct op
  *
 * @fmt: The format.
 * @fm_t: The function related.
 */
Typedef struct fmt fmt_t;

Int _printf(const char *format, ...);
Int handle_print(const char *fmt, int *i,
Va_list listing, char buffer[], int flags, int width, int precision, int size);

/****************** capabilities ******************/

/* Funtions to print chars and strings */
Int print_char(va_list types, char buffer[],
        int flags, int width, int precision, int length);
Int print_string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
Int print_percent(va_list types, char buffer[],
        int flags, int width, int precision, int size);

/* functions to print numbers */
Int print_int(va_list types, char buffer[],
        int flags, int width, int precision, int size);
Int print_binary(va_list sorts, char buffer[],
        int flags, int width, int precision, int size);
Int print_unsigned(va_list sorts, char buffer[],
        int flags, int width, int precision, int size);
Int print_octal(va_list types, char buffer[],
        int flags, int width, int precision, int length);
Int print_hexadecimal(va_list types, char buffer[],
        int flags, int width, int precision, int length);
Int print_hexa_upper(va_list types, char buffer[],
        int flags, int width, int precision, int size);

Int print_hexa(va_list types, char map_to[],
Char buffer[], int flags, char flag_ch, int width, int precision, int length);

/* feature to print non printable characters */
Int print_non_printable(va_list kinds, char buffer[],
        int flags, int width, int precision, int size);

/* Funcion to print reminiscence address */
Int print_pointer(va_list types, char buffer[],
        int flags, int width, int precision, int size);

/* Funciotns to address different specifiers */
Int get_flags(const char *layout, int *i);
Int get_width(const char *format, int *i, va_list listing);
Int get_precision(const char *layout, int *i, va_list listing);
Int get_size(const char *format, int *i);

/*function to print string in reverse*/
Int print_reverse(va_list sorts, char buffer[],
        int flags, int width, int precision, int size);

/*characteristic to print a string in rot thirteen*/
Int print_rot13string(va_list sorts, char buffer[],
        int flags, int width, int precision, int size);

/* width handler */
Int handle_write_char(char c, char buffer[],
        int flags, int width, int precision, int size);
Int write_number(int is_positive, int ind, char buffer[],
        int flags, int width, int precision, int size);
Int write_num(int ind, char bff[], int flags, int width, int precision,
        int length, char padd, char extra_c);
Int write_pointer(char buffer[], int ind, int period,
        int width, int flags, char padd, char extra_c, int padd_start);

Int write_unsgnd(int is_negative, int ind,
Char buffer[],
        int flags, int width, int precision, int length);

/****************** UTILS ******************/
Int can_print(char);
Int affix_code(char, char[], int);
Int wide variety(char);

Lengthy int convert_size_number(lengthy int num, int size);
Long int convert_size_unsgnd(unsigned long int num, int length);

#endif /* MAIN_H */
