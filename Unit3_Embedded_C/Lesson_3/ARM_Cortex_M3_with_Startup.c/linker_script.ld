/*
Linker Script was prepared by Ayman Mohamed Elashry
*/

ENTRY(main);

MEMORY
{
	FLASH(RX) : ORIGIN = 0x08000000 , LENGTH = 128K
	SRAM (RWX): ORIGIN = 0x20000000 , LENGTH = 20K
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
		. = . + 0x1000 ;
		stack_top = . ;

	} > SRAM
}