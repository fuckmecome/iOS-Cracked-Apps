//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, TBLiveActionView, TBLiveDetailInfoModel, UIImageView, UILabel;

@interface TBLiveAccountAreaView : UIView
{
    UIImageView *_avatarView;
    UILabel *_accountName;
    UILabel *_locationIconLabel;
    UILabel *_location;
    TBLiveDetailInfoModel *_liveDetailViewModel;
    TBLiveActionView *_actionView;
    CAShapeLayer *_maskLayer;
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) TBLiveActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) TBLiveDetailInfoModel *liveDetailViewModel; // @synthesize liveDetailViewModel=_liveDetailViewModel;
@property(retain, nonatomic) UILabel *location; // @synthesize location=_location;
@property(retain, nonatomic) UILabel *locationIconLabel; // @synthesize locationIconLabel=_locationIconLabel;
@property(retain, nonatomic) UILabel *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)onClickAvatarImg:(id)arg1;
- (void)dismissBroadCasterHomeView;
- (void)refreshWithViewModel:(id)arg1;
- (void)updateLayoutConstraints;
- (void)followStatusChanged:(id)arg1;
- (void)resizeWidth:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

