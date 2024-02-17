// Startup.c For ARM Cortex M3
// This Project was prepared by Ayman Mohamed Elashry

#include "My_Platform_Types.h"


extern uint32_t stack_top;
extern uint32_t End_text;
extern uint32_t Start_data;
extern uint32_t End_data;
extern uint32_t Start_bss;
extern uint32_t End_bss;

extern int main(void);

void Reset_Handler()
{
    // Copy Data from Flash to SRAM
    uint32_t DATA_SIZE = (unsigned char*) &End_data - (unsigned char*)&Start_data;
    unsigned char * P_src = (unsigned char*) &End_text;
    unsigned char * P_dst = (unsigned char*) &Start_data;
    int i=0;
    while(i< DATA_SIZE)
    {
        *((unsigned char*)P_dst++)=*((unsigned char*)P_src++);
        i++;
    }
    
    // init the .bss section with zero
    uint32_t bss_size = (unsigned char*)&End_bss - (unsigned char*) &Start_bss;
    P_dst=(unsigned char*)&Start_bss;
    i=0;
    while(i<bss_size)
    {
        *((unsigned char*)P_dst++)=(unsigned char)0;
        i++;
    }

    // Jump to Main Function
    main();
}

void Default_Handler()
{
    Reset_Handler();
}

void NMI_Handler() __attribute__ ((weak,alias("Default_Handler"))) ;
void H_Fault_Handler() __attribute__ ((weak,alias("Default_Handler"))) ;
void MM_Fault_Handler() __attribute__ ((weak,alias("Default_Handler"))) ;
void Bus_Fault() __attribute__ ((weak,alias("Default_Handler"))) ;
void Usage_Fault_Handler() __attribute__ ((weak,alias("Default_Handler"))) ;

uint32_t vectors[] __attribute__ ((section(".vectors")))=
{
(uint32_t) &stack_top,
(uint32_t) &Reset_Handler,
(uint32_t) &NMI_Handler,
(uint32_t) &H_Fault_Handler,
(uint32_t) &Bus_Fault,
(uint32_t) &Usage_Fault_Handler

};



