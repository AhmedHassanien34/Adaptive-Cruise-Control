/*=================================================================================*/
/*  File        : Ultrasonic_config                                                */
/*  Description : This Header file for Ultrasonic_config                           */
/*  Author      : Ahmed Mohamed Mohamed Hassanien . Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-mohamed-a23651294/             */
/*  Git account : https://github.com/AhmedTorres2000				               */
/*  mail        : Ahmedtorres2000@gmil.com                                         */
/*=================================================================================*/

#ifndef HAL_ULTRASONIC_CONFIG_H_
#define HAL_ULTRASONIC_CONFIG_H_

#define ULTRASONIC_TRIGGER_PORT_ID           GPIO_u8_GPIOA
#define ULTRASONIC_TRIGGER_PIN_ID            GPIO_u8_PIN7

#define ULTRASONIC_ECHO_PORT_ID              GPIO_u8_GPIOB
#define ULTRASONIC_ECHO_PIN_ID               GPIO_u8_PIN0

#define ULTRASONIC_TIMER                     TIMER_u8_3
#define ULTRASONIC_TIMER_CHANNEL             CC3

#endif /* HAL_ULTRASONIC_ULTRASONIC_CONFIG_H_ */
