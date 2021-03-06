//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VZHTTPRequestInterface.h"

@class DTRpcAsyncCaller, NSDictionary, NSError, NSString;

@interface O2OHTTPRequest : NSObject <VZHTTPRequestInterface>
{
    _Bool _ignoreCachePolicy;
    _Bool _isPBResponse;
    struct responseConfig _responseConfig;
    NSString *_requestURL;
    id <VZHTTPRequestDelegate> _delegate;
    NSString *_responseString;
    id _responseObject;
    NSError *_responseError;
    NSDictionary *_queries;
    NSDictionary *_headerParams;
    NSString *_cachedKey;
    Class _RPCRequestClass;
    Class _RPCResponseClass;
    Class _RPCServiceClass;
    SEL _selectorForService;
    id _rpcRequest;
    id <O2OHTTPRequestProtocol> _o2oRequestDelegate;
    id _viewController;
    DTRpcAsyncCaller *_asyncCaller;
    struct requestConfig _requestConfig;
}

@property(retain, nonatomic) DTRpcAsyncCaller *asyncCaller; // @synthesize asyncCaller=_asyncCaller;
@property(nonatomic) __weak id viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <O2OHTTPRequestProtocol> o2oRequestDelegate; // @synthesize o2oRequestDelegate=_o2oRequestDelegate;
@property(retain, nonatomic) id rpcRequest; // @synthesize rpcRequest=_rpcRequest;
@property(nonatomic) _Bool isPBResponse; // @synthesize isPBResponse=_isPBResponse;
@property(nonatomic) SEL selectorForService; // @synthesize selectorForService=_selectorForService;
@property(retain, nonatomic) Class RPCServiceClass; // @synthesize RPCServiceClass=_RPCServiceClass;
@property(retain, nonatomic) Class RPCResponseClass; // @synthesize RPCResponseClass=_RPCResponseClass;
@property(retain, nonatomic) Class RPCRequestClass; // @synthesize RPCRequestClass=_RPCRequestClass;
@property(nonatomic) _Bool ignoreCachePolicy; // @synthesize ignoreCachePolicy=_ignoreCachePolicy;
@property(retain, nonatomic) NSString *cachedKey; // @synthesize cachedKey=_cachedKey;
@property(retain, nonatomic) NSDictionary *headerParams; // @synthesize headerParams=_headerParams;
@property(retain, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(readonly, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(readonly, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(readonly, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(nonatomic) __weak id <VZHTTPRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct responseConfig responseConfig; // @synthesize responseConfig=_responseConfig;
@property(nonatomic) struct requestConfig requestConfig; // @synthesize requestConfig=_requestConfig;
@property(retain, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (void)requestDidStartRPC;
- (void)requestDidSucceed:(id)arg1 FromCache:(_Bool)arg2;
- (void)requestDidFail:(id)arg1;
- (void)requestDidStart;
- (id)globalCache;
- (void)saveCache:(id)arg1;
- (void)checkCache;
- (void)dealloc;
- (void)cancel;
- (void)loadRPC;
- (void)load;
- (void)addHeaderParams:(id)arg1;
- (void)addQueries:(id)arg1;
- (void)initWithBaseURL:(id)arg1 RequestConfig:(struct requestConfig)arg2 ResponseConfig:(struct responseConfig)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

