#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);
    Pointer<int, 2> k = new int[2]();
    return 0;
}
