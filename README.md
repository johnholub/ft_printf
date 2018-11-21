# ft_printf

### Compile with your files

Run make to compile the library.
Add to your .c or .h file line bellow
```
#include "ft_printf.h"
```
Use it like you would use the printf function:
```
int main()
{
  ft_printf("Hello %s %i\n", "world", 42);
  return (0);
}
```
Then compile just like that ⇣
```
gcc yourfile.c libftprintf.a -o progname
```
And execute it easily ⇣
```
./progname
```
