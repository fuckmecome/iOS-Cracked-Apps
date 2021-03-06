//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQReadInJoyVideoView, TVKLitePlayer, UIImage, UIView;

@protocol QQReadInJoyVideoViewDelegate <NSObject>

@optional
- (void)muteReportTo1160:(NSString *)arg1 R2:(NSString *)arg2 R3:(NSString *)arg3;
- (void)mediaPlayStreamError;
- (void)onPlayVideoErrorWithErrorCode:(long long)arg1;
- (void)mediaPlayer:(TVKLitePlayer *)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (void)mediaPlayer:(TVKLitePlayer *)arg1 didChangeStateTo:(int)arg2;
- (void)onNatureSizeLoaded:(struct CGSize)arg1;
- (void)onPlayerStateButtonClicked;
- (void)playerView:(UIView *)arg1 parentView:(UIView *)arg2 onEnterFullScreen:(_Bool)arg3;
- (void)onStopPlayVideo:(double)arg1 currentImage:(UIImage *)arg2 articleID:(unsigned long long)arg3;
- (void)onStartPlayVideo;
- (_Bool)shouldPlayVideo:(QQReadInJoyVideoView *)arg1;
@end

