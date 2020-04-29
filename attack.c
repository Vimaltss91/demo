#include <stdio.h>
#include <stdlib.h>

static void malilcious() __attribute__((constructor));

void malicious() {
	sleep(20);
}

