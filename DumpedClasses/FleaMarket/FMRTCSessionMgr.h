//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARTCVSignalSendDelegate.h"
#import "ARTVCDynamicConfigProtocol.h"
#import "ARTVCEngineDelegate.h"
#import "FMURLRouterInterceptor.h"

@class ARTVCEngine, NSDate, NSMutableArray, NSString, UIView;

@interface FMRTCSessionMgr : NSObject <ARTVCEngineDelegate, ARTCVSignalSendDelegate, ARTVCDynamicConfigProtocol, FMURLRouterInterceptor>
{
    _Bool _isSpeakerMode;
    _Bool _isBusy;
    _Bool _isChatClosed;
    _Bool _isFirstLaunch;
    _Bool _isChating;
    _Bool _isCameraFlip;
    _Bool _isHangupExp;
    _Bool _isBackGround;
    int _curRtcType;
    id <ARTVCSignalRecvDelegate> _recvMsgHandler;
    id <FMRTCNetDelegate> _sendMsgHandler;
    NSMutableArray *_sessionList;
    NSString *_communicationState;
    UIView *_localView;
    UIView *_remoteView;
    UIView *_debugView;
    ARTVCEngine *_artvcEngine;
    NSDate *_excDate;
    NSMutableArray *_staticArray;
    NSString *_startCallTimeSp;
    NSString *_curRoomId;
    NSString *_curSessionID;
}

+ (void)startRTCSession:(id)arg1;
+ (void)preStartRTCSession:(id)arg1;
+ (_Bool)interceptProcess:(id)arg1;
+ (id)shareSessionMgr;
@property(nonatomic) _Bool isBackGround; // @synthesize isBackGround=_isBackGround;
@property(nonatomic) int curRtcType; // @synthesize curRtcType=_curRtcType;
@property(copy, nonatomic) NSString *curSessionID; // @synthesize curSessionID=_curSessionID;
@property(copy, nonatomic) NSString *curRoomId; // @synthesize curRoomId=_curRoomId;
@property(copy, nonatomic) NSString *startCallTimeSp; // @synthesize startCallTimeSp=_startCallTimeSp;
@property(retain, nonatomic) NSMutableArray *staticArray; // @synthesize staticArray=_staticArray;
@property(retain, nonatomic) NSDate *excDate; // @synthesize excDate=_excDate;
@property(nonatomic) _Bool isHangupExp; // @synthesize isHangupExp=_isHangupExp;
@property(nonatomic) _Bool isCameraFlip; // @synthesize isCameraFlip=_isCameraFlip;
@property(nonatomic) _Bool isChating; // @synthesize isChating=_isChating;
@property(nonatomic) _Bool isFirstLaunch; // @synthesize isFirstLaunch=_isFirstLaunch;
@property(nonatomic) _Bool isChatClosed; // @synthesize isChatClosed=_isChatClosed;
@property(nonatomic) __weak ARTVCEngine *artvcEngine; // @synthesize artvcEngine=_artvcEngine;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool isSpeakerMode; // @synthesize isSpeakerMode=_isSpeakerMode;
@property(nonatomic) __weak UIView *debugView; // @synthesize debugView=_debugView;
@property(nonatomic) __weak UIView *remoteView; // @synthesize remoteView=_remoteView;
@property(nonatomic) __weak UIView *localView; // @synthesize localView=_localView;
@property(copy, nonatomic) NSString *communicationState; // @synthesize communicationState=_communicationState;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=_sessionList;
@property(nonatomic) __weak id <FMRTCNetDelegate> sendMsgHandler; // @synthesize sendMsgHandler=_sendMsgHandler;
@property(nonatomic) __weak id <ARTVCSignalRecvDelegate> recvMsgHandler; // @synthesize recvMsgHandler=_recvMsgHandler;
- (void).cxx_destruct;
- (id)configWithKey:(id)arg1;
- (void)sendICEMessage:(id)arg1;
- (void)leaveRoom:(id)arg1;
- (void)joinRoom:(id)arg1;
- (void)createRoom:(id)arg1;
- (void)resetDefault;
- (_Bool)checkAVAuth:(id)arg1 meCall:(_Bool)arg2;
- (void)networkWarning;
- (void)getStaticsWithDuration:(int)arg1;
- (void)setProfile:(unsigned long long)arg1;
- (void)videoShowAction;
- (void)microMuteAction;
- (void)switchPeerTypeAction:(id)arg1 roomID:(id)arg2 rtcType:(int)arg3;
- (void)switchAudioAction;
- (void)handsFreeAction;
- (void)switchCameraActon;
- (void)agreeAction:(id)arg1;
- (void)excRefuseActionWithSession:(id)arg1 roomID:(id)arg2 rtcType:(int)arg3 isBusy:(_Bool)arg4;
- (void)refuseAction;
- (void)closeActionIsSendOpt:(_Bool)arg1;
- (void)requestAction:(id)arg1;
- (void)artvcEngine:(id)arg1 didAvailabeSendBandwidthBecomeLow:(_Bool)arg2 currentBandwidth:(double)arg3;
- (void)artvcEngine:(id)arg1 didGenerateCallStatisticsData:(id)arg2;
- (void)artvcEngine:(id)arg1 didOutputSampleBuffer:(struct __CVBuffer *)arg2 processedBuffer:(struct __CVBuffer **)arg3;
- (void)artvcEngine:(id)arg1 didAudioPlayModeChangedTo:(unsigned long long)arg2;
- (void)artvcEngine:(id)arg1 didRemoteCallModeChangedTo:(long long)arg2;
- (void)artvcEngine:(id)arg1 hangupWithReason:(id)arg2;
- (void)artvcEngine:(id)arg1 networkChangedTo:(long long)arg2;
- (void)artvcEngine:(id)arg1 encounterError:(id)arg2;
- (void)artvcEngine:(id)arg1 stateChangedTo:(long long)arg2;
- (void)onUserDefineRecvd:(id)arg1 identifier:(id)arg2;
- (void)onRejectedRecved:(id)arg1 identifier:(id)arg2;
- (void)onJoinedRecved:(id)arg1 identifier:(id)arg2;
- (void)onSwitchTypeRecved:(int)arg1 identifier:(id)arg2;
- (void)onIceRecved:(id)arg1 identifier:(id)arg2;
- (void)onAgreeRecved:(id)arg1 identifier:(id)arg2;
- (void)onCloseRecved:(id)arg1;
- (void)onRefuseRecved:(id)arg1;
- (void)onCallingRecved:(id)arg1;
- (void)onStartVideo:(id)arg1;
- (void)onPushOperation:(id)arg1;
- (void)unRegister:(id)arg1;
- (void)registerVideoChat:(id)arg1;
- (void)didEnterFrontground;
- (void)willEnterBackground;
- (void)initNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

