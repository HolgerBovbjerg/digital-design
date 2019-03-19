/*******************************************************************************
* File Name: P0_2_cmp.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_P0_2_cmp_H) /* Pins P0_2_cmp_H */
#define CY_PINS_P0_2_cmp_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "P0_2_cmp_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 P0_2_cmp__PORT == 15 && ((P0_2_cmp__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    P0_2_cmp_Write(uint8 value);
void    P0_2_cmp_SetDriveMode(uint8 mode);
uint8   P0_2_cmp_ReadDataReg(void);
uint8   P0_2_cmp_Read(void);
void    P0_2_cmp_SetInterruptMode(uint16 position, uint16 mode);
uint8   P0_2_cmp_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the P0_2_cmp_SetDriveMode() function.
     *  @{
     */
        #define P0_2_cmp_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define P0_2_cmp_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define P0_2_cmp_DM_RES_UP          PIN_DM_RES_UP
        #define P0_2_cmp_DM_RES_DWN         PIN_DM_RES_DWN
        #define P0_2_cmp_DM_OD_LO           PIN_DM_OD_LO
        #define P0_2_cmp_DM_OD_HI           PIN_DM_OD_HI
        #define P0_2_cmp_DM_STRONG          PIN_DM_STRONG
        #define P0_2_cmp_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define P0_2_cmp_MASK               P0_2_cmp__MASK
#define P0_2_cmp_SHIFT              P0_2_cmp__SHIFT
#define P0_2_cmp_WIDTH              1u

/* Interrupt constants */
#if defined(P0_2_cmp__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in P0_2_cmp_SetInterruptMode() function.
     *  @{
     */
        #define P0_2_cmp_INTR_NONE      (uint16)(0x0000u)
        #define P0_2_cmp_INTR_RISING    (uint16)(0x0001u)
        #define P0_2_cmp_INTR_FALLING   (uint16)(0x0002u)
        #define P0_2_cmp_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define P0_2_cmp_INTR_MASK      (0x01u) 
#endif /* (P0_2_cmp__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define P0_2_cmp_PS                     (* (reg8 *) P0_2_cmp__PS)
/* Data Register */
#define P0_2_cmp_DR                     (* (reg8 *) P0_2_cmp__DR)
/* Port Number */
#define P0_2_cmp_PRT_NUM                (* (reg8 *) P0_2_cmp__PRT) 
/* Connect to Analog Globals */                                                  
#define P0_2_cmp_AG                     (* (reg8 *) P0_2_cmp__AG)                       
/* Analog MUX bux enable */
#define P0_2_cmp_AMUX                   (* (reg8 *) P0_2_cmp__AMUX) 
/* Bidirectional Enable */                                                        
#define P0_2_cmp_BIE                    (* (reg8 *) P0_2_cmp__BIE)
/* Bit-mask for Aliased Register Access */
#define P0_2_cmp_BIT_MASK               (* (reg8 *) P0_2_cmp__BIT_MASK)
/* Bypass Enable */
#define P0_2_cmp_BYP                    (* (reg8 *) P0_2_cmp__BYP)
/* Port wide control signals */                                                   
#define P0_2_cmp_CTL                    (* (reg8 *) P0_2_cmp__CTL)
/* Drive Modes */
#define P0_2_cmp_DM0                    (* (reg8 *) P0_2_cmp__DM0) 
#define P0_2_cmp_DM1                    (* (reg8 *) P0_2_cmp__DM1)
#define P0_2_cmp_DM2                    (* (reg8 *) P0_2_cmp__DM2) 
/* Input Buffer Disable Override */
#define P0_2_cmp_INP_DIS                (* (reg8 *) P0_2_cmp__INP_DIS)
/* LCD Common or Segment Drive */
#define P0_2_cmp_LCD_COM_SEG            (* (reg8 *) P0_2_cmp__LCD_COM_SEG)
/* Enable Segment LCD */
#define P0_2_cmp_LCD_EN                 (* (reg8 *) P0_2_cmp__LCD_EN)
/* Slew Rate Control */
#define P0_2_cmp_SLW                    (* (reg8 *) P0_2_cmp__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define P0_2_cmp_PRTDSI__CAPS_SEL       (* (reg8 *) P0_2_cmp__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define P0_2_cmp_PRTDSI__DBL_SYNC_IN    (* (reg8 *) P0_2_cmp__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define P0_2_cmp_PRTDSI__OE_SEL0        (* (reg8 *) P0_2_cmp__PRTDSI__OE_SEL0) 
#define P0_2_cmp_PRTDSI__OE_SEL1        (* (reg8 *) P0_2_cmp__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define P0_2_cmp_PRTDSI__OUT_SEL0       (* (reg8 *) P0_2_cmp__PRTDSI__OUT_SEL0) 
#define P0_2_cmp_PRTDSI__OUT_SEL1       (* (reg8 *) P0_2_cmp__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define P0_2_cmp_PRTDSI__SYNC_OUT       (* (reg8 *) P0_2_cmp__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(P0_2_cmp__SIO_CFG)
    #define P0_2_cmp_SIO_HYST_EN        (* (reg8 *) P0_2_cmp__SIO_HYST_EN)
    #define P0_2_cmp_SIO_REG_HIFREQ     (* (reg8 *) P0_2_cmp__SIO_REG_HIFREQ)
    #define P0_2_cmp_SIO_CFG            (* (reg8 *) P0_2_cmp__SIO_CFG)
    #define P0_2_cmp_SIO_DIFF           (* (reg8 *) P0_2_cmp__SIO_DIFF)
#endif /* (P0_2_cmp__SIO_CFG) */

/* Interrupt Registers */
#if defined(P0_2_cmp__INTSTAT)
    #define P0_2_cmp_INTSTAT            (* (reg8 *) P0_2_cmp__INTSTAT)
    #define P0_2_cmp_SNAP               (* (reg8 *) P0_2_cmp__SNAP)
    
	#define P0_2_cmp_0_INTTYPE_REG 		(* (reg8 *) P0_2_cmp__0__INTTYPE)
#endif /* (P0_2_cmp__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_P0_2_cmp_H */


/* [] END OF FILE */
