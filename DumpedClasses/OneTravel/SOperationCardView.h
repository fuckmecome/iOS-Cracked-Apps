//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber, SOperationCardViewModel, UIButton, UIImageView, UILabel;

@interface SOperationCardView : UIView
{
    NSNumber *_preferredLayoutWidth;
    UIButton *_bottomButtton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_wrapperView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *bottomButtton; // @synthesize bottomButtton=_bottomButtton;
@property(retain, nonatomic) NSNumber *preferredLayoutWidth; // @synthesize preferredLayoutWidth=_preferredLayoutWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) double imageViewBottom;
- (void)_adjustImageWrapperViewCornerRadius;
- (void)_updateSubviewsFrame;
- (void)layoutSubviews;
- (void)_initialize;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak SOperationCardViewModel *viewModel;

@end

