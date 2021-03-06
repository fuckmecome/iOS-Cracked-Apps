//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QYCinemaSessionData, QYMInnerView;

@protocol QYMInnerViewDelegate <NSObject>
- (void)innerView:(QYMInnerView *)arg1 clickedAtIndex:(long long)arg2 withData:(id)arg3;

@optional
- (void)playPlayerWithList:(id)arg1;
- (void)playUpcomingMovie:(id)arg1;
- (void)toOtherViewFromRecommend:(long long)arg1;
- (void)toCinemaDetailVCWithData:(id)arg1;
- (void)showHomeAdInfo:(id)arg1;
- (void)showRecentOrderInfo:(id)arg1;
- (void)toMovieDetailWithData:(id)arg1 gossipId:(NSString *)arg2;
- (void)toMovieDetailWithData:(id)arg1;
- (void)toBuyViewController:(NSString *)arg1 withMovieName:(NSString *)arg2;
- (void)movieCancelWantToSee:(QYCinemaSessionData *)arg1;
- (void)movieWantToSee:(QYCinemaSessionData *)arg1;
- (void)refreshRecommendView;
- (void)refreshUpcomingMovieList;
- (void)refreshHotMovieList;
- (void)getMoreCinemaList;
- (void)refreshCinemaList;
- (void)toStoreMovieViewController;
- (void)toCouponListViewController;
- (void)toActivityDetailViewController:(id)arg1;
- (void)updateMyTicketsTabState:(_Bool)arg1;
- (void)toClientService:(NSString *)arg1;
- (void)toMyMovieTicketsIssuesPage;
- (void)toModifyMyTelphonePage;
- (void)toMyMovieTicketsOrderPage:(NSString *)arg1;
- (void)toAccountView;
@end

