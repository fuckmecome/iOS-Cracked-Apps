//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPeripheralManagerDelegate.h"
#import "ONEAppDelegateStoreDelegate.h"

@class CBMutableCharacteristic, CBMutableService, CBPeripheralManager, NSData, NSString;

@interface ONEAndriodWear : NSObject <CBPeripheralManagerDelegate, ONEAppDelegateStoreDelegate>
{
    CBPeripheralManager *peripheralManager;
    CBMutableService *service;
    CBMutableCharacteristic *characteristic;
    NSData *dataToSend;
    long long sendDataIndex;
    double lastRequestTime;
}

+ (id)sharedInstance;
+ (void)registerWear;
- (void).cxx_destruct;
- (_Bool)application_delegate:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)createPeripheralManager;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)registerService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

