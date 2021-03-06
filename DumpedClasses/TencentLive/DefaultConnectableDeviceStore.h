//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ConnectableDeviceStore.h"

@class NSDictionary, NSFileManager, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface DefaultConnectableDeviceStore : NSObject <ConnectableDeviceStore>
{
    NSMutableDictionary *_activeDevices;
    NSMutableDictionary *_storedDevices;
    NSString *_deviceStoreFilename;
    NSFileManager *_fileManager;
    NSDictionary *_deviceStore;
    _Bool _waitToWrite;
    NSObject<OS_dispatch_queue> *_deviceStoreQueue;
    int _version;
    double _maxStoreDuration;
    double _created;
    double _updated;
}

@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) double updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) double created; // @synthesize created=_created;
@property(nonatomic) double maxStoreDuration; // @synthesize maxStoreDuration=_maxStoreDuration;
- (void).cxx_destruct;
- (void)deleteOldUnusedDevices;
- (id)jsonRepresentationForDevice:(id)arg1;
- (void)writeStoreToDisk;
- (id)storedDeviceForUUID:(id)arg1;
- (id)activeDeviceForUUID:(id)arg1;
- (id)serviceConfigForUUID:(id)arg1;
- (id)deviceForId:(id)arg1;
@property(readonly, nonatomic) NSDictionary *storedDevices;
- (void)updateDevice:(id)arg1;
- (void)removeAll;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)store;
- (void)load;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

