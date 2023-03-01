//
//  PLThresholdLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 23.02.2023.
//

#import "PLLog.h"

@interface PLThresholdLog : PLLog

- (instancetype)initThresholdlog:(int) threshold clientSdkVersion: (NSString *)clientSdkVersion;

@property(assign, nonatomic) int threshold;

@end
