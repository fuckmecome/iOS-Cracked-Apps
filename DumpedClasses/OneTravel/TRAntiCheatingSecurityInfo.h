//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMAccelerometerData, CMGyroData, CMMotionManager, NSMutableDictionary, NSOperationQueue, NSString;

@interface TRAntiCheatingSecurityInfo : NSObject
{
    int _cmd_type;
    int _cmd_id;
    NSMutableDictionary *_securityInfoDict;
    CMMotionManager *_motionManager;
    CMAccelerometerData *_accelerometerData;
    CMGyroData *_gyroData;
    double _longitude;
    double _latitude;
    NSString *_token;
    NSString *_imei;
    NSMutableDictionary *_paramsDic;
    double _lastUpdateDataTime;
    NSOperationQueue *_antiCheatingQueue;
}

+ (void)reportDIDSecurityInfoByToken:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 cmd_type:(int)arg4 cmd_id:(int)arg5 imei:(id)arg6;
+ (id)infoManager;
@property(retain, nonatomic) NSOperationQueue *antiCheatingQueue; // @synthesize antiCheatingQueue=_antiCheatingQueue;
@property(nonatomic) double lastUpdateDataTime; // @synthesize lastUpdateDataTime=_lastUpdateDataTime;
@property(retain, nonatomic) NSMutableDictionary *paramsDic; // @synthesize paramsDic=_paramsDic;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) int cmd_id; // @synthesize cmd_id=_cmd_id;
@property(nonatomic) int cmd_type; // @synthesize cmd_type=_cmd_type;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) CMGyroData *gyroData; // @synthesize gyroData=_gyroData;
@property(retain, nonatomic) CMAccelerometerData *accelerometerData; // @synthesize accelerometerData=_accelerometerData;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSMutableDictionary *securityInfoDict; // @synthesize securityInfoDict=_securityInfoDict;
- (void).cxx_destruct;
- (void)uploadInfo:(id)arg1;
- (id)carrier;
- (void)Gyroscope;
- (void)AccelerometerSensor;
- (id)WifiName;
- (id)network;
- (_Bool)isJailbroken;
- (id)deviceApMac;
- (id)BundleIdentifier;
- (id)appName;
- (id)appVersion;
- (id)systemVersion;
- (id)hardwareDescription;
- (id)hardwareString;
- (_Bool)isStringEmpty:(id)arg1;
- (void)dataHandle;
- (id)init;

@end

