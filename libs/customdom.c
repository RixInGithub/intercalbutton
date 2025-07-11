#include "ick_ec.h"
#include <emscripten.h>

ICK_EC_FUNC(dom_querySelector)
{
	EM_ASM({
		console.log("wowza")
	});
	long a = ick_ec_getarg(0);
	long b = ick_ec_getarg(1);
	ick_ec_setret(a + b);
}
ICK_EC_FUNC_END