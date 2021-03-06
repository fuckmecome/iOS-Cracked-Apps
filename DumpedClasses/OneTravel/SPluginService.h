//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SPluginService : NSObject
{
    NSMutableDictionary *_dycModelsDic;
    NSMutableDictionary *_dycPidMaps;
    NSMutableDictionary *_dycBundleNameMaps;
}

+ (id)sharePlugin;
@property(retain, nonatomic) NSMutableDictionary *dycBundleNameMaps; // @synthesize dycBundleNameMaps=_dycBundleNameMaps;
@property(retain, nonatomic) NSMutableDictionary *dycPidMaps; // @synthesize dycPidMaps=_dycPidMaps;
@property(retain, nonatomic) NSMutableDictionary *dycModelsDic; // @synthesize dycModelsDic=_dycModelsDic;
- (void).cxx_destruct;
- (void)p_beginLoadDycWithPid:(long long)arg1 sucBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)loadBundleWithPid:(long long)arg1 sucBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (id)dycSDKErrorWithErrorCode:(long long)arg1 userInfo:(id)arg2;
- (id)pliuginServiceErrorWithErrorCode:(long long)arg1 userInfo:(id)arg2;
- (id)fetchPluginModelWithPid:(long long)arg1;
- (_Bool)p_isApolloPluginOpened:(long long)arg1;
- (id)configWithBundleName:(id)arg1;
- (id)configWithPid:(long long)arg1;
- (id)init;

@end

