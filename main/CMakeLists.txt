idf_component_register(SRCS "hello_world_main.c"
                    INCLUDE_DIRS "" REQUIRES "libcsp spi_flash")
target_compile_options(${COMPONENT_LIB} PUBLIC "-w")
