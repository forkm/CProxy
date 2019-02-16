#include "cproxy_help.h"

char help_information(void)
{
    static const char name[] = "cproxy";
    static const char subject[] = "proxy server";

    static const struct {
        const char *a, *b, *c, *d;
    } author = {
    "aixiao@aixiao.me", "aixiao", "Author:", "Email :",};
    static const char usage[] =
        "usage: [-d] [-h]";

    static const char *s_help[] = {
        "        -h: help information",
        "        -d: daemon",
        "",
        0
    };

    fprintf(stderr, "%s %s\n", name, subject);
    fprintf(stderr, "%s %s\n", author.c, author.b);
    fprintf(stderr, "%s %s\n", author.d, author.a);
    fprintf(stderr, "%s %s\n", name, usage);

    int l;
    for (l = 0; s_help[l]; l++) {
        fprintf(stderr, "%s\n", s_help[l]);
    }

    BUILD("Compile、link.\n");

    return 0;
}
