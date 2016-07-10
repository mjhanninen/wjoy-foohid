//
//  WiimoteEventDispatcher+Button.h
//  Wiimote
//
//  Created by alxn1 on 30.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "WiimoteDelegate.h"
#import "WiimoteEventDispatcher.h"

@interface WiimoteEventDispatcher (Button)

- (void)postButtonPressedNotification:(WiimoteButtonType)button;
- (void)postButtonReleasedNotification:(WiimoteButtonType)button;

@end
