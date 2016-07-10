//
//  OwnUserNotificationCenter.h
//  UserNotification
//
//  Created by alxn1 on 18.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "NotificationSystem.h"
#import "UserNotificationCenterProtected.h"

@interface OwnUserNotificationCenter
    : UserNotificationCenter <NotificationSystemDelegate>
{
}

@end
