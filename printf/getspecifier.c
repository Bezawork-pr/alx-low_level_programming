#include "main.h"
int (*get_sp_func(char *s))(va_list arg)
{
	unsigned int i = 0;
	p pl[] = {                                                                                                              
                {"c", _print_char},                                                                                             
                {"s", _print_string},                                                                                           
                {"d", _print_integer},                                                                                          
                {"i", _print_integer},                                                                                          
                {"b", _print_binary},                                                                                           
                {"u", _print_unsignedint},                                                                                      
                {"o", _print_octal},                                                                                            
                {"x", print_hex},                                                                                               
                {"X", _print_HEX},                                                                                              
                {"r", _print_reversed},                                                                                         
                {"R", _print_rot13},                                                                                            
                {NULL, NULL}                                                                                                    
        };   

	while (pl[i].sp)
	{
		if (*pl[i].sp == *s)
		{
			return (pl[i].f);
		}
		i++;
	}
	return ('\0');
}
