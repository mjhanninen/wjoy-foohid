//
//  WiimoteUDraw.h
//  Wiimote
//
//  Created by Michael Kessler on 10/4/14.
//

#import "WiimoteEventDispatcher+UDraw.h"
#import "WiimoteGenericExtension.h"

@interface WiimoteUDraw : WiimoteGenericExtension <WiimoteUDrawProtocol>
{
  @private
    BOOL m_IsPenPressed;
    NSPoint m_PenPosition;
    CGFloat m_PenPressure;
    BOOL m_IsPenButtonPressed;
}

@end