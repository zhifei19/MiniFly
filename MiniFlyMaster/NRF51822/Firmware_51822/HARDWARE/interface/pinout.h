#ifndef __PINOUT_H
#define __PINOUT_H

#define LED_PIN 			8
#define BUTTON_PIN 			17	
#define PM_VCCEN_PIN 		29	/* LDOʹ�ܿ��ƽ� */
#define PM_CHG_STATE_PIN 	1	
#define PM_VBAT_SINK_PIN 	5	
#define USB_CONNECTED_PIN	7	/*�ж�USB�Ƿ��������*/

#define RADIO_PAEN_PIN 		19
#define RADIO_PATX_DIS_PIN 	20

/* ��STM32�������� */
#define STM_BOOT0_PIN 		9	
#define STM_NRST_PIN 		3	
#define UART_RX_PIN 		0
#define UART_TX_PIN 		30
#define UART_RTS_PIN 		2

#define AIN_VBAT 			ADC_CONFIG_PSEL_AnalogInput5	/*��ѹ�ɼ�����*/
#define AIN_VBAT_DIVIDER 	ADC_CONFIG_INPSEL_AnalogInputOneThirdPrescaling	/*ģ������1/3��ѹ*/
#define ADC_SCALER 			(2.0/1.0)	/*�����ѹ*/
#define ADC_DIVIDER 		(3.0/1.0)	/*��ѹ���ű���*/

#endif //__PINOUT_H

