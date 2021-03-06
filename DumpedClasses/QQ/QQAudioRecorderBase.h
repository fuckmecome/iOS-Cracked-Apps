//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioRouteChangeProtocol.h"
#import "QQAudioSessionManagerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface QQAudioRecorderBase : NSObject <QQAudioSessionManagerDelegate, AudioRouteChangeProtocol>
{
    _Bool _startRecvData;
    _Bool _isRecording;
    double _recordTime;
    int _amrMode;
    NSString *_filePath;
    double _maxRecordTime;
    int _sampleRate;
    int _audioFormat;
    _Bool _useForVoiceEncode;
    int _xo;
    struct CVoiceRecorder *_recorder;
    id <QQAmrRecorderDelegate> _recordDelegate;
    _Bool _cancel;
    NSObject<OS_dispatch_queue> *_callQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool startRecvData; // @dynamic startRecvData;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (void)onRecordDeviceChanged;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (double)getRecordTime;
- (void)cancel;
- (void)stop;
- (void)clean;
- (void)setDelegate:(id)arg1;
- (_Bool)startRecvData:(_Bool)arg1;
@property(nonatomic) _Bool isRecording; // @dynamic isRecording;
- (void)startRecord:(id)arg1;
- (_Bool)shouldStartRecord;
- (void)initVoiceRecorder;
- (_Bool)checkMicroPhoneAuth;
- (void)notifyError:(int)arg1;
- (void)onRecordReady;
- (void)onRecordStop;
- (_Bool)shouldFinishRecord;
- (void)onRecordData:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)notifyOnRecordData:(id)arg1;
- (void)saveRecordData:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)calcRecordTimeFromData:(id)arg1 numPackets:(unsigned long long)arg2 audioQueue:(struct OpaqueAudioQueue *)arg3;
- (void)timeOut;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1 audioFormat:(int)arg2;

// Remaining properties
@property(nonatomic) int amrMode; // @dynamic amrMode;
@property(nonatomic) int audioFormat; // @dynamic audioFormat;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maxRecordTime; // @dynamic maxRecordTime;
@property(nonatomic) double recordTime; // @dynamic recordTime;
@property(nonatomic) int sampleRate; // @dynamic sampleRate;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useForVoiceEncode; // @dynamic useForVoiceEncode;

@end

