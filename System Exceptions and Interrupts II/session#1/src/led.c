#include <stdint.h>
#include "stm32f407xx.h"

/* offest of the AHB1ENR register from RCC block */
#define RCC_AHB1ENR_OFFSET         0x30

/* Base address of the RCC.. we got this address by looking into memory map */
#define RCC_BASE_ADDR              (0x40023800)

/* actual address of the RCC_AHB1ENR Register */
#define RCC_AHB1ENR_ADDR            *((volatile unsigned long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET) )

#define GPIOD_MODER_OFFSET        0X00

#define BASE_ADDR_GPIOD           (0x40020C00)

#define GPIOD_MODER                *((volatile unsigned long *)(BASE_ADDR_GPIOD + GPIOD_MODER_OFFSET))
	
#define OFFSET_OF_OUTPU_DATA_REG 0X14
#define GPIOD_OPDATAREG      *( (volatile unsigned long *)(BASE_ADDR_GPIOD+OFFSET_OF_OUTPU_DATA_REG))

/* We need define the address of GPIO input data register to repeat the turn-on and off of LED */

int main(void)
{
	uint32_t i=0;
	/* 1. Enable the clock for GPIOD port */
	RCC_AHB1ENR_ADDR |= (1<<3);//bit 3 enables the clock for the GPIOD port
	
	/* 2. Configure the GPIO PIN to output mode using MODE register  */
	
	GPIOD_MODER |= (1 << (12 * 2)); //set 24th bit and 25 bit to 0x01 to make 12pin output
	
	/* 3. use the DATA REGISTER of GPIOD port to write to or read from LED */
	
	GPIOD_OPDATAREG |= (1<<12);//turn the led4 on. remember led 4 is connected to GPIOD PIN 12
	
	/* 4. How to turn on and off repeatedly? make it */	
	return 0;
}