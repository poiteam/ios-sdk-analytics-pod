//
//  PLShowAllResultsLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

@interface PLShowAllResultsLog : PLLog

-(instancetype)initWithKeyword:(NSString *)keyword pointIds:(NSArray<NSString *> *)pointIds userLocation:(NSArray<NSNumber*>*)userLocation;


@property (strong, nonatomic) NSString *keyword;
@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;
@property (strong, nonatomic) NSArray<NSString *> *pointIds;

@end
