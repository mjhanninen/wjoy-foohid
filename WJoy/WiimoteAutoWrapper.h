//
//  WiimoteAutoWrapper.h
//  WJoy
//
//  Created by alxn1 on 27.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import <VHID/VHIDDevice.h>
#import <Wiimote/Wiimote.h>
#import <WirtualJoy/WJoyDevice.h>

@interface WiimoteAutoWrapper : NSObject <VHIDDeviceDelegate>

{
  @private
    Wiimote *m_Device;
    VHIDDevice *m_HIDState;
    NSPoint m_ShiftsState;
    WJoyDevice *m_WJoy;
    // For calibration of the analog sticks
    NSPoint minL, maxL, minR, maxR;
}

// 0 = infinite, default = infinite, if currently connected too many, disconnect last connected
+ (NSUInteger)maxConnectedDevices;
+ (void)setMaxConnectedDevices:(NSUInteger)count;

+ (void)start;

@end
