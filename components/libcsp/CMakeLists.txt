set(SOURCE_FILES
        libcsp/src/csp_bridge.c
        libcsp/src/csp_buffer.c
        libcsp/src/csp_conn.c
        libcsp/src/csp_crc32.c
        libcsp/src/csp_debug.c
        libcsp/src/csp_dedup.c
        libcsp/src/csp_hex_dump.c
        libcsp/src/csp_id.c
        libcsp/src/csp_iflist.c
        libcsp/src/csp_init.c
        libcsp/src/csp_io.c
        libcsp/src/csp_port.c
        libcsp/src/csp_promisc.c
        libcsp/src/csp_qfifo.c
        libcsp/src/csp_route.c
        libcsp/src/csp_rtable_cidr.c
        libcsp/src/csp_service_handler.c
        libcsp/src/csp_services.c
        libcsp/src/csp_rdp.c
        libcsp/src/csp_rdp_queue.c
        libcsp/src/csp_sfp.c
        libcsp/src/arch/freertos/csp_clock.c
        libcsp/src/arch/freertos/csp_system.c
        libcsp/src/arch/freertos/csp_queue.c
        libcsp/src/arch/freertos/csp_semaphore.c
        libcsp/src/arch/freertos/csp_time.c
        libcsp/src/interfaces/csp_if_lo.c
        libcsp/src/interfaces/csp_if_kiss.c
        libcsp/src/interfaces/csp_if_i2c.c
        libcsp/src/interfaces/csp_if_tun.c
        )

idf_component_register(SRC ${SOURCE_FILES} SRCS_DIRS "libcsp/src" INCLUDE_DIRS "libcsp/include" REQUIRES freertos)

add_subdirectory(libcsp)
target_link_libraries(${COMPONENT_LIB} INTERFACE libcsp)

#target_compile_options(${COMPONENT_LIB} INTERFACE "-w")