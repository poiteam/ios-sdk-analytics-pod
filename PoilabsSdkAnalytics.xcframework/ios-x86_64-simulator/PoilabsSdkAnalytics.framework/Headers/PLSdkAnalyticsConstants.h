//
//  PLSdkAnalyticsConstants.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//

#import <Foundation/Foundation.h>

@interface PLSdkAnalyticsConstants : NSObject

+ (instancetype)sharedInstance;

- (NSString *)setAuthorizationHeaderFieldWithUsername;

@property(strong, nonatomic) NSString *baseUrl;

@property(strong, nonatomic) NSString *sdkCode;

@property(strong, nonatomic) NSString *applicationId;

@property(strong, nonatomic) NSString *applicationSecret;

@property(strong, nonatomic) NSString *uniqueIdentifier;

@property(strong, nonatomic) NSString *placeId;

@property(strong, nonatomic) NSString *sdkVersion;

@property(strong, nonatomic) NSString *language;

@property(strong, nonatomic) NSString *sessionId;

-(NSMutableDictionary *)getClientData;

@end
