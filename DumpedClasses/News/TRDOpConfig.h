//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TRDTraceGenenrate;

@interface TRDOpConfig : NSObject
{
    _Bool _logSwitch;
    _Bool _logDestroy;
    _Bool _proxy;
    long long _level;
    NSDictionary *_module;
    long long _logServerLevelTime;
    double _logServerLevelEndTime;
    NSString *_traceId;
    TRDTraceGenenrate *_cTraceGenenrate;
    NSString *_rootPath;
    NSString *_networkType;
    NSString *_deviceId;
    NSString *_deviceModule;
    NSString *_appInfo;
    NSString *_userNick;
    NSString *_appVersion;
    NSString *_version;
    NSString *_appKey;
    NSString *_carrier;
    NSString *_brand;
    NSString *_os;
}

+ (id)transferLevelToPrefix:(long long)arg1;
+ (long long)transferLevelStrToEnum:(id)arg1;
@property(nonatomic) _Bool proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *deviceModule; // @synthesize deviceModule=_deviceModule;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) TRDTraceGenenrate *cTraceGenenrate; // @synthesize cTraceGenenrate=_cTraceGenenrate;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) double logServerLevelEndTime; // @synthesize logServerLevelEndTime=_logServerLevelEndTime;
@property(nonatomic) long long logServerLevelTime; // @synthesize logServerLevelTime=_logServerLevelTime;
@property(nonatomic) _Bool logDestroy; // @synthesize logDestroy=_logDestroy;
@property(nonatomic) _Bool logSwitch; // @synthesize logSwitch=_logSwitch;
@property(retain, nonatomic) NSDictionary *module; // @synthesize module=_module;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (_Bool)checkModuleIsLogTurnOn:(id)arg1;
- (id)modulesFromConstStringToModules:(id)arg1;
- (long long)levelFromConstStringToLevel:(id)arg1;
- (void)initConfigParamToRuntimePerperty:(id)arg1;
- (void)saveConfigToFile;
- (id)getDefaultConfig;
- (void)initConfigFromFile;
- (id)trdRootPath;
- (id)trdConfigFilePath;
- (id)logDirectory;
- (void)setInfo:(id)arg1;

@end

