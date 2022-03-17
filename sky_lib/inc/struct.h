#pragma once

#include <stdio.h>

#include "errors.h"

typedef struct skyscraper {  // description of skyscraper structure
	char* name;
	char* country;
	char* purpose;
	int floors_count;
	int height;
	int spire_height;
} skyscraper;

result_t* add(skyscraper*, int*, FILE*);
void list(const skyscraper*, const int, char**, const int, char**, const int);
