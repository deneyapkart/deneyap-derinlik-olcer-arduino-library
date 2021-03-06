/*
***********************************************************************************
@file         Deneyap_DerinlikOlcer.h
@mainpage     Deneyap ToF Range Finder Sensor VL53L0X Arduino library header file
@version      v1.0.0
@date         June 23, 2022
@brief        This file contains all function prototypes and macros
              for Deneyap ToF Range Finder Sensor VL53L0X Arduino library
***********************************************************************************
*/

#ifndef _Deneyap_DerinlikOlcer_H
#define _Deneyap_DerinlikOlcer_H

#include <Arduino.h>
#include <Wire.h>

#define VL53L0X_REG_IDENTIFICATION_MODEL_ID 0x00c0
#define VL53L0X_REG_IDENTIFICATION_REVISION_ID 0x00c2
#define VL53L0X_REG_PRE_RANGE_CONFIG_VCSEL_PERIOD 0x0050
#define VL53L0X_REG_FINAL_RANGE_CONFIG_VCSEL_PERIOD 0x0070
#define VL53L0X_REG_SYSRANGE_START 0x0000
#define VL53L0X_REG_RESULT_INTERRUPT_STATUS 0x0013
#define VL53L0X_REG_RESULT_RANGE_STATUS 0x0014
#define VL53L0X_REG_I2C_SLAVE_DEVICE_ADDRESS 0x008a
#define VL53L0X_I2C_ADDR 0x0029
#define VL53L0X_REG_SYSTEM_RANGE_CONFIG 0x0009
#define VL53L0X_REG_VHV_CONFIG_PAD_SCL_SDA__EXTSUP_HV 0x0089
#define VL53L0X_REG_SYSRANGE_MODE_SINGLESHOT 0x0000
#define VL53L0X_REG_SYSRANGE_MODE_START_STOP 0x0001
#define VL53L0X_REG_SYSRANGE_MODE_BACKTOBACK 0x0002
#define VL53L0X_REG_SYSRANGE_MODE_TIMED 0x0004

#define VL53L0X_DEVICEMODE_SINGLE_RANGING ((uint8_t)0)
#define VL53L0X_DEVICEMODE_CONTINUOUS_RANGING ((uint8_t)1)
#define VL53L0X_DEVICEMODE_CONTINUOUS_TIMED_RANGING ((uint8_t)3)
#define VL53L0X_DEFAULT_MAX_LOOP 200

class TofRangeFinder {
public:
    bool begin(uint8_t address, TwoWire &wirePort = Wire);
    bool init();
    float ReadDistance();

private:
    uint8_t _address;
    uint16_t _distance;
    void write8(unsigned char Reg, unsigned char byte);
    uint8_t read8(unsigned char Reg);
    void readData(unsigned char Reg, unsigned char Num);

    unsigned char DevAddr;
    unsigned char Data[16];
    uint16_t distance;
};

#endif
