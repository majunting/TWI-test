/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F25K80
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ADDO aliases
#define ADDO_TRIS               TRISBbits.TRISB1
#define ADDO_LAT                LATBbits.LATB1
#define ADDO                    PORTBbits.RB1
#define ADDO_WPU                WPUBbits.WPUB1
#define ADDO_ANS                ANCON1bits.ANSEL8
#define ADDO_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define ADDO_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define ADDO_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define ADDO_GetValue()           PORTBbits.RB1
#define ADDO_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define ADDO_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define ADDO_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define ADDO_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define ADDO_SetAnalogMode()  do { ANCON1bits.ANSEL8 = 1; } while(0)
#define ADDO_SetDigitalMode() do { ANCON1bits.ANSEL8 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)

// get/set ADSK aliases
#define ADSK_TRIS               TRISBbits.TRISB4
#define ADSK_LAT                LATBbits.LATB4
#define ADSK                    PORTBbits.RB4
#define ADSK_WPU                WPUBbits.WPUB4
#define ADSK_ANS                ANCON1bits.ANSEL9
#define ADSK_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ADSK_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ADSK_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ADSK_GetValue()           PORTBbits.RB4
#define ADSK_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ADSK_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ADSK_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define ADSK_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define ADSK_SetAnalogMode()  do { ANCON1bits.ANSEL9 = 1; } while(0)
#define ADSK_SetDigitalMode() do { ANCON1bits.ANSEL9 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/