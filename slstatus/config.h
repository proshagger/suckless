/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function      format                          argument                         signal */
	{ cpu_perc,      "^c#d98c8c^ %s%%^d^ | ",       NULL,                            0 },
	{ ram_perc,      "^c#9fd3a5^ %s%%^d^ | ",       NULL,                            0 },
	{ disk_perc,     "^c#b7a0d6^ %s%%^d^ | ",       "/",                             0 },
	{ datetime,      "%s",                          "%a %b %d %H:%M",               0 },
};
