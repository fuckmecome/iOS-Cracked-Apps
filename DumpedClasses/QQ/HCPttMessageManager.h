//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCPttMsgOperationDelegate.h"

@class HCPttMessageLoader, HCPttMessageStorage, HCPttMsgDBService, NSRecursiveLock, NSString, QQLockDictionary;

@interface HCPttMessageManager : NSObject <HCPttMsgOperationDelegate>
{
    long long _uin;
    NSRecursiveLock *_lock;
    HCPttMessageStorage *_pttMessageStorage;
    HCPttMsgDBService *_dbService;
    HCPttMessageLoader *_pttMessageLoader;
    long long _localMaxSeq;
    QQLockDictionary *_senderQueue;
    QQLockDictionary *_downloadQueue;
}

+ (id)getHCPttMessageKey:(id)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)handleDownLoader:(id)arg1;
- (void)handleSender:(id)arg1;
- (void)didReceiveOperationResult:(id)arg1 withType:(int)arg2;
- (void)reDownloadPttMessage:(id)arg1;
- (void)reDownloadPttMessage:(long long)arg1 withSeq:(long long)arg2;
- (void)downLoadPttMessage:(id)arg1;
- (void)updataMessageServerSeq:(long long)arg1 groupCode:(long long)arg2 withId:(int)arg3;
- (void)reSenderPttMessage:(id)arg1;
- (void)reSenderPttMessage:(long long)arg1 withSeq:(long long)arg2;
- (void)senderPttMessage:(id)arg1;
- (void)initPttDBWithGroupCode:(long long)arg1;
- (void)initPttDB:(id)arg1;
- (void)saveToDB:(id)arg1 withType:(int)arg2;
- (void)getOffLineMessages:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getOldMessage:(long long)arg1 Count:(int)arg2 startSeq:(long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (id)getCacheMessages:(long long)arg1 Count:(int)arg2;
- (int)getMaxId:(long long)arg1;
- (long long)getMaxSeq:(long long)arg1;
- (long long)getMinSeq:(long long)arg1;
- (void)removeMessage:(id)arg1;
- (void)removeMessage:(long long)arg1 seq:(long long)arg2;
- (void)removeMessages:(long long)arg1;
- (void)addReadMessage:(id)arg1;
- (_Bool)messageHasRead:(id)arg1;
- (void)setReadMessage:(long long)arg1 withSeq:(long long)arg2;
- (void)updateHCPttMessage:(id)arg1;
- (void)cachePttMessage:(id)arg1;
- (id)getMessageModel:(long long)arg1 withSeq:(long long)arg2;
- (id)getMessageModel:(long long)arg1 withId:(int)arg2;
- (id)getMessageModel:(id)arg1;
- (void)setServerMaxSeq:(long long)arg1 withGroupCode:(long long)arg2;
- (_Bool)isPttHotChat:(long long)arg1;
- (void)checkChangeAccount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

