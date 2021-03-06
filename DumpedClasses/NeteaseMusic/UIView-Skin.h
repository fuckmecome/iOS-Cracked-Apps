//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface UIView (Skin)
+ (void)load;
- (void)handleBackgroundWithColorKey:(id)arg1 skin:(id)arg2;
- (void)setUseImageBackground:(_Bool)arg1;
- (_Bool)useImageBackground;
@property(retain, nonatomic) NSString *backgroundColorKey;
- (void)setBackgroundColor_nmskin:(id)arg1;
- (void)setIgnoreNightModeBackgroundColor:(id)arg1;
- (void)setNightModeBackgroundColor_nmskin:(_Bool)arg1 color:(id)arg2 nightColor:(id)arg3 alpha:(double)arg4;
- (void)setNightModeAlpha_nmskin:(_Bool)arg1 alpha:(double)arg2 nightAlpha:(double)arg3;
- (void)removeNightModeAlpha;
- (void)setAlpha:(double)arg1 nightAlpha:(double)arg2;
@end

