> [!WARNING]  
> This project is currently under active development and is considered experimental. 

# Basic CMake project for STM32 and CubeMX

This repository offers a modern and versatile CMake-based project 
template designed specifically for `STM32` microcontrollers.By integrating seamlessly with `STM32CubeMX`, this template empowers you to efficiently configure your hardware and kickstart your firmware development using the power of `CMake`.

## Features 
- __CMake-Driven Development__: Embrace the power of CMake as your build system, enabling easy cross-compilation and versatile project configuration.
  
- __Flexible Configuration__: Customize your project settings by fine-tuning the CMakeLists.txt file, specifying the MCU type, source files, and include directories.
  
- __Rapid Deployment__: Building and deploying your firmware with minimal effort.

## Requirements

Before you begin, ensure you have the following requirements:
- Embedded ARM Toolchain:
  - A commonly used toolchain is `arm-gcc`, which is available in the toolchain directory of this template project.
  
- Automated Build Tools:
    - You'll need automated build tools to streamline the project compilation process
        - `Ninja`
        - `Make`
        - ...
- CMake
- Downloading Tools: 
    - You will require flashing tools for programming the STM32 microcontroller. Common options are:
      - OpenOCD
      - ...

## Usage
TODO

## Acknowledgments
We would like to express our gratitude to the following resources and projects:

- [RigoLigoRLC/TarsGo_PEPB](https://github.com/RigoLigoRLC/TarsGo_PEPB/tree/master)
- [qiayuanliao/Gist](https://gist.github.com/qiayuanliao/9cea0e3e588d5d12735202fc1c1cdd6d)
- [HNUYueLuRM/basic_framework](https://gitee.com/hnuyuelurm/basic_framework)