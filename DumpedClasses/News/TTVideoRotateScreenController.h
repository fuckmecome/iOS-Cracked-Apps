//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTVVideoRotateScreenWindow, UIView<TTVideoRotateViewProtocol>, UIWindow;

@interface TTVideoRotateScreenController : NSObject
{
    _Bool _enableRotate;
    _Bool _inFullScreen;
    _Bool _duringAnimation;
    _Bool _fixFullScreenOnIOS8;
    UIView<TTVideoRotateViewProtocol> *_rotateView;
    UIWindow *_applicationDelegateWindow;
    TTVVideoRotateScreenWindow *_window;
    id <AspectToken> _aspectToken;
}

@property(retain, nonatomic) id <AspectToken> aspectToken; // @synthesize aspectToken=_aspectToken;
@property(retain, nonatomic) TTVVideoRotateScreenWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *applicationDelegateWindow; // @synthesize applicationDelegateWindow=_applicationDelegateWindow;
@property(nonatomic) _Bool fixFullScreenOnIOS8; // @synthesize fixFullScreenOnIOS8=_fixFullScreenOnIOS8;
@property(nonatomic) _Bool duringAnimation; // @synthesize duringAnimation=_duringAnimation;
@property(nonatomic) _Bool inFullScreen; // @synthesize inFullScreen=_inFullScreen;
@property(nonatomic) _Bool enableRotate; // @synthesize enableRotate=_enableRotate;
@property(nonatomic) __weak UIView<TTVideoRotateViewProtocol> *rotateView; // @synthesize rotateView=_rotateView;
- (void).cxx_destruct;
- (void)refreshStatusBarOrientation:(long long)arg1;
- (struct CGAffineTransform)transformForRotationAngle;
- (void)exitFullScreenBelowIOS9:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterFullScreenBelowIOS9:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeRotationOfLandscape;
- (void)exitFullScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterFullScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)initWithRotateView:(id)arg1;
- (void)dealloc;

@end

