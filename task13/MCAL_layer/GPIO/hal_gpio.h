/* 
 * File:   hal_gpio.h
 * Author: iBlue
 *
 * Created on 15 ?????, 2024, 03:32 ?
 */

#ifndef HAL_GPIO_H
#define	HAL_GPIO_H

#include "pic18f4620.h"
#include "../mcal_std_types.h"
#include "../device_config.h"
#include "hal_gpio_cfg.h"

/* Macro Declarations */
#define BIT_MASK      (uint8)1
#define PORT_PIN_MAX_NUMBER  8
#define PORT_MAX_NUMBER      5
#define PORT_PIN_CONFIGURATIONS    CONFIG_ENABLE
#define PORT_CONFIGURATIONS        CONFIG_ENABLE
#define PORTC_MASK         0xFF

/* Macro functions Declarations */
#define  HWREG8(_X)          (*(( volatile uint8 *)(_X)))

#define  SET_BIT(REG , BIT_POST )              (REG |= (BIT_MASK << BIT_POST)) 
#define  CLEAR_BIT(REG , BIT_POST )            (REG &= ~(BIT_MASK << BIT_POST))
#define  TOGGLE_BIT(REG , BIT_POST )           (REG ^= (BIT_MASK << BIT_POST))
#define  READ_BIT(REG , BIT_POST )             ((REG >> BIT_POST ) & BIT_MASK)

/* Data Type Declarations */
typedef enum{
    LOW = 0,
    HIGH 
}logic_t;

typedef enum{
    OUTPUT = 0,
    INPUT        
}direction_t;

typedef enum{
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,      
    PIN6,
    PIN7
}pin_index_t;

typedef enum{
    PORTA_INDEX,
    PORTB_INDEX,
    PORTC_INDEX,
    PORTD_INDEX,
    PORTE_INDEX
}port_index_t;

typedef struct{
    uint8 port : 3;
    uint8 pin : 3;
    uint8 direction : 1;
    uint8 logic : 1;
    
}pin_config_t;

/* functions Declarations */
Std_ReturnType gpio_pin_direction_intialize(const pin_config_t *_pin_config);
Std_ReturnType gpio_get_pin_direction_status(const pin_config_t *_pin_config ,direction_t *direction_status);
Std_ReturnType gpio_pin_write_logic(const pin_config_t *_pin_config ,logic_t logic);
Std_ReturnType gpio_pin_read_logic(const pin_config_t *_pin_config ,logic_t *logic);
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t *_pin_config);
Std_ReturnType gpio_direction_intialize(const pin_config_t *_pin_config);

Std_ReturnType gpio_port_direction_intialize(port_index_t port , uint8 direction);
Std_ReturnType gpio_port_get_direction_status(port_index_t port ,uint8 *direction_status);
Std_ReturnType gpio_port_write_logic(port_index_t port ,uint8 logic);
Std_ReturnType gpio_port_read_logic(port_index_t port ,uint8 *logic);
Std_ReturnType gpio_port_toggle_logic(port_index_t port);

#endif	/* HAL_GPIO_H */

