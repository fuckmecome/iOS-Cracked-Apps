//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYAirplayPushProtocol-Protocol.h"

@class AVPlayer, AVPlayerItem, NSString, NSURL, QYAirplayPlaybackView;
@protocol QYAirplayPlayerViewDelegate;

@interface QYAirplayPlayerView : UIView <QYAirplayPushProtocol>
{
    QYAirplayPlaybackView *_playbackView;
    NSURL *_mURL;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    long long _needToSeekTime;
    _Bool _bReadyPlay;
    id <QYAirplayPlayerViewDelegate> _delegateAV;
}

@property(retain, nonatomic) QYAirplayPlaybackView *playbackView; // @synthesize playbackView=_playbackView;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool readyPlay; // @synthesize readyPlay=_bReadyPlay;
@property(nonatomic) __weak id <QYAirplayPlayerViewDelegate> delegateAV; // @synthesize delegateAV=_delegateAV;
- (void).cxx_destruct;
- (double)availableDuration;
- (CDStruct_1b6d18a9)playerItemDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)postPlayerNotification:(id)arg1;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)startActivity;
- (void)stopActivity;
- (void)removePlayerTimeObserver;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (_Bool)isPlaying;
- (void)setInitTime:(long long)arg1;
- (void)seekToTime:(long long)arg1;
- (void)stop;
- (void)closePlayer;
- (void)pause;
- (void)play;
- (void)preparePlayer;
- (void)loadMovie:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

