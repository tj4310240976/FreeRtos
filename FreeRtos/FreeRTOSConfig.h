#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * ��Щ����Ӧ���������ض�Ӳ����Ӧ��������е�����
 * ��Щ������ FreeRTOS.org ��վ�ϵ� FreeRTOS API �ĵ��ġ����á���������������
 * �鿴 http://www.freertos.org/a00110.html
 *----------------------------------------------------------*/

// ������ռʽ����ģʽ��
#define configUSE_PREEMPTION		1

// ���ÿ��������Ӻ�����ͨ������ͳ�ƻ����Ŀ�ġ�
#define configUSE_IDLE_HOOK			0

// ���õδ��Ӻ�����ͨ������ͳ�ƻ����Ŀ�ġ�
#define configUSE_TICK_HOOK			0

// ���� CPU ʱ��Ƶ��Ϊ 72MHz��
#define configCPU_CLOCK_HZ			( ( unsigned long ) 72000000 )

// ���õδ��ʣ�ϵͳʱ�ӣ�Ϊ 1000Hz����ζ��ÿ�뷢�� 1000 �εδ�
#define configTICK_RATE_HZ			( ( TickType_t ) 1000 )

// ��������������ȼ�����Ϊ 5��
#define configMAX_PRIORITIES		( 5 )

// �����������С��ջ��СΪ 128 �֡�
#define configMINIMAL_STACK_SIZE	( ( unsigned short ) 128 )

// ���öѵ��ܴ�СΪ 17K �ֽڡ�
#define configTOTAL_HEAP_SIZE		( ( size_t ) ( 17 * 1024 ) )

// �����������Ƶ���󳤶�Ϊ 16 ���ַ���
#define configMAX_TASK_NAME_LEN		( 16 )

// ���ø�����ʩ��ͨ�����ڵ��ԡ�
#define configUSE_TRACE_FACILITY	0

// ���� 16 λ�δ������ʹ��Ĭ�ϵ� 32 λ��
#define configUSE_16_BIT_TICKS		0

// ���ÿ���������Զ����Ȳ��ԣ������и������ȼ������������ʱ������������������� CPU ����Ȩ��
#define configIDLE_SHOULD_YIELD		1


/* ���¶������ڿ��� API �����İ������ų�������Ϊ 1 ��ʾ�����ú���������Ϊ 0 ��ʾ�ų��� */

// ���������������ȼ��� API ������
#define INCLUDE_vTaskPrioritySet		1

// ������ȡ�������ȼ��� API ������
#define INCLUDE_uxTaskPriorityGet		1

// ����ɾ������� API ������
#define INCLUDE_vTaskDelete				1

// ������������Դ�� API ������
#define INCLUDE_vTaskCleanUpResources	0

// ������������� API ������
#define INCLUDE_vTaskSuspend			1

// ��������ʱ���ӳٵ�������� API ������
#define INCLUDE_vTaskDelayUntil			1

// �������ڹ̶�ʱ�����ӳٵ�������� API ������
#define INCLUDE_vTaskDelay				1

/* ���¶������������ж����ȼ��� */

// Cortex-M3 NVIC �е��ں��ж����ȼ���ֵ��Χ�� 255����ͣ��� 0����ߣ���
#define configKERNEL_INTERRUPT_PRIORITY 		255

// ���ϵͳ�����ж����ȼ�����������Ϊ�㣡����μ� http://www.freertos.org/RTOS-Cortex-M3-M4.html
// �˴�����Ϊ 191���൱��ʮ�����Ƶ� 0xB0 �������ȼ� 11��
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	191


/* ���¶������� ST �⣬���� 16 �����ȼ����𣬷�Χ�� 0 �� 15��
   ������� configKERNEL_INTERRUPT_PRIORITY ������ƥ�䡣
   �����15 ��Ӧ�� NVIC �е����ֵ 255��*/

#define configLIBRARY_KERNEL_INTERRUPT_PRIORITY	15

// ���崦�����쳣�������ı�����
#define xPortPendSVHandler PendSV_Handler
#define vPortSVCHandler SVC_Handler
#define xPortSysTickHandler SysTick_Handler

#endif /* FREERTOS_CONFIG_H */
