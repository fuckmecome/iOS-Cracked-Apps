//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, KGFileHolder, NSString, PlaySlider, UIActivityIndicatorView, UIButton, UILabel;

@interface AVVideoView : UIView
{
    _Bool isReadToPlay;
    _Bool isFullScreen;
    _Bool isShowVolummBtn;
    _Bool isShowSetting;
    _Bool isSliding;
    _Bool isHideTitle;
    _Bool isNotStartIndicatorView;
    _Bool isBackgroud;
    _Bool _isBack;
    _Bool _isPlaying;
    _Bool _isTipAlert;
    _Bool _isProxyError;
    _Bool _isFirseRequest;
    _Bool _isCloseClicked;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    id _timeObserver;
    AVPlayerItem *_playerItem;
    UILabel *_loadingLabel;
    UIButton *_backgroundBtn;
    UIButton *_bigPlaybackBtn;
    UIButton *_fullBtn;
    UIButton *_closeFullBtn;
    UIView *_upBanner;
    UIView *_downBanner;
    UIButton *_playBackBtn;
    UIButton *_returnBtn;
    UIButton *_returnMaskBtn;
    UILabel *_videoTitle;
    PlaySlider *_playSlider;
    UILabel *_videoCurrentTimeLabel;
    UILabel *_videoLeftTimeLabel;
    UIButton *_volumnBtn;
    PlaySlider *_volumnSlider;
    UIView *_volumnSliderBackView;
    UIActivityIndicatorView *_activityView;
    id <AVVideoViewDelegate> _avPlayerViewControllerDelegate;
    NSString *_sourceUrl;
    long long _reconnectTimes;
    KGFileHolder *_mvFileHolder;
}

@property(retain, nonatomic) KGFileHolder *mvFileHolder; // @synthesize mvFileHolder=_mvFileHolder;
@property(nonatomic) _Bool isCloseClicked; // @synthesize isCloseClicked=_isCloseClicked;
@property(nonatomic) long long reconnectTimes; // @synthesize reconnectTimes=_reconnectTimes;
@property(nonatomic) _Bool isFirseRequest; // @synthesize isFirseRequest=_isFirseRequest;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(nonatomic) _Bool isProxyError; // @synthesize isProxyError=_isProxyError;
@property(nonatomic) _Bool isTipAlert; // @synthesize isTipAlert=_isTipAlert;
@property(nonatomic) id <AVVideoViewDelegate> avPlayerViewControllerDelegate; // @synthesize avPlayerViewControllerDelegate=_avPlayerViewControllerDelegate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isBack; // @synthesize isBack=_isBack;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *volumnSliderBackView; // @synthesize volumnSliderBackView=_volumnSliderBackView;
@property(retain, nonatomic) PlaySlider *volumnSlider; // @synthesize volumnSlider=_volumnSlider;
@property(retain, nonatomic) UIButton *volumnBtn; // @synthesize volumnBtn=_volumnBtn;
@property(retain, nonatomic) UILabel *videoLeftTimeLabel; // @synthesize videoLeftTimeLabel=_videoLeftTimeLabel;
@property(retain, nonatomic) UILabel *videoCurrentTimeLabel; // @synthesize videoCurrentTimeLabel=_videoCurrentTimeLabel;
@property(retain, nonatomic) PlaySlider *playSlider; // @synthesize playSlider=_playSlider;
@property(retain, nonatomic) UILabel *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) UIButton *returnMaskBtn; // @synthesize returnMaskBtn=_returnMaskBtn;
@property(retain, nonatomic) UIButton *returnBtn; // @synthesize returnBtn=_returnBtn;
@property(retain, nonatomic) UIButton *playBackBtn; // @synthesize playBackBtn=_playBackBtn;
@property(retain, nonatomic) UIView *downBanner; // @synthesize downBanner=_downBanner;
@property(retain, nonatomic) UIView *upBanner; // @synthesize upBanner=_upBanner;
@property(retain, nonatomic) UIButton *closeFullBtn; // @synthesize closeFullBtn=_closeFullBtn;
@property(retain, nonatomic) UIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
@property(retain, nonatomic) UIButton *bigPlaybackBtn; // @synthesize bigPlaybackBtn=_bigPlaybackBtn;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void)monitorMovieProgress;
- (id)convertTimeToString:(int)arg1;
- (void)showCurrentTime:(CDStruct_1b6d18a9)arg1 totalTime:(CDStruct_1b6d18a9)arg2;
- (void)actionCloseFullScreen:(id)arg1;
- (void)setCloseFullScreenFrame;
- (void)actionFullScreen:(id)arg1;
- (void)setFullScreenFrame;
- (void)actionPlayOrPause:(id)arg1;
- (void)actionShowVolumnSlider:(id)arg1;
- (void)closePlayer;
- (void)actionReturn:(id)arg1;
- (void)actionVolumnSlide:(id)arg1;
- (void)actionVideoSlideTouchDown:(id)arg1;
- (void)actionVideoSlideTouchUpOutside:(id)arg1;
- (void)actionVideoSlideTouchUpInside:(id)arg1;
- (void)actionVideoSlide:(id)arg1;
- (void)actionShowSetting:(id)arg1;
- (void)showPlayBackBtn;
- (void)restoreAllStatus;
- (void)pausePlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidContinue:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)handleProxyError;
- (void)configPlayer;
- (void)playMovieWithURLStr:(id)arg1 title:(id)arg2 previewImageUrl:(id)arg3;
- (id)OriginImage:(id)arg1 scaleToSize:(struct CGSize)arg2;
- (void)volumeChanged:(id)arg1;
- (void)routeChangedNotifyCallback:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)appWillResign:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)initPlayerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

