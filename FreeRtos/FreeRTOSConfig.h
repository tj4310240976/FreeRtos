#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * 这些定义应根据您的特定硬件和应用需求进行调整。
 * 这些参数在 FreeRTOS.org 网站上的 FreeRTOS API 文档的“配置”部分中有描述。
 * 查看 http://www.freertos.org/a00110.html
 *----------------------------------------------------------*/

// 启用抢占式调度模式。
#define configUSE_PREEMPTION		1

// 禁用空闲任务钩子函数，通常用于统计或调试目的。
#define configUSE_IDLE_HOOK			0

// 禁用滴答钩子函数，通常用于统计或调试目的。
#define configUSE_TICK_HOOK			0

// 设置 CPU 时钟频率为 72MHz。
#define configCPU_CLOCK_HZ			( ( unsigned long ) 72000000 )

// 设置滴答率（系统时钟）为 1000Hz，意味着每秒发生 1000 次滴答。
#define configTICK_RATE_HZ			( ( TickType_t ) 1000 )

// 设置最大任务优先级数量为 5。
#define configMAX_PRIORITIES		( 5 )

// 设置任务的最小堆栈大小为 128 字。
#define configMINIMAL_STACK_SIZE	( ( unsigned short ) 128 )

// 设置堆的总大小为 17K 字节。
#define configTOTAL_HEAP_SIZE		( ( size_t ) ( 17 * 1024 ) )

// 设置任务名称的最大长度为 16 个字符。
#define configMAX_TASK_NAME_LEN		( 16 )

// 禁用跟踪设施，通常用于调试。
#define configUSE_TRACE_FACILITY	0

// 禁用 16 位滴答计数，使用默认的 32 位。
#define configUSE_16_BIT_TICKS		0

// 启用空闲任务的自动调度策略，即当有更高优先级的任务可运行时，空闲任务会主动放弃 CPU 控制权。
#define configIDLE_SHOULD_YIELD		1


/* 以下定义用于控制 API 函数的包含或排除。设置为 1 表示包含该函数，设置为 0 表示排除。 */

// 包含设置任务优先级的 API 函数。
#define INCLUDE_vTaskPrioritySet		1

// 包含获取任务优先级的 API 函数。
#define INCLUDE_uxTaskPriorityGet		1

// 包含删除任务的 API 函数。
#define INCLUDE_vTaskDelete				1

// 不包含清理资源的 API 函数。
#define INCLUDE_vTaskCleanUpResources	0

// 包含挂起任务的 API 函数。
#define INCLUDE_vTaskSuspend			1

// 包含基于时间延迟的任务调度 API 函数。
#define INCLUDE_vTaskDelayUntil			1

// 包含基于固定时间间隔延迟的任务调度 API 函数。
#define INCLUDE_vTaskDelay				1

/* 以下定义用于配置中断优先级。 */

// Cortex-M3 NVIC 中的内核中断优先级。值范围从 255（最低）到 0（最高）。
#define configKERNEL_INTERRUPT_PRIORITY 		255

// 最大系统调用中断优先级，不能设置为零！详情参见 http://www.freertos.org/RTOS-Cortex-M3-M4.html
// 此处设置为 191，相当于十六进制的 0xB0 或者优先级 11。
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	191


/* 以下定义用于 ST 库，允许 16 个优先级级别，范围从 0 到 15。
   这必须与 configKERNEL_INTERRUPT_PRIORITY 设置相匹配。
   在这里，15 对应于 NVIC 中的最低值 255。*/

#define configLIBRARY_KERNEL_INTERRUPT_PRIORITY	15

// 定义处理器异常处理函数的别名。
#define xPortPendSVHandler PendSV_Handler
#define vPortSVCHandler SVC_Handler
#define xPortSysTickHandler SysTick_Handler

#endif /* FREERTOS_CONFIG_H */
