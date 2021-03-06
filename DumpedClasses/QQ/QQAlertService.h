//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAlertService.h"
#import "IQQMessageProcessor.h"
#import "audioPlayCompleteDelegate.h"

@class NSMutableArray, NSString;

@interface QQAlertService : NSObject <audioPlayCompleteDelegate, IAlertService, IQQMessageProcessor>
{
    double _lastPlayTime;
    _Bool _canVibrate;
    _Bool _isRemind;
    NSMutableArray *_soundQueue;
    NSMutableArray *_vibrateQueue;
}

+ (void)destoryInstance;
+ (id)getInstance;
@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
- (void).cxx_destruct;
- (id)processMsgEncapsulation:(id)arg1;
- (void)playEnd:(id)arg1 Sound:(_Bool)arg2;
- (void)shake;
- (void)shakeInMainThread;
- (void)vibrateWithLogicControl;
- (void)playSoundWithFrequncy:(id)arg1 ShouldVibrate:(_Bool)arg2;
- (void)vibrateWithFrequncy;
- (void)vibrate;
- (void)playSound:(id)arg1 isSupportBreak:(_Bool)arg2 soundPathType:(int)arg3;
- (void)setVibrate;
- (void)setPlay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

