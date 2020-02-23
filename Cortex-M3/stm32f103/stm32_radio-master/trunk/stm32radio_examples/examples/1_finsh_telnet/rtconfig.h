/* RT-Thread config file */
#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

/* RT_NAME_MAX*/
#define RT_NAME_MAX	8

/* RT_ALIGN_SIZE*/
#define RT_ALIGN_SIZE	4

/* PRIORITY_MAX */
#define RT_THREAD_PRIORITY_MAX	32

/* Tick per Second */
#define RT_TICK_PER_SECOND	100

/* SECTION: RT_DEBUG */
/* Thread Debug */
#define RT_DEBUG
#define RT_THREAD_DEBUG

#define RT_USING_OVERFLOW_CHECK

/* Using Hook */
#define RT_USING_HOOK

/* SECTION: IPC */
/* Using Semaphore*/
#define RT_USING_SEMAPHORE

/* Using Mutex */
#define RT_USING_MUTEX

/* Using Event */
#define RT_USING_EVENT

/* Using MailBox */
#define RT_USING_MAILBOX

/* Using Message Queue */
#define RT_USING_MESSAGEQUEUE

/* SECTION: Memory Management */
/* Using Memory Pool Management*/
#define RT_USING_MEMPOOL

/* Using Dynamic Heap Management */
#define RT_USING_HEAP

/* Using Small MM */
#define RT_USING_SMALL_MEM

/* SECTION: Device System */
/* Using Device System */
#define RT_USING_DEVICE
#define RT_USING_UART1

/* SECTION: Console options */
#define RT_USING_CONSOLE
/* the buffer size of console*/
#define RT_CONSOLEBUF_SIZE	128

/* SECTION: finsh, a C-Express shell */
#define RT_USING_FINSH
/* Using symbol table */
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION

/* SECTION: lwip, a lighwight TCP/IP protocol stack */
/* Using lighweight TCP/IP protocol stack */
#define RT_USING_LWIP

/* Trace LwIP protocol */
/* #define RT_LWIP_DEBUG */

/* LwIP uses RT-Thread Memory Management */
#define RT_LWIP_USING_RT_MEM

/* Enable ICMP protocol */
#define RT_LWIP_ICMP

/* Enable UDP protocol */
#define RT_LWIP_UDP

/* Enable TCP protocol */
#define RT_LWIP_TCP

/* the number of simulatenously active TCP connections */
#define RT_LWIP_TCP_PCB_NUM	3

/* TCP sender buffer space */
#define RT_LWIP_TCP_SND_BUF	2048

/* TCP Window Size */
#define RT_LWIP_TCP_WND	(1024 * 20)

/* Using DHCP */
#define RT_LWIP_DHCP

/* Using DNS */
#define RT_LWIP_DNS

/* tcp thread options */
#define RT_LWIP_TCPTHREAD_PRIORITY		10
#define RT_LWIP_TCPTHREAD_MBOX_SIZE		4
#define RT_LWIP_TCPTHREAD_STACKSIZE		1024

/* ethernet if thread options */
#define RT_LWIP_ETHTHREAD_PRIORITY		12
#define RT_LWIP_ETHTHREAD_MBOX_SIZE		4
#define RT_LWIP_ETHTHREAD_STACKSIZE		512

#endif
