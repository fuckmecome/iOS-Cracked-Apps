//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface H5QYBundleDownloader : NSObject
{
}

+ (id)getUserDefaults;
+ (id)getIncrementFrom:(id)arg1 on:(id)arg2 forModule:(id)arg3;
+ (id)selectLatestPatch:(id)arg1;
+ (void)saveLastUpdateTime:(double)arg1;
+ (void)saveLocalPatches:(id)arg1;
+ (id)getLocalPatches;
+ (void)deleteLocalPatches:(id)arg1 forModule:(id)arg2;
+ (id)savePatchFile:(id)arg1 patchVersion:(id)arg2 patchId:(id)arg3;
+ (id)localPatchesKey;
+ (id)lastUpdateTimeKey;
+ (void)applyLocalJsInDir:(id)arg1;
+ (void)downloadPatchWithUrl:(id)arg1 signature:(id)arg2 version:(long long)arg3 patchId:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)downloadSinglePatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)downloadPatches:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)setPublicKey:(id)arg1;
+ (void)downloadH5Bundles;
+ (void)setNetworkConfiguration:(id)arg1;
+ (void)setSwitchConfiguration:(id)arg1;
+ (id)getLocalBundles;

@end

