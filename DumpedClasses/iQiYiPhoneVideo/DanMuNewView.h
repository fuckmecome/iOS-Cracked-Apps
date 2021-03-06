//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface DanMuNewView : UIView
{
    _Bool _isSplitScreen;
    float _opacity;
    CDUnknownBlockType _isLockScreenBc;
    UIView *_superDanmuView;
    UIView *_mirrorDanmuView;
    struct CGRect _superFrame;
}

@property(nonatomic) struct CGRect superFrame; // @synthesize superFrame=_superFrame;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool isSplitScreen; // @synthesize isSplitScreen=_isSplitScreen;
@property(retain, nonatomic) UIView *mirrorDanmuView; // @synthesize mirrorDanmuView=_mirrorDanmuView;
@property(retain, nonatomic) UIView *superDanmuView; // @synthesize superDanmuView=_superDanmuView;
@property(copy, nonatomic) CDUnknownBlockType isLockScreenBc; // @synthesize isLockScreenBc=_isLockScreenBc;
- (void).cxx_destruct;
- (void)clearCurrentDanMu;
- (void)resume;
- (void)pause;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)resetFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

