//
//  PLSearchLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 30.11.2022.
//

#import "PLLog.h"


@interface PLSearchLog : PLLog

- (instancetype)initSearchKeyword:(NSString *) keyword clientSdkVersion: (NSString *)clientSdkVersion;

@property(assign, nonatomic) NSString *keyword;

@end
