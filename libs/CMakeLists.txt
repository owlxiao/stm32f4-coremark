add_subdirectory(CoreMark)
add_subdirectory(Apps)
add_subdirectory(Support)
add_subdirectory(Bsp)

# TODO: FIXME: Automatically add source files
# Append CoreMark's RELATIVE_EXTRA_SOURCES to TOTAL_EXTRA_SOURCES
set(TOTAL_EXTRA_SOURCES ${TOTAL_EXTRA_SOURCES} ${RELATIVE_EXTRA_SOURCES} PARENT_SCOPE)