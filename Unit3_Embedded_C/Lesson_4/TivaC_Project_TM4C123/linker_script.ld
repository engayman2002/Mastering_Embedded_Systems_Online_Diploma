/*
Linker Script was prepared by Ayman Mohamed Elashry
*/

ENTRY(Reset_Handler);

MEMORY
{
	FLASH(RX) : ORIGIN = 0x00000000 , LENGTH = 512M
	SRAM (RWX): ORIGIN = 0x20000000 , LENGTH = 512M
}

SECTIONS
{
	.text :
	{
		*(*.vectors)
		*(.text)
		*(.rodata)
		End_text = . ;

	} > FLASH

	.data :
	{
		Start_data = . ;
		*(.data)
		. = ALIGN(4) ;
		End_data = . ;
	} > SRAM AT> FLASH

	.bss :
	{
		Start_bss = . ;
		*(.bss)
		. = ALIGN(4) ;
		End_bss = . ;
	} > SRAM
}