# Enable hardware FPU
message(STATUS "cortex-m4: Enable hardware fpu")

add_compile_definitions($<$<COMPILE_LANGUAGE:C,CXX>:ARM_MATH_MATRIX_CHECK>)
add_compile_definitions($<$<COMPILE_LANGUAGE:C,CXX>:ARM_MATH_ROUNDING>)
add_compile_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)
add_link_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)