//
//  PLCarButtonLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

typedef enum PLCarButtonActionType: NSUInteger {
    saveManually,
    saveByLocation,
    goToMyCar,
    showMyCar,
    closeWithoutCar,
    closeWithCar
    
} PLCarButtonActionType;

@interface PLCarButtonLog : PLLog

- (instancetype)initWithType:(PLCarButtonActionType)type userLocation:(NSArray<NSNumber *> *)userLocation;

@property(assign, nonatomic) PLCarButtonActionType actionType;
@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;

@end
