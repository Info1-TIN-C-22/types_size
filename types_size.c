/**
 * @brief Display standard C types sizes in Bytes
 * @file types_size.c
 * @author gregory.medwed@heig-vd.ch
 * @date July 2022
 * @note TO COMPILE: gcc -O3 -Wall -Wextra -Wpedantic types_size.c -o types_size
 */


#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

enum Enum { Enum0 };

typedef struct Struct8  { uint8_t   byte; } Struct8_t;
typedef struct Struct16 { uint16_t  word; } Struct16_t;
typedef struct Struct32 { uint32_t dword; } Struct32_t;

/**
 * Display standard C types sizes in Bytes
 * @return Always 0
 */
int main(void)
{
	printf("\"standard\" type sizes in C\n");
	printf("bool:            %ld [Byte]\n", sizeof(bool));
	printf("int8_t,  char:   %ld, %ld [Byte]\n", sizeof(int8_t), sizeof(char));
	printf("int16_t, short:  %ld, %ld [Bytes]\n", sizeof(int16_t), sizeof(short));
	printf("int32_t, int:    %ld, %ld [Bytes]\n", sizeof(int32_t), sizeof(int));
	printf("int64_t, long:   %ld, %ld [Bytes]\n", sizeof(int64_t), sizeof(long));
	printf("float:           %ld [Bytes]\n", sizeof(float));
	printf("double:          %ld [Bytes]\n", sizeof(double));
	printf("long double:    %ld [Bytes]\n", sizeof(long double));
	printf("address (void*): %ld [Bytes]\n", sizeof(void*));
	printf("size_t:          %ld [Bytes]\n", sizeof(size_t));
	printf("enum:            %ld [Bytes]\n", sizeof(Enum0));
	printf("Struct8_t:       %ld [Bytes]\n", sizeof(Struct8_t));
	printf("Struct16_t:      %ld [Bytes]\n", sizeof(Struct16_t));
	printf("Struct32_t:      %ld [Bytes]\n", sizeof(Struct32_t));

	return 0;
}
