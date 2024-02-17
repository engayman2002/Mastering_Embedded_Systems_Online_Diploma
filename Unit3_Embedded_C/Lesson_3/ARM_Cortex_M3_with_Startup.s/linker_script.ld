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
	} > FLASH
	.data :
	{
		*(.data)
	} > FLASH
	.bss :
	{
		*(.bss)
	} > SRAM
}