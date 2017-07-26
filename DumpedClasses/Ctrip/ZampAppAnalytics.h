//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZampAppAnalytics : NSObject
{
}

+ (_Bool)getLogStatus;
+ (void)setLogStatus:(_Bool)arg1;
+ (_Bool)requestUrl:(id)arg1;
+ (void)insertNewSendErrorEventToDB:(id)arg1;
+ (_Bool)sendAnalyticsDataToHttps:(id)arg1 Http:(id)arg2;
+ (_Bool)sendAnalyticsDataToUrl:(id)arg1;
+ (id)encodeURIComponent:(id)arg1;
+ (void)appendParams:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getSessionId;
+ (void)updateSessionValidationTime;
+ (void)countAppBoot;
+ (void)sessionInit;
+ (id)getCurrentTime;
+ (id)getSystemLanguage;
+ (id)getCarrier;
+ (id)getSDKVersion;
+ (id)getAppVersion;
+ (id)getMobileNetworkIPAddress;
+ (id)getNetworkType;
+ (id)getOS;
+ (id)getDevice;
+ (id)getIDFAString;
+ (void)onAppLaunch:(id)arg1 channelId:(id)arg2;

@end
