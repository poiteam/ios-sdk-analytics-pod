//
//  PLSdkAnalyticsLogger.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//

#import <Foundation/Foundation.h>
#import "PLRouteLog.h"

@interface PLSdkAnalyticsLogger : NSObject

+ (instancetype)sharedInstance;

-(void)setAppId:(NSString *)appId andSecret: (NSString *)secret uniqueIdentifier:(NSString *)uniqueIdentifier clientCode: (NSString *)clientCode;

-(void)makeRequest: (NSMutableURLRequest *)request;

- (void)log: (PLLog *)log;

@end
