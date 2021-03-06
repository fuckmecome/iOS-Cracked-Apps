//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PromotionCenterDelegate.h"

@class NSString;

@interface GO2OCDPManager : NSObject <PromotionCenterDelegate>
{
    id <GO2OCDPManagerDelegate> _delegate;
}

+ (id)extInfoWithSpaceCode:(id)arg1 cityCode:(id)arg2 status:(_Bool *)arg3;
+ (id)extInfoWithSpaceCode:(id)arg1 status:(_Bool *)arg2;
@property(nonatomic) __weak id <GO2OCDPManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionShouldRefresh:(_Bool)arg1;
- (void)unregisterHomePagePromotion;
- (void)registerHomePagePromotion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

