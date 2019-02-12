#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{if (argc == 1){printf(1,"CS550 proj0 print in user space:\n");}else{
	printf(1,"CS550 proj0 print in user space: ");
	int i;
	for(i = 1; i < argc; i++)
		printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");}
	exit();
}
