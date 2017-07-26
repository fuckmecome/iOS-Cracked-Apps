//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQPTVPlayerDelegate.h"
#import "QQRichViewPlayerDelegte.h"

@class NSString, QQRichVideoPlayer;

@interface QQAIOTinyVideoCellPlayView : UIView <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate, QQPTVPlayerDelegate>
{
    QQRichVideoPlayer *_player;
    NSString *_playFile;
    id <TinyVideoCellPlayViewDelegate> _delegate;
}

@property(nonatomic) id <TinyVideoCellPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayEnd:(_Bool)arg1 filePath:(id)arg2;
- (void)onAudioSessionDeactive;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)setAudioSessionAmbientSoundMix;
- (void)setAudioSessionPlayback;
- (void)onPlayerWillStartPlay:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayer:(id)arg1 timeChange:(CDStruct_1b6d18a9)arg2;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)reportImageDecryptError:(id)arg1;
- (id)currentPlayFile;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)playMuted;
- (void)playUnmuted;
- (void)play;
- (void)playUnmuted:(id)arg1;
- (void)playWithPath:(id)arg1 isUrlPath:(_Bool)arg2 isMuted:(_Bool)arg3;
- (void)play:(id)arg1;
- (void)loadFile:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
