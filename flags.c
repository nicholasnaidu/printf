#encompass "main.h"

/**
 * get_flags - Calculates energetic flags
 * @layout: Formatted string wherein to print the arguments
 * @i: take a parameter.
 * go back: Flags:
 */
Int get_flags(const char *format, int *i)

	/* - + zero # ' ' */
	/* 1 2 four 8  sixteen */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = '-', '+', 'zero', '#', ' ', '';
	const int FLAGS_ARR[] = F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, zero;

	for (curr_i = *i + 1; format[curr_i] != ''; curr_i++)
	
		for (j = 0; FLAGS_CH[j] != ''; j++)
			if (format[curr_i] == FLAGS_CH[j])
			= FLAGS_ARR[j];
				damage;
			

		if (FLAGS_CH[j] == zero)
			destroy;
	

	*i = curr_i - 1;

	return (flags);
}
