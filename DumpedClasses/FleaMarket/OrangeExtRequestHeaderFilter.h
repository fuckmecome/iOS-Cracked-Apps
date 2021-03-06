//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWRequestFilterProtocol.h"

@class NSMutableArray, NSString;

@interface OrangeExtRequestHeaderFilter : NSObject <NWRequestFilterProtocol>
{
    NSMutableArray *_domainList;
}

@property(retain) NSMutableArray *domainList; // @synthesize domainList=_domainList;
- (void).cxx_destruct;
- (id)toArrayOrNSDictionary:(id)arg1;
- (id)urlEncodedString:(id)arg1;
- (id)getAppVersion;
- (id)getAppkey;
- (id)getUserdefaultPrex;
- (id)assembleExtRequestHeader;
- (id)extRequestHeader;
- (id)extRequestDomainList;
- (id)getFilterName;
- (void)updateWhiteList:(id)arg1;
- (void)initWhiteList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

