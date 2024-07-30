//
//  PLLocationSharingLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 23.05.2024.
//

#import "PLLog.h"

typedef enum PLLocationSharingLogActionType : NSUInteger {
    PLLocationSharingLogActionTypeStart,
    PLLocationSharingLogActionTypeEnd,
} PLLocationSharingLogActionType;

@interface PLLocationSharingLog : PLLog

- (instancetype)initWithAction:(PLLocationSharingLogActionType)actionType userLocation:(NSArray<NSNumber*>*)userLocation followedLocation:(NSArray<NSNumber*>*)followedLocation;

@property(assign, nonatomic) PLLocationSharingLogActionType actionType;

@property(strong, nonatomic) NSArray<NSNumber *> *userLocation;

@property(strong, nonatomic) NSArray<NSNumber *> *followedLocation;

@end
