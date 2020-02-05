/** @file Main.c
 * Convert the provided Microchip PIC18F23K22 hex file to binary.
 * @author Adrien RICCIARDI.
 */
#include <Hex_Parser.h>
#include <stdio.h>
#include <stdlib.h>

//-------------------------------------------------------------------------------------------------
// Private constants
//-------------------------------------------------------------------------------------------------
/** Microchip PIC18F23K22 program memory size in bytes. */
#define MAIN_MICROCONTROLLER_MEMORY_SIZE 8192

//-------------------------------------------------------------------------------------------------
// Private variables
//-------------------------------------------------------------------------------------------------
/** Hold the memory raw content. This buffer can be directly burned to the target. */
static unsigned char Main_Microcontroller_Memory[MAIN_MICROCONTROLLER_MEMORY_SIZE];

//-------------------------------------------------------------------------------------------------
// Entry point
//-------------------------------------------------------------------------------------------------
int main(void)
{
	int Firmware_Size;
	
	// Try to extract hex file content
	Firmware_Size = HexParserConvertHexToBinary("Firmware.hex", MAIN_MICROCONTROLLER_MEMORY_SIZE, 0, Main_Microcontroller_Memory);
	if (Firmware_Size == -1)
	{
		printf("Error : failed to parse hex file. Make sure the file is present and valid.\n");
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
