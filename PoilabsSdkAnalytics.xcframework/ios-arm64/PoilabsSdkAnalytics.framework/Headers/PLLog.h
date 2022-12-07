//
//  PLLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//
#import <Foundation/Foundation.h>
#import "PLSdkAnalyticsConstants.h"
#import "UIKit/UIKit.h"

@interface PLLog : NSMutableURLRequest

@property(assign, nonatomic) NSString *path;
@property(assign, nonatomic) NSDictionary *eventData;
@property(strong, nonatomic) NSMutableDictionary *clientData;

@end
