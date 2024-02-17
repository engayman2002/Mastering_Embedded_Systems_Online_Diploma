/*
Startup File .s as Prepared by Ayman Mohamed Elashry
*/

// Vector Section
.section .vectors

.word 0x20001000 /* Stack_TOP_Address (Feature in ARM Cortex M Family) */
.word _reset /* 1 Reset */
.word Vector_Handler /* 2 NMI */
.word Vector_Handler /* 3 Hard_Falut */
.word Vector_Handler /* 4 MM_Fault */
.word Vector_Handler /* 5 Bus_Fault */
.word Vector_Handler /* 6 Usage_Fault */
.word Vector_Handler /* 7 Reserved */
.word Vector_Handler /* 8 Reserved */
.word Vector_Handler /* 9 Reserved */
.word Vector_Handler /* 10 Reserved */
.word Vector_Handler /* 11 SV Call */
.word Vector_Handler /* 12 Debug Reserved */
.word Vector_Handler /* 13 Reserved */
.word Vector_Handler /* 14 PendSV */
.word Vector_Handler /* 15 SysTick */
.word Vector_Handler /* 16 IRQ0 */
.word Vector_Handler /* 17 IRQ1 */
.word Vector_Handler /* 18 IRQ2 */
.word Vector_Handler /* 19 ... */
 /* On to IRQ67 */
 
// Text Section

.section .text
_reset:
	bl main
	b .

.thumb_func
Vector_Handler:
	b _reset
