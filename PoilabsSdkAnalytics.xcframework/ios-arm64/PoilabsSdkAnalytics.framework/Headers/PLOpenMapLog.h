//
//  OpenMapLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 22.05.2024.
//

#import "PLLog.h"

@interface PLOpenMapLog : PLLog

-(instancetype)initWithLocation:(NSArray<NSNumber*>*)userLocation;

@property (strong, nonatomic) NSArray<NSNumber *> *userLocation;

@end
