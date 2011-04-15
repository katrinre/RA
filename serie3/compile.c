/* TODO: Task (b) Please fill in the following lines, then remove this line.
 *
 * author(s):   Katrin Rettich
 * modified:    2010-01-07
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "memory.h"
#include "mips.h"
#include "compiler.h"
 
int main ( int argc, char** argv ) {
    /* TODO: Task (c) implement main */

	if(argc) {
        	printf("\n%d\n",sizeof(argc));
		printf("Wrong input!\n");
		printf("usage: %s expression filename\n", argv[0]);

       while(argc--)
     		printf("%s\n", argc);
                printf("%s\n", *argv++);

		return EXIT_FAILURE;
    	}
 	else {
		printf("The argument supplied is %s\n", argv[1]);

		/*compiler(argv[1], argv[0]);
		return EXIT_SUCCESS;*/
	}
}

