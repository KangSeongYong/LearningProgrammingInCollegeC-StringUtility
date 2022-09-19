#include <stddef.h>
#define NULL 0
#define TRUE 1
#define FALSE 0

const int is_empty_or_null(const char* string);
const int is_whitespace_or_null(const char* string);

const int is_empty_or_null(const char* string) {
	if (string == NULL || *string == '\0') {
		return TRUE;
	}
	return FALSE;
}
const int is_whitespace_or_null(const char* string) {
	if (is_empty_or_null(string)) {
		return TRUE;
	}
	while (TRUE) {
		if (*string == '\0') {
			return TRUE;
		}
		if (*string != ' ') {
			return FALSE;
		}
		string++;
	}
}
