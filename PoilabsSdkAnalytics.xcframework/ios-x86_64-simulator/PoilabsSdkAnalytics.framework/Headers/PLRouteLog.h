//
//  PLRouteLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//

#import "PLLog.h"


@interface PLRouteLog : PLLog

- (instancetype)init:(NSArray<NSNumber *> *)startLocation startPoint:(NSString *)startPoint endPoint:(NSString *)endPoint pointIdsOnRoute:(NSArray<NSString *> *)routePoints estimatedDuration:(int)duration routeLength:(int)length clientSdkVersion: (NSString *)clientSdkVersion;

@property(strong, nonatomic) NSArray<NSNumber *> *startLocation;

@property(assign, nonatomic) NSString *startPoint;

@property(assign, nonatomic) NSString *endPoint;

@property(strong, nonatomic) NSArray<NSString *> *routePoints;

@property(assign, nonatomic) NSNumber *routeLength;

@property(assign, nonatomic) NSNumber *estimatedDurationOfRoute;

@end
