//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, NSArray, NSTimer, UIButton;

@interface FMScanFishAnimView : UIView
{
    CDUnknownBlockType _dismissAction;
    FMImageView *_fishAnimView;
    UIButton *_gotoButton;
    NSTimer *_timer;
    NSArray *_animArr;
    long long _animIndex;
}

@property(nonatomic) long long animIndex; // @synthesize animIndex=_animIndex;
@property(retain, nonatomic) NSArray *animArr; // @synthesize animArr=_animArr;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *gotoButton; // @synthesize gotoButton=_gotoButton;
@property(retain, nonatomic) FMImageView *fishAnimView; // @synthesize fishAnimView=_fishAnimView;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void).cxx_destruct;
- (void)layout;
- (void)onTimer;
- (id)init;

@end

