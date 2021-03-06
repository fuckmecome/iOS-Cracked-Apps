//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWStarPerformListView, NSString, UIImageView, UILabel;

@interface GWStarPerformListTabView : UIView
{
    GWStarPerformListView *_performListView;
    CDUnknownBlockType _moreButtonClick;
    CDUnknownBlockType _didSelectCard;
    CDUnknownBlockType _didSelectBuyButton;
    UIView *_titleBar;
    UILabel *_titleLabel;
    NSString *_viewType;
    UILabel *_moreLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(copy, nonatomic) NSString *viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleBar; // @synthesize titleBar=_titleBar;
@property(copy, nonatomic) CDUnknownBlockType didSelectBuyButton; // @synthesize didSelectBuyButton=_didSelectBuyButton;
@property(copy, nonatomic) CDUnknownBlockType didSelectCard; // @synthesize didSelectCard=_didSelectCard;
@property(copy, nonatomic) CDUnknownBlockType moreButtonClick; // @synthesize moreButtonClick=_moreButtonClick;
@property(retain, nonatomic) GWStarPerformListView *performListView; // @synthesize performListView=_performListView;
- (void).cxx_destruct;
- (void)moreButtonClick:(id)arg1;
- (void)showWithPerformList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewTag:(id)arg2;

@end

