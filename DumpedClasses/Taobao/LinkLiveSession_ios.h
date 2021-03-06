//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LinkLiveSession_ios : NSObject
{
    struct LinkLiveSession session_;
    struct Listener *listener_;
    id <LinkLiveSessionDelegate> _delegate;
}

@property(retain, nonatomic) id <LinkLiveSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)acceptLinkLive:(_Bool)arg1;
- (int)stopMixing;
- (int)startMixing;
- (int)stopLink;
- (int)startLinkAsync:(struct _SesstionParam)arg1;
- (int)notify:(int)arg1 notifyid:(int)arg2 data:(const char *)arg3;
- (int)setRequestFunc:(CDUnknownFunctionPointerType)arg1 arg:(void *)arg2;
- (id)init;
- (void)Reset;
- (int)Deinit;
- (int)Init:(long long)arg1 devId:(const char *)arg2;
- (void)dealloc;
- (int)onInfo:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 arg3:(long long)arg4 arg4:(long long)arg5 arg5:(const char *)arg6 arg6:(const char *)arg7 arg7:(const char *)arg8 arg8:(const char *)arg9;

@end

