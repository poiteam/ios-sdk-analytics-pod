//
//  PLShowOnMapLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

@interface PLShowOnMapLog : PLLog

- (instancetype)initShowOnMapLogWithPointId:(NSString *) pointId
                          userLocation:(NSArray<NSNumber*>*)userLocation;

@property (strong, nonatomic) NSString *pointId;
@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;

@end
