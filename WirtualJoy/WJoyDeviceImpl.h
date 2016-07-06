//
//  WJoyDeviceImpl.h
//  driver
//
//  Created by alxn1 on 17.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    WJoyDeviceMethodSelectorEnable                      = 0,
    WJoyDeviceMethodSelectorDisable                     = 1,
    WJoyDeviceMethodSelectorUpdateState                 = 2,
    WJoyDeviceMethodSelectorSetDeviceProductString      = 3,
    WJoyDeviceMethodSelectorSetDeviceSerialNumberString = 4,
    WJoyDeviceMethodSelectorSetDeviceVendorAndProductID = 5
} WJoyDeviceMethodSelector;

typedef enum
{
    FOOHID_CREATE   = 0,
    FOOHID_DESTROY  = 1,
    FOOHID_SEND     = 2,
    FOOHID_LIST     = 3
} FOOHIDMethodSelector;

@interface WJoyDeviceImpl : NSObject
{
    @private
    io_connect_t m_Connection;
}

+ (BOOL)prepare;

@end

@interface WJoyDeviceImpl (Methods)

- (BOOL)setDeviceProductString:(NSString*)string;
- (BOOL)setDeviceSerialNumberString:(NSString*)string;
- (BOOL)setDeviceVendorID:(uint32_t)vendorID productID:(uint32_t)productID;

- (BOOL)enable:(NSData*)HIDDescriptor;
- (BOOL)disable;

- (BOOL)updateState:(NSData*)HIDState;

@end
