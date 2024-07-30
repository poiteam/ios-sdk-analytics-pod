//
//  PLRouteLog.h
//  PoilabsSdkAnalytics
//
//  Created by Emre Kuru on 29.11.2022.
//

#import "PLLog.h"

//“storeId”, “facility”, “click”, “showAllResults”, “showOnMap”, “sharedLocation”, “scroll”, “search”

typedef enum PLRouteLogType: NSUInteger {
    storeId,
    facility,
    click,
    showAllResults,
    showOnMap,
    sharedLocation,
    scroll,
    search,
    reroute,
    removeRoute,
    multiPointRoute,
    parking
} PLRouteLogType;

@interface PLRouteLog : PLLog

- (instancetype)initWithType:(PLRouteLogType)type startLocation:(NSArray<NSNumber *> *)startLocation startPoint:(NSString *)startPoint endPoint:(NSString *)endPoint pointIdsOnRoute:(NSArray<NSString *> *)routePoints estimatedDuration:(int)duration routeLength:(int)length;

@property(assign, nonatomic) PLRouteLogType type;

@property(strong, nonatomic) NSArray<NSNumber *> *startLocation;

@property(assign, nonatomic) NSString *startPoint;

@property(assign, nonatomic) NSString *endPoint;

@property(strong, nonatomic) NSArray<NSString *> *routePoints;

@property(assign, nonatomic) NSNumber *routeLength;

@property(assign, nonatomic) NSNumber *estimatedDurationOfRoute;

@end
