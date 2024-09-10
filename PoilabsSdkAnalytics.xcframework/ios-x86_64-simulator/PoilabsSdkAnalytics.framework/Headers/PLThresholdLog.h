//
//  PLThresholdLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 10.09.2024.
//

#ifndef PLThresholdLog_h
#define PLThresholdLog_h

#import "PLLog.h"

@interface PLThresholdLog : PLLog

- (instancetype)initThresholdlog:(int) threshold;

@property(assign, nonatomic) int threshold;

@end

#endif /* PLThresholdLog_h */
