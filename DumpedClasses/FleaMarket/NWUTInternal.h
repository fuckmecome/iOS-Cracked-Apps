//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NWUTInternal : NSObject
{
    id <NWAppmonitorProtocol> networkAMT;
    id <NWAppmonitorProtocol> networkErrAMT;
    id <NWAppmonitorProtocol> amdcAMT;
    id <NWAppmonitorProtocol> sessionAMT;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)commitAppmonitorCounter:(id)arg1 arg:(id)arg2;
- (void)commitAMDC:(id)arg1;
- (void)commitATS:(id)arg1;
- (void)commitChannel:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)commitLocalDNS:(id)arg1;
- (void)commitNetworkError:(id)arg1;
- (void)commitRequestFailure:(id)arg1;
- (void)commitRequestSucess:(id)arg1 withURL:(id)arg2;
- (void)notify2Delegate:(int)arg1 withArgs:(id)arg2;
- (void)registerSessionAppmonitorTable;
- (void)registerAMDCAppmonitorTable;
- (void)registerNetworkErrAppmonitorTable;
- (void)registerNetworkAppmonitorTable;
- (id)registerAppmonitorTable:(id)arg1 tableName:(id)arg2;
- (id)init;

@end

