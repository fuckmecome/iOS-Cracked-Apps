//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiWalkRouteParam, NSData, NSString, NSValue, PassengerOrderReq;

@protocol SctxRoutePassengerProxy <NSObject>
- (_Bool)isAutoRefreshSCTXBestView;
- (void)setIsAutoRefreshSCTXBestView:(_Bool)arg1;
- (struct CLLocationCoordinate2D)orderPickupPointCoor;
- (void)setIsStopRefresh:(_Bool)arg1;
- (void)setOrderState:(int)arg1;
- (void)setRefreshCycle:(float)arg1;
- (void)recoverSctxRouteRect;
- (_Bool)setOrderRouteResponseV2:(NSData *)arg1;
- (void)setOrderRouteResponse:(NSData *)arg1;
- (NSData *)getOrderRouteRequest;
- (void)hide;
- (void)show;
- (void)removeWalkNavigation;
- (void)showWalkNavigationWithParam:(DiDiWalkRouteParam *)arg1 finish:(void (^)(DiDiWalkRouteResult *, NSError *))arg2;
- (void)showWalkNavigationWithUserCoor:(struct CLLocationCoordinate2D)arg1 finish:(void (^)(NSNumber *, NSError *))arg2;
- (void)setEdgePaddingFor2DNorthOverView:(struct UIEdgeInsets)arg1;
- (int)getLeftDistance;
- (NSString *)getLeftEtaString;
- (int)getLeftEta;
- (_Bool)getIsShown;
- (NSValue *)getWalkRouteRect;
- (NSValue *)getRouteRect;
- (void)setIsShowRotueWithAnimation:(_Bool)arg1;
- (void)setEndDistance:(int)arg1;
- (void)setStepCycle:(float)arg1;
- (void)setPassengerOrderReq:(PassengerOrderReq *)arg1;
- (void)setDriverAnnotation:(id)arg1;
- (float)sctxDriverAnnotationDirection;
- (void)setDelegate:(id <SctxRoutePassengerDelegate>)arg1;
- (id)initWithMapview:(id)arg1 PassengerOrderReq:(PassengerOrderReq *)arg2;
@end

