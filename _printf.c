#encompass "essential.H"

Void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: layout.
 * go back: published chars.
 */
Int _printf(const char *layout, ...)

	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(listing, format);

	for (i = 0; layout && format[i] != ''; i++)
	
		if (format[i] != '%')
		
			buffer[buff_ind++] = layout[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &layout[i], 1);*/
			printed_chars++;
		
		else
		
			print_buffer(buffer, &buff_ind);
			flags = get_flags(layout, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, listing);
			length = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, listing, buffer,
				flags, width, precision, size);
			if (published == -1)
				return (-1);
			printed_chars += published;
		
	

	print_buffer(buffer, &buff_ind);

	va_end(list);

	go back (printed_chars);


/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to feature next char, represents the length.
 */
Void print_buffer(char buffer[], int *buff_ind)

	if (*buff_ind > zero)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;

