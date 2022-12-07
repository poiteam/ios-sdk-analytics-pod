//
//  PLArrivedLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 30.11.2022.
//


#import "PLLog.h"


@interface PLArrivedLog : PLLog

- (instancetype)init:(NSArray<NSNumber *> *)startLocation endLocation:(NSArray<NSNumber *> *)endLocation startPoint:(NSString *)startPoint endPoint:(NSString *)endPoint clientSdkVersion: (NSString *)clientSdkVersion;

@property(assign, nonatomic) NSArray<NSNumber *> *startLocation;

@property(assign, nonatomic) NSArray<NSNumber *> *endLocation;

@property(assign, nonatomic) NSString *startPoint;

@property(assign, nonatomic) NSString *endPoint;

@end
