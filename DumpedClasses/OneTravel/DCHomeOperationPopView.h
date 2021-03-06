//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCActivityGuideView.h"

@class CALayer, DCActivityLoading, UIButton, UIImageView;

@interface DCHomeOperationPopView : DCActivityGuideView
{
    CALayer *_blackLayer;
    UIImageView *_imageView;
    DCActivityLoading *_activity;
    UIButton *_actionBtn;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) DCActivityLoading *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CALayer *blackLayer; // @synthesize blackLayer=_blackLayer;
- (void).cxx_destruct;
- (void)disappearPopView;
- (void)disappearPages;
- (void)pop;
- (void)dismiss;
- (void)layoutSubviews;
- (void)loadOperationImages;
- (void)refreshOperationViewWithTitle:(id)arg1;
- (void)makeConstraints;
- (double)defaultPageHeight;
- (double)pageWidth;
- (void)moreButtonClicked;
- (void)operationClicked;
- (void)shut:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

