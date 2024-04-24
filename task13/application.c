/* 
 * File:   application.c
 * Author: iBlue
 *
 * Created on 15 April , 2024, 02:49 ?
 */

#include <stdio.h>
#include <stdlib.h>
#include "application.h"

//#define    HWREG8(_X)     (*((volatile uint8 *)(_X)))
#define _XTAL_FREQ  4000000UL
#define    D_LATC           (HWREG8(0xF8B))
#define    D_TRISC          (HWREG8(0xF94))
Std_ReturnType ret = E_NOT_OK;

int main() {
    
 pin_config_t  led_1={
    .port=PORTC_INDEX,
    .pin= PIN0,
    .direction=OUTPUT,
    .logic=LOW
 };  
 
 pin_config_t  led_2={
    .port=PORTC_INDEX,
    .pin= PIN1,
    .direction=OUTPUT,
    .logic=LOW
 };  
 
 pin_config_t  led_3={
    .port=PORTC_INDEX,
    .pin= PIN2,
    .direction=OUTPUT,
    .logic=LOW
 };  
 
 ret = gpio_pin_direction_intialize(&led_1);
 ret = gpio_pin_direction_intialize(&led_2);
 ret = gpio_pin_direction_intialize(&led_3);
 
 while (1){
    
    ret =gpio_pin_write_logic(&led_1 , HIGH);
    __delay_ms(2000);
     ret =gpio_pin_write_logic(&led_1 , LOW);
    
    
    ret =gpio_pin_write_logic(&led_3 , HIGH);
    __delay_ms(2000);
    ret =gpio_pin_write_logic(&led_3 , LOW);
    
    
    ret =gpio_pin_write_logic(&led_2 , HIGH);
   __delay_ms(2000);
    ret =gpio_pin_write_logic(&led_2 , LOW);
    
    }
    
    
    return (EXIT_SUCCESS);
}

