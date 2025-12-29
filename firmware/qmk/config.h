#pragma once

/* I2C1 on XIAO RP2040 (D4 / D5) */
#define I2C_DRIVER I2CD1      // I2CD2 maps to I2C1 on RP2040
#define I2C1_SDA_PIN GP6      // SDA on XIAO RP2040
#define I2C1_SCL_PIN GP7      // SCL on XIAO RP2040

#define I2C_DEBUG
