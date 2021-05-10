#include <stdio.h>
#include <windows.h>

main()
{
    int x = rand();
    char buf[1024];
    snprintf(buf, 1024, "Variable x is equal to %d", x);

    MessageBox(0, buf, "Variable", 0);
    return 0;
}
