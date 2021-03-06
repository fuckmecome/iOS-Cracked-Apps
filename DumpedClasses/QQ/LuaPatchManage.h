//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LuaPatchRuntime, NSMutableArray;

@interface LuaPatchManage : NSObject
{
    NSMutableArray *_patchs;
    LuaPatchRuntime *_luaPatchRuntime;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (int)patchConfigVersion;
- (id)patchedIDs;
- (void)downloadPatch:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)updatePatches:(id)arg1;
- (void)patchConfigFeatched:(id)arg1 updated:(_Bool)arg2 nezVersion:(int)arg3;
- (void)patchBatchConfigFeatched:(id)arg1 updated:(_Bool)arg2 nezVersion:(int)arg3;
- (id)combilePatchConfig:(id)arg1;
- (id)patchsPolicyApply:(id)arg1;
- (void)doPatch:(unsigned long long)arg1;
- (void)doInit;
- (void)notifcationHandle:(id)arg1;
- (void)start;
- (id)init;
- (id)getPatches;
- (long long)getPatchesCount;

@end

