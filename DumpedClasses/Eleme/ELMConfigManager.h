//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ELMConfigManager : NSObject
{
}

+ (void)clearAllConfigValue;
+ (id)retrieveValueForKey:(id)arg1 defaultValue:(id)arg2;
+ (long long)retrieveIntegerForkey:(id)arg1 defaultValue:(long long)arg2;
+ (id)retrieveStringForkey:(id)arg1 defaultValue:(id)arg2;
+ (_Bool)retrieveBoolForkey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)retrieveConfigValueWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
+ (id)retrieveConfigValue;
+ (id)sharedManager;
+ (id)retrieveSDKPowerForFramework:(id)arg1;
+ (id)retrieveFrameworkConfigValueForFramework:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
+ (id)retrieveConfigValueForFramework:(id)arg1;
+ (void)registerFrameworkWithName:(id)arg1 version:(id)arg2;
+ (void)sendLogToServer:(id)arg1 content:(id)arg2;
+ (id)getConfigInfoOfCurrentAPPWithKey:(id)arg1 defaultValue:(id)arg2;
+ (void)registerWithFramework:(unsigned long long)arg1 version:(id)arg2;
+ (id)getConfigInfoWithFramework:(unsigned long long)arg1 key:(id)arg2 defaultValue:(id)arg3;
+ (id)getConfigInfoWithFramework:(unsigned long long)arg1;
- (id)systemVersion;
- (id)deviceID;
- (id)buildNumber;
- (id)appVersion;
- (id)platform;
- (id)bundleID;
- (id)requestDictionary;
- (id)configInfo;
- (id)configValue;
- (_Bool)storeConfigInformation:(id)arg1;
- (void)retrieveConfigValueWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)retrieveConfigInfoAsync;
- (id)retrieveConfigValue;
- (id)initPrivate;
- (id)init;
- (id)sdkPowers;
- (_Bool)storeSDKPowers:(id)arg1;
- (id)sdkConfigValues;
- (_Bool)storeSDKConfigValues:(id)arg1;

@end

