#include <stdlib.h>
#include <CrashRpt.h>


static void test2(int n)
{
    crEmulateCrash(n);
}

static void test1(int n)
{
    test2(n);
}

static void run_test(int n)
{
    test1(n);
}

int main(int argc, TCHAR** argv)
{
    crInstall();

    int type = 0;
    if (argc == 2)
    {
        type = atoi(argv[1]);
    }
    
    run_test(type);
    return 0;
}

