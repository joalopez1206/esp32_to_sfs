#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <csp/csp.h>
#include <csp/csp_debug.h>

void server(void);
void client(void);

static int csp_task_create(void (*routine)(void *)) {

	TaskHandle_t xHandle = NULL; 

	int xReturned = xTaskCreate(
                    routine,         /* Function that implements the task. */
                    "xd",            /* Text name for the task. */
                    1024,            /* Stack size in words, not bytes. */
                    ( void * ) 1,    /* Parameter passed into the task. */
                    tskIDLE_PRIORITY,/* Priority at which the task is created. */
                    &xHandle );      /* Used to pass out the created task's handle. */

	/* no need to join with thread to free its resources */

	return CSP_ERR_NONE;
}

static void * task_router(void * param) {

	/* Here there be routing */
	while (1) {
		csp_route_work();
	}

	return NULL;
}

static void * task_server(void * param) {
	server();
	return NULL;
}

static void * task_client(void * param) {
	client();
	return NULL;
}

int router_start(void) {
	return csp_task_create(task_router);
}

int server_start(void) {
	return csp_task_create(task_server);
}

int client_start(void) {
	return csp_task_create(task_client);
}
