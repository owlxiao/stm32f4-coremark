set(EXTRA_SOURCES led.c)

# Convert the variable to relative paths
foreach(source ${EXTRA_SOURCES})
    list(APPEND RELATIVE_EXTRA_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${source}")
endforeach()

set(TOTAL_EXTRA_SOURCES ${TOTAL_EXTRA_SOURCES} ${RELATIVE_EXTRA_SOURCES} PARENT_SCOPE)