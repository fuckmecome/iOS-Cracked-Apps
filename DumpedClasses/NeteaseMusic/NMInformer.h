//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NSMutableArray, NSString;

@interface NMInformer : NSObject <NMHttpRequestDelegate>
{
    NSMutableArray *_informRequestArray;
}

+ (void)_handleOtherReason:(CDUnknownBlockType)arg1;
+ (void)_chooseReason:(CDUnknownBlockType)arg1 isForComment:(_Bool)arg2;
+ (void)_chooseReason:(CDUnknownBlockType)arg1;
+ (_Bool)_checkAnonymous;
+ (void)_informResourceWithId:(id)arg1 type:(long long)arg2;
+ (void)informDjProgram:(id)arg1;
+ (void)informSubject:(id)arg1;
+ (void)informAlbum:(id)arg1;
+ (void)informPlaylist:(id)arg1;
+ (void)informPrivateMessage:(id)arg1;
+ (void)informUser:(id)arg1;
+ (void)informEvent:(id)arg1;
+ (void)informComment:(id)arg1 combindId:(id)arg2;
+ (void)informComment:(id)arg1 threadId:(id)arg2;
+ (id)_sharedInformer;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)_informResource:(id)arg1 resourceType:(long long)arg2 reason:(id)arg3;
- (void)_informEvent:(id)arg1 userId:(id)arg2 reason:(id)arg3;
- (void)_informPrivateMessage:(id)arg1 reason:(id)arg2;
- (void)_informUser:(id)arg1 reason:(id)arg2;
- (void)_informComment:(id)arg1 combindId:(id)arg2 reason:(id)arg3;
- (void)_informComment:(id)arg1 threadId:(id)arg2 reason:(id)arg3;
- (void)_startRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

