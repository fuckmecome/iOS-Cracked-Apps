//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXKGLivePlayerBottomView;

@interface FXKGLivePlayerBottomVll : NSObject
{
    FXKGLivePlayerBottomView *_bottomView;
}

@property(retain, nonatomic) FXKGLivePlayerBottomView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destory;
- (_Bool)isHidden;
- (void)configAutoHideBottomView;
- (void)showBottomView;
- (void)hideBottomView;
- (void)addScreenFrameAction:(SEL)arg1 target:(id)arg2;
- (void)halfScreenState;
- (void)fullScreenState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

