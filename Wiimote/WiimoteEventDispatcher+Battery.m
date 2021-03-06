//
//  WiimoteEventDispatcher+Battery.m
//  Wiimote
//
//  Created by alxn1 on 30.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "WiimoteDelegate.h"
#import "WiimoteEventDispatcher+Battery.h"

@implementation WiimoteEventDispatcher (Battery)

- (void)postBatteryLevelUpdateNotification:(CGFloat)batteryLevel
                                     isLow:(BOOL)isLow
{
    [[self delegate] wiimote:[self owner]
         batteryLevelUpdated:batteryLevel
                       isLow:isLow];

    NSDictionary *params = [NSDictionary
        dictionaryWithObjectsAndKeys:[NSNumber numberWithDouble:batteryLevel],
                                     WiimoteBatteryLevelKey,
                                     [NSNumber numberWithBool:isLow],
                                     WiimoteIsBatteryLevelLowKey, nil];

    [self postNotification:WiimoteBatteryLevelUpdatedNotification
                    params:params];
}

@end
