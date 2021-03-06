//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLiveScreenRecorderCallBack.h"

@class NSString;

@interface TBLiveScreenRecorder : NSObject <TBLiveScreenRecorderCallBack>
{
    id <TBLiveScreenRecorderProtocol> _recorder;
    id <TBLiveScreenRecorderDelegate> _delegate;
}

@property(nonatomic) __weak id <TBLiveScreenRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)screenRecordingFinishedWithPath:(id)arg1 error:(id)arg2;
- (_Bool)isRecording;
- (void)discardRecording;
- (void)stopRecording;
- (void)startRecordingWithBlock:(CDUnknownBlockType)arg1;
- (void)setupScreenRecorder;
- (void)setRecorderViewController:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

