set(EXTRA_SOURCES
        Simple/core_portme.c
        core_util.c
        core_list_join.c
        core_matrix.c
        core_state.c
        core_main.c
        )

# Convert the variable to relative paths
foreach(source ${EXTRA_SOURCES})
    list(APPEND RELATIVE_EXTRA_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${source}")
endforeach()

set(TOTAL_EXTRA_SOURCES ${TOTAL_EXTRA_SOURCES} ${RELATIVE_EXTRA_SOURCES} PARENT_SCOPE)

add_library(coremark
        Simple/core_portme.c
        core_util.c
        core_list_join.c
        core_matrix.c
        core_state.c
        core_main.c
        )
