/*=================================================================================*/
/*  File        : MOTOR_INTERFACE                                                  */
/*  Description : This Header file for MOTOR_INTERFACE                             */
/*  Author      : Ahmed Mohamed Mohamed Hassanien . Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-mohamed-a23651294/             */
/*  Git account : https://github.com/AhmedTorres2000				               */
/*  mail        : Ahmedtorres2000@gmil.com                                         */
/*=================================================================================*/

#ifndef HAL_MOTOR_DRIVER_MOTOR_INTERFACE_H_
#define HAL_MOTOR_DRIVER_MOTOR_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

void MOTORS_voidInit(void);

void MOTOR1_voidSpeed(u8 speed);
void MOTOR2_voidSpeed(u8 speed);
void MOTORS_voidSpeed(u8 speed);

void MOTORS_voidForward(u8 speed);
void MOTORS_voidBackward(u8 speed);
void MOTORS_voidRight(u8 speed);
void MOTORS_voidLeft(u8 speed);
void MOTORS_voidStop(void);







#endif /* HAL_MOTOR_DRIVER_MOTOR_INTERFACE_H_ */
