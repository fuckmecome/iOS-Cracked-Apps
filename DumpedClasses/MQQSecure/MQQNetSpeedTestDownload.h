//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQNetSpeedTestBase.h"

#import "MQQWiFiTestIpAddressHelperDelegate-Protocol.h"
#import "MQQWiFiTestPingDelegate-Protocol.h"

@class MQQWiFiTestIpAddressHelper, MQQWiFiTestPing, NSError, NSMutableData, NSObject, NSString, NSURLConnection;
@protocol OS_dispatch_queue;

@interface MQQNetSpeedTestDownload : MQQNetSpeedTestBase <MQQWiFiTestPingDelegate, MQQWiFiTestIpAddressHelperDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _retryCount;
    double _startTime;
    double _pingTimeInterval;
    double _userStartTime;
    NSMutableData *_receivedData;
    NSURLConnection *_downloadConnection;
    MQQWiFiTestPing *_ping;
    MQQWiFiTestIpAddressHelper *_ipHelper;
    NSString *_urlString;
    NSString *_desIpAddress;
    NSError *_DNSError;
    NSError *_pingError;
}

@property(retain, nonatomic) NSError *pingError; // @synthesize pingError=_pingError;
@property(retain, nonatomic) NSError *DNSError; // @synthesize DNSError=_DNSError;
@property(copy, nonatomic) NSString *desIpAddress; // @synthesize desIpAddress=_desIpAddress;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) MQQWiFiTestIpAddressHelper *ipHelper; // @synthesize ipHelper=_ipHelper;
@property(retain, nonatomic) MQQWiFiTestPing *ping; // @synthesize ping=_ping;
@property(retain, nonatomic) NSURLConnection *downloadConnection; // @synthesize downloadConnection=_downloadConnection;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
- (void)ipAddressHelper:(id)arg1 didResolutionFailed:(id)arg2;
- (void)ipAddressHelper:(id)arg1 resolutionData:(id)arg2;
- (void)ping:(id)arg1 result:(_Bool)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)startWithTimeInterval:(double)arg1 totalTime:(double)arg2;
- (void)start;
- (void)onSTUserAction:(id)arg1 error:(id)arg2 canDownload:(_Bool)arg3;
- (void)updateDownloadTestTraffic;
- (void)initDownloadTestTraffic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

