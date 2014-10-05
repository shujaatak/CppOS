#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
 
#include <kernel/tty.h>
 
extern "C" {

void kernel_early(void)
{
	terminal_initialize();
}


class DD{
	public:
		void say(){
			printf("Hello, kernel World!\n");
		}
};

void kernel_main(void)
{
	//printf("Hello, kernel World!\n");
	DD dd;
	while(1) {
	dd.say();
	}
}


}
