//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QYPPFeedDetailAdvertisementView, QYPPFeedDetailBaseViewCtrlViewBuilder, QYPPFeedDetailCircleInfoItemView, QYPPFeedDetailRelatedCirclesItemView, QYPPFeedDetailVideoCollectionItemView, QYPPFeedRelatedCirclesCellViewData, QYPPStarFeedRewardData, QYPPStarFeedTag;

@protocol QYPPFeedDetailViewBuilderDelegate <NSObject>

@optional
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickJoinCircleOfRelatedCiclesViewWithIndex:(int)arg2 succeed:(_Bool)arg3 cellViewData:(QYPPFeedRelatedCirclesCellViewData *)arg4;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickEnterCicleOfRelatedCiclesViewWithIndex:(int)arg2 isClickEnterButton:(_Bool)arg3 cellViewData:(QYPPFeedRelatedCirclesCellViewData *)arg4;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickLoginCallbackWithRelatedCiclesView:(QYPPFeedDetailRelatedCirclesItemView *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickVideosPlayVideoWithFeedId:(NSString *)arg2 wallId:(NSString *)arg3 cellPosition:(long long)arg4 withVideoListItemType:(long long)arg5;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickVideosAllVideo:(QYPPFeedDetailVideoCollectionItemView *)arg2 withVideoListItemType:(long long)arg3;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickVideosCircleWithCircleId:(NSString *)arg2 circleType:(NSString *)arg3 cellPosition:(long long)arg4 withVideoListItemType:(long long)arg5;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickCircleInfoItemView:(QYPPFeedDetailCircleInfoItemView *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickShareIconWithName:(NSString *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickRewardAvatarWithData:(QYPPStarFeedRewardData *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickRewardNumberLabelWithData:(QYPPStarFeedRewardData *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickRewardButtonWithData:(QYPPStarFeedRewardData *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickedAdDownloadButtonInAdvertisementView:(QYPPFeedDetailAdvertisementView *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickedFeedTag:(QYPPStarFeedTag *)arg2;
- (void)viewBuilder:(QYPPFeedDetailBaseViewCtrlViewBuilder *)arg1 clickedPKVoteWithVoteId:(NSString *)arg2 vcId:(NSString *)arg3 selectedOptionIndex:(long long)arg4;
@end

