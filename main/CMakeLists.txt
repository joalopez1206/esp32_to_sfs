idf_component_register(SRCS
                    csp_server_client.c
                    csp_server_client_freertos.c
                    INCLUDE_DIRS
                        ""
                    REQUIRES
                        "libcsp spi_flash"
        )
target_compile_options(${COMPONENT_LIB} PUBLIC "-w")
