//
//  PLButtonLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

@interface PLButtonLog : PLLog

typedef enum PLButtonLogType
    {
        USER_FOLLOW_BUTTON,
        ACCESSIBILITY_BUTTON,
        COMPASS_BUTTON
    } PLButtonLogType;

- (instancetype)initButtonLogWithTye:(PLButtonLogType) type
                               state:(NSString *) state
                         routeState:(NSString *) routeState
                          userLocation:(NSArray<NSNumber*>*)userLocation;

@property (strong, nonatomic) NSString *buttonState;
@property (strong, nonatomic) NSString *routeState;
@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;
@property (assign, nonatomic) PLButtonLogType type;

@end
