//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQSVOriginalCellDelegete.h"
#import "QQShortAudioVideoPlayerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDelegate.h"

@class CALayer, NSArray, NSString, QQAIOShortVideoCellThumbView, QQAIOShortVideoPlayHelper, QQAIOVideoCellPlayBtnView, QQAnimatedRevealMaskView, QQShortAudioVideoPlayer, QQTwinkleCircleProgressView, UIImageView, UIView;

@interface QQAIOShortVideoCellView : QQAIOCommonCellView <QQShortAudioVideoPlayerDelegate, UIAlertViewDelegate, QQSVOriginalCellDelegete, UITableViewDelegate>
{
    QQAIOShortVideoCellThumbView *_thumbView;
    QQTwinkleCircleProgressView *_progressView;
    QQAnimatedRevealMaskView *_maskView;
    QQAIOVideoCellPlayBtnView *_buttonView;
    UIImageView *_refreshButtonView;
    UIView *_playerView;
    QQShortAudioVideoPlayer *_player;
    NSArray *_urlArray;
    _Bool _isScrolling;
    int _lastNetworkState;
    QQAIOShortVideoPlayHelper *_shortVideoPlayHelper;
    CALayer *_highlightLayer;
    CALayer *_borderLayer;
    struct CGSize _thumbSize;
}

@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
- (struct CGRect)getThumbOriginalRectBySignString:(id)arg1;
- (struct CGRect)getThumbImageRect;
- (struct CGRect)getThumbRect;
- (void)shortVideoPlayerDidClickForwardButton:(id)arg1;
- (void)onVideoNeedPause;
- (void)onVideoNeedStop;
- (void)onVideoNeedStart;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)resignActive;
- (void)becomeActive;
- (void)onVideoChatStart;
- (void)onVideoChatEnd;
- (void)autoPlayVideo;
- (_Bool)canAutoPlayIgnoreNetworkType;
- (_Bool)canAutoPlaying;
- (_Bool)isIphone4s;
- (_Bool)isIphone4;
- (_Bool)viewInScreen;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setAudioSessionMix;
- (void)playVideo:(id)arg1;
- (void)startDownloadVideo:(id)arg1;
- (void)playerDidEndPlay;
- (void)onPlayerCurrentTime:(double)arg1;
- (void)onPlayerLoadProgress:(double)arg1;
- (void)onPlayerLoadComplete;
- (void)onPlayerLoadError:(id)arg1;
- (void)onPlayerPlayError:(id)arg1;
- (_Bool)netWorkChangePauseState;
- (void)onUploadCancelButtonClick;
- (void)onMenuButtonClick:(id)arg1;
- (void)onPlayerDidLoaded;
- (void)clickVideoView;
- (void)voiceSetData:(id)arg1;
- (void)menuActionDelete:(id)arg1;
- (void)setFailTipsText:(id)arg1;
- (void)showToastWithString:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (id)cellThumbView;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showRefreshButton:(_Bool)arg1;
- (void)showPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (id)thumbImage;
- (void)setThumb:(id)arg1;
- (struct CGRect)thumbRect;
- (id)getMenuItems;
- (_Bool)canForward;
- (_Bool)canShowPopupMenu;
- (_Bool)shouldDisplayMsgSendFail;
- (void)setHighlighted:(_Bool)arg1;
- (void)showMask:(_Bool)arg1 animated:(_Bool)arg2;
- (id)bubbleMask:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (void)updateBorderLayer:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (void)willDrawBubble;
- (struct CGRect)getThumbViewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (void)onVideoUrlGet:(id)arg1;
- (void)handleVideoDownloadStateChangeNotificaion:(id)arg1;
- (void)preparePaopao:(id)arg1;
- (void)showCover;
- (void)hideCover;
- (void)setAioModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

