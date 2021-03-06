//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQHotspotConfiguratorOperation.h"

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQWiFiPasswordListRequest, NSArray, NSString;

@interface MQQHotspotConfiguratorServerOperation : MQQHotspotConfiguratorOperation <MQQSharkRequestDelegate>
{
    NSArray *_requestWiFiList;
    NSArray *_responseWiFiList;
    MQQWiFiPasswordListRequest *_wifiListRequest;
}

@property(retain) MQQWiFiPasswordListRequest *wifiListRequest; // @synthesize wifiListRequest=_wifiListRequest;
@property(copy) NSArray *responseWiFiList; // @synthesize responseWiFiList=_responseWiFiList;
@property(copy) NSArray *requestWiFiList; // @synthesize requestWiFiList=_requestWiFiList;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)cancelRequesting;
- (_Bool)startRequesting;
- (_Bool)networkAvailable;
- (void)configureWithResponseWifiList:(id)arg1;
- (void)cancel;
- (void)main;
- (void)start;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

