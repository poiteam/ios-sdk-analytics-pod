//
//  PLMapClickLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

typedef enum PLMapClickType : NSUInteger {
    POLYGON,
    POINT,
} PLMapClickType;

@interface PLMapClickLog : PLLog

-(instancetype)initWithType:(PLMapClickType)clickType pointId:(NSString *)pointId userLocation:(NSArray<NSNumber*>*)userLocation;

@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;
@property (assign, nonatomic) PLMapClickType clickType;
@property (strong, nonatomic) NSString *pointId;

@end
