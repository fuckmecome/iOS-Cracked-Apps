//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXDynamicDebuggerDomain.h"

@interface WXApplicationCacheDomain : WXDynamicDebuggerDomain
{
}

+ (id)domainName;
- (void)handleMethodWithName:(id)arg1 parameters:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)networkStateUpdatedWithIsNowOnline:(id)arg1;
- (void)applicationCacheStatusUpdatedWithFrameId:(id)arg1 manifestURL:(id)arg2 status:(id)arg3;

// Remaining properties
@property(nonatomic) id <WXApplicationCacheCommandDelegate><WXCommandDelegate> delegate; // @dynamic delegate;

@end

