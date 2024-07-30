//
//  PLSearchLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 30.11.2022.
//

#import "PLLog.h"


@interface PLSearchLog : PLLog

- (instancetype)initSearchKeyword:(NSString *) keyword userLocation:(NSArray<NSNumber*>*)userLocation;

@property(strong, nonatomic) NSString *keyword;
@property(strong, nonatomic) NSArray<NSNumber *> *userLocation;

@end
