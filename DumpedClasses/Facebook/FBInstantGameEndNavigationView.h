//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBTransparentView.h>

@class CAGradientLayer, FBInstantGameUIMetrics, UIButton;

@interface FBInstantGameEndNavigationView : FBTransparentView
{
    FBInstantGameUIMetrics *_metrics;
    CAGradientLayer *_gradientShadow;
    UIButton *_leftButton;
    UIButton *_middleButton;
    UIButton *_rightButton;
}

@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UIButton *middleButton; // @synthesize middleButton=_middleButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

@end

