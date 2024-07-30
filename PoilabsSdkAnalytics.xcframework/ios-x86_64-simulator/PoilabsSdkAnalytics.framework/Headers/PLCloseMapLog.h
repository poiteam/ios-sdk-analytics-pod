//
//  PLCloseMapLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 14.08.2023.
//

#ifndef PLCloseMapLog_h
#define PLCloseMapLog_h
#import "PLLog.h"

@interface PLCloseMapLog : PLLog

- (instancetype)initMapCloseLogWithMapState:(NSString *) state userLocation:(NSArray<NSNumber*>*)userLocation;

@property (strong, nonatomic) NSString *mapState;
@property(strong, nonatomic) NSArray<NSNumber *> *userLocation;

@end

#endif /* PLCloseMapLog_h */
