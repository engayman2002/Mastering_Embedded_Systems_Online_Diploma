#Makefile Prepared by Ayman Mohamed Elashry
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 -mthumb
INCS=-I .
#Library
LIBS = 
SRC = $(wildcard */*.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard */*.s)
AsOBJ = $(As:.s=.o)

MAINSRC = $(wildcard *.c)
MAIN = $(MAINSRC:.c=.o)

Linker_script_name=linker_script
Project_Name = High_Pressure_Detection_LearnInDepth_Ayman

all: $(Project_Name).bin

%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	$(CC)nm.exe $@ >> $@-Symbols.txt
	$(CC)objdump.exe -h $@ >> $@-Header.txt
	$(CC)objdump.exe -d $@ >> $@-Disassemble.txt

%.o:%.s
	$(CC)as.exe $(CFLAGS) $< -o $@
	$(CC)nm.exe $@ >> $@-Symbols.txt
	$(CC)objdump.exe -h $@ >> $@-Header.txt
	$(CC)objdump.exe -d $@ >> $@-Disassemble.txt

$(Project_Name).elf : $(OBJ) $(AsOBJ) $(MAIN)
	$(CC)ld.exe -T $(Linker_script_name).ld $(OBJ) $(AsOBJ) $(MAIN) $(LIBS) -o $@ -Map=Map_file.map
	$(CC)objdump.exe -h $(Project_Name).elf >> Header_info_ELF_$(Project_Name).txt
	$(CC)objdump.exe -d $(Project_Name).elf >> Disassemble_info_ELF_$(Project_Name).txt
	
$(Project_Name).bin:$(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@
	@echo "Done."
	
clean:
	rm */*.o */*.elf */*.txt */*.map */*.bin *.o *.elf *.txt *.map *.bin
	@echo "All .o & .elf & .txt & .map & .bin was deleted successfully"
