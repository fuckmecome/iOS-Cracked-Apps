//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARFoodScrollView, ARHotScoreView, ARShopInfo, ARShopStreetController, O2OMerchantDetailModel, UIButton, UIImageView, UILabel;

@interface ARShopBoardView : UIView
{
    _Bool _isMultiPicture;
    _Bool _isBoardViewShowing;
    CDUnknownBlockType _goDetailBlock;
    ARShopStreetController *_arShopVC;
    UIView *_line2FloatView;
    UIView *_infoView;
    ARFoodScrollView *_foodImageView;
    UILabel *_avgPriceLabel;
    UILabel *_shortCommentLabel;
    ARHotScoreView *_hotScoreView;
    UIButton *_detailGoButton;
    ARShopInfo *_shopInfo;
    O2OMerchantDetailModel *_detailModel;
    UIImageView *_starViewGrey;
    UIImageView *_starViewYellow;
    unsigned long long _shopPromotionInfo;
    UIImageView *_shopPromotionLogoView;
}

@property(retain, nonatomic) UIImageView *shopPromotionLogoView; // @synthesize shopPromotionLogoView=_shopPromotionLogoView;
@property(nonatomic) unsigned long long shopPromotionInfo; // @synthesize shopPromotionInfo=_shopPromotionInfo;
@property(retain, nonatomic) UIImageView *starViewYellow; // @synthesize starViewYellow=_starViewYellow;
@property(retain, nonatomic) UIImageView *starViewGrey; // @synthesize starViewGrey=_starViewGrey;
@property(nonatomic) _Bool isBoardViewShowing; // @synthesize isBoardViewShowing=_isBoardViewShowing;
@property(retain, nonatomic) O2OMerchantDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) _Bool isMultiPicture; // @synthesize isMultiPicture=_isMultiPicture;
@property(nonatomic) __weak ARShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) UIButton *detailGoButton; // @synthesize detailGoButton=_detailGoButton;
@property(retain, nonatomic) ARHotScoreView *hotScoreView; // @synthesize hotScoreView=_hotScoreView;
@property(retain, nonatomic) UILabel *shortCommentLabel; // @synthesize shortCommentLabel=_shortCommentLabel;
@property(retain, nonatomic) UILabel *avgPriceLabel; // @synthesize avgPriceLabel=_avgPriceLabel;
@property(retain, nonatomic) ARFoodScrollView *foodImageView; // @synthesize foodImageView=_foodImageView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *line2FloatView; // @synthesize line2FloatView=_line2FloatView;
@property(nonatomic) __weak ARShopStreetController *arShopVC; // @synthesize arShopVC=_arShopVC;
@property(copy, nonatomic) CDUnknownBlockType goDetailBlock; // @synthesize goDetailBlock=_goDetailBlock;
- (void).cxx_destruct;
- (void)detailGoButtonClick:(id)arg1;
- (void)attachPromotionInfoView;
- (void)cutBoradArrowView;
- (void)makeLayout;
- (void)showShopImageView;
- (id)getMutiFoodViews:(id)arg1;
- (id)getSingleFoodView:(id)arg1;
- (id)getNetImageViewSrc:(id)arg1;
- (void)showShopTag;
- (void)closeShopInfo;
- (void)showShopInfo;
- (void)dealloc;
- (id)initWithShopInfo:(id)arg1 arShopVC:(id)arg2;
- (_Bool)multiFoodPicture;

@end

