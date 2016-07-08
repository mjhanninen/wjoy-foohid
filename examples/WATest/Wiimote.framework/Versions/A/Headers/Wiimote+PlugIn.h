//
//  Wiimote+PlugIn.h
//  Wiimote
//
//  Created by alxn1 on 03.08.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import <Wiimote/Wiimote.h>
#import <Wiimote/WiimoteAccelerometer+PlugIn.h>
#import <Wiimote/WiimoteGenericExtension.h>
#import <Wiimote/WiimotePart.h>

@interface Wiimote (PlugIn)

+ (void)registerSupportedModelName:(NSString *)name;

- (void)deviceConfigurationChanged;

- (WiimotePart *)partWithClass:(Class)cls;

@end
