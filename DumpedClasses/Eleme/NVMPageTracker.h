//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFNetworkReachabilityManager, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURLSession, NVMFileBean;

@interface NVMPageTracker : NSObject
{
    _Bool _shouldSendToProduction;
    _Bool _enableCacheRetry;
    _Bool _networkReachable;
    _Bool _enableAPMChannel;
    CDUnknownBlockType _extraHeadersGenerator;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_retryQueue;
    NSObject<OS_dispatch_queue> *_writeCacheQueue;
    NSObject<OS_dispatch_source> *_timer;
    NVMFileBean *_fileBean;
    AFNetworkReachabilityManager *_reachability;
}

+ (id)sharedInstance;
+ (void)load;
@property(nonatomic) _Bool enableAPMChannel; // @synthesize enableAPMChannel=_enableAPMChannel;
@property(nonatomic) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
@property(nonatomic) _Bool enableCacheRetry; // @synthesize enableCacheRetry=_enableCacheRetry;
@property(retain, nonatomic) AFNetworkReachabilityManager *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NVMFileBean *fileBean; // @synthesize fileBean=_fileBean;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeCacheQueue; // @synthesize writeCacheQueue=_writeCacheQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType extraHeadersGenerator; // @synthesize extraHeadersGenerator=_extraHeadersGenerator;
@property(nonatomic) _Bool shouldSendToProduction; // @synthesize shouldSendToProduction=_shouldSendToProduction;
- (void).cxx_destruct;
- (id)pageDataForPageName:(id)arg1 loadedInInterval:(double)arg2 succeed:(_Bool)arg3;
- (id)metadata;
- (void)trackWithParams:(id)arg1;
- (void)trackPageNamed:(id)arg1 loadedInInterval:(double)arg2 succeed:(_Bool)arg3;
- (id)requestFromQueryParams:(id)arg1;
- (void)configureSession;
- (id)encodedHTTPHeaderFields;
- (id)baseURLString;
- (void)startReachabilityNotify;
- (void)setupTimer;
- (id)init;

@end
