//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QYMMoviePersonalRecommendData, QYMRecentOrderData, UIView;

@protocol QYMHomePagePopViewManagerDelegate <NSObject>
- (void)showtTicketPathMsg:(NSString *)arg1;
- (void)popUpWindowToNative:(int)arg1 withData:(NSString *)arg2;
- (void)popUpWindowToActivity:(NSString *)arg1;
- (void)personalRecommendToMovieDetail:(QYMMoviePersonalRecommendData *)arg1;
- (void)QYMHomeAdDidClick:(NSString *)arg1;
- (void)hideTipView;
- (void)toMovieOrderDetailViewController:(QYMRecentOrderData *)arg1;
- (void)showHomeAdInfo:(id)arg1;
- (_Bool)showHomePagePopView:(UIView *)arg1;
@end

