//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIButton, UIImageView;

@interface EmployView : UIView
{
    UIImageView *scanAnimaion;
    id _target;
    UIButton *_leftButton;
    UIView *_maskView;
    UIButton *_rightButton;
    NSTimer *_breathTimer;
}

@property(retain, nonatomic) NSTimer *breathTimer; // @synthesize breathTimer=_breathTimer;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)breathLoop;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
