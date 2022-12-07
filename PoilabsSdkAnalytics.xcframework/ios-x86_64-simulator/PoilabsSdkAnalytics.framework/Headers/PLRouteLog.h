//
//  PLRouteLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//

#import "PLLog.h"


@interface PLRouteLog : PLLog

- (instancetype)init:(NSArray<NSNumber *> *)startLocation startPoint:(NSString *)startPoint endPoint:(NSString *)endPoint clientSdkVersion: (NSString *)clientSdkVersion;

@property(assign, nonatomic) NSArray<NSNumber *> *startLocation;

@property(assign, nonatomic) NSString *startPoint;

@property(assign, nonatomic) NSString *endPoint;

@end
