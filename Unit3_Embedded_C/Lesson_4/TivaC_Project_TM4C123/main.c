#define SYSCTL 0x400FE000
#define SYSCTL_RCGC2_R (*(volatile unsigned long*)((unsigned long*)(SYSCTL+0x108)))

#define GPIOF 0x40025000
#define GPIO_PORTF_DATA_R  (*(volatile unsigned long*)((unsigned long*)(GPIOF+0x3fc)))
#define GPIO_PORTF_DIR_R  (*(volatile unsigned long*)((unsigned long*)(GPIOF+0x400)))
#define GPIO_PORTF_DEN_R (*(volatile unsigned long*)((unsigned long*)(GPIOF+0x51c)))

int main()
{
	volatile int delay; // Variable for delay , I made it volatile to make sure that the optimaization will not remove it's for loop.
	SYSCTL_RCGC2_R = 0x20; // To Enable GPIO PortF
	for(delay=0;delay<200;delay++); // This arbitrary delay to make sure that the GPIO is in running mode.
	GPIO_PORTF_DIR_R |= 1<<3; // To make PortF bit 3 Direction Be Output.
	GPIO_PORTF_DEN_R |= 1<<3; // To Enable Pin to Use it.
	
	while(1)
	{
		GPIO_PORTF_DATA_R |= (1<<3); // Set Pin to make it be 1.
		for(delay=0;delay<20000;delay++); // // This arbitrary delay to let me see the execution.
		GPIO_PORTF_DATA_R &= ~(1<<3); // Set Pin to make it be 0.
		for(delay=0;delay<20000;delay++); // // This arbitrary delay to let me see the execution.
	}
	return 0;
}