//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XYRKHTTPSessionManager;

@interface XYAPIClient : NSObject
{
    CDUnknownBlockType _successOriginalCallback;
    XYRKHTTPSessionManager *_sessionManager;
    double _timeout;
    long long _operationCount;
}

+ (void)clearCache;
+ (void)enableNetworkIndicator;
+ (void)stopLogging;
+ (void)startLogging;
+ (id)clientWithRequestTimeout:(double)arg1 secureConnection:(_Bool)arg2 operationCount:(long long)arg3;
+ (id)clientWithRequestTimeout:(double)arg1 secureConnection:(_Bool)arg2;
+ (id)clientWithSecureConnection;
@property(nonatomic) long long operationCount; // @synthesize operationCount=_operationCount;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) XYRKHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(copy, nonatomic) CDUnknownBlockType successOriginalCallback; // @synthesize successOriginalCallback=_successOriginalCallback;
- (void).cxx_destruct;
- (id)requestPostWithRoute:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestDeleteWithRoute:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestPutWithRoute:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestDontCacheGetWithRoute:(id)arg1 withParams:(id)arg2 withModel:(id)arg3 withKeyPath:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)requestGetWithRoute:(id)arg1 withParams:(id)arg2 withModel:(id)arg3 withKeyPath:(id)arg4 withCachePolicy:(long long)arg5 expiredTime:(long long)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)requestGetWithRoute:(id)arg1 withParams:(id)arg2 withModel:(id)arg3 withKeyPath:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)requestGetWithRoute:(id)arg1 withParams:(id)arg2 withPattern:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)requestGetWithRoute:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestGetWithUrl:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestGetWithUrl:(id)arg1 method:(id)arg2 withParams:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setupBlocks;
- (void)cancelAllRequestsWithRoute:(id)arg1;
- (void)cancelAllRequests;
- (id)xy_requestDeleteWithRoute:(id)arg1 withParams:(id)arg2 withKeyPath:(id)arg3 withPattern:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)xy_requestPutWithRoute:(id)arg1 withParams:(id)arg2 withKeyPath:(id)arg3 withPattern:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)xy_requestPostWithRoute:(id)arg1 withParams:(id)arg2 withKeyPath:(id)arg3 withPattern:(id)arg4 mockStub:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)xy_requestPostWithRoute:(id)arg1 withParams:(id)arg2 withKeyPath:(id)arg3 withPattern:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)xy_requestGetWithRoute:(id)arg1 withParams:(id)arg2 withModel:(id)arg3 withModels:(id)arg4 withTypeKey:(id)arg5 withKeyPath:(id)arg6 withPattern:(id)arg7 mockStub:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (id)xy_requestGetWithRoute:(id)arg1 withParams:(id)arg2 withModel:(id)arg3 withModels:(id)arg4 withTypeKey:(id)arg5 withKeyPath:(id)arg6 withPattern:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)xy_requestGetWithUrl:(id)arg1 withParams:(id)arg2 mockStub:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)xy_requestGetWithUrl:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)xy_requestWithUrl:(id)arg1 method:(id)arg2 withParams:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)uploadImageWithRoute:(id)arg1 withParams:(id)arg2 withImages:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)xy_makeDeleteRequest:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)xy_makePutRequest:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)xy_makePostRequest:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)xy_makeGetRequest:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)xy_makeRequest:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)allowSecureConnection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initSessionManager;
- (void)configure;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 operationCount:(long long)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)init;

@end

