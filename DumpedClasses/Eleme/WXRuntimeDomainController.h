//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXDomainController.h"

#import "WXRuntimeCommandDelegate.h"

@class NSMutableDictionary, NSString, WXRuntimeDomain;

@interface WXRuntimeDomainController : WXDomainController <WXRuntimeCommandDelegate>
{
    NSMutableDictionary *_objectReferences;
    NSMutableDictionary *_objectGroups;
}

+ (id)_generateUUID;
+ (Class)domainClass;
+ (id)defaultInstance;
@property(retain, nonatomic) NSMutableDictionary *objectGroups; // @synthesize objectGroups=_objectGroups;
@property(retain, nonatomic) NSMutableDictionary *objectReferences; // @synthesize objectReferences=_objectReferences;
- (void).cxx_destruct;
- (void)_releaseObjectGroup:(id)arg1;
- (void)_releaseObjectID:(id)arg1;
- (void)clearAllObjectReferences;
- (void)clearObjectReferencesByKey:(id)arg1;
- (id)registerAndGetKeyForObject:(id)arg1;
- (void)domain:(id)arg1 releaseObjectGroupWithObjectGroup:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)domain:(id)arg1 releaseObjectWithObjectId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)domain:(id)arg1 getPropertiesWithObjectId:(id)arg2 ownProperties:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) WXRuntimeDomain *domain; // @dynamic domain;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
