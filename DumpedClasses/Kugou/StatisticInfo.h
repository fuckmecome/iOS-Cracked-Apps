//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StatisticInfo : NSObject
{
    NSString *plateFlag;
    NSString *channelFlag;
    NSString *version;
    NSString *udid;
    NSString *networkType;
    NSString *encryptCode;
    NSString *locID;
    NSString *cellID;
    NSString *sysVer;
    int screenWidth;
    int screenHeight;
    NSString *_idfa;
}

+ (id)skinInfo;
+ (id)builtVersion;
+ (int)screenHeight;
+ (int)screenWidth;
+ (id)cellID;
+ (id)locID;
+ (id)encryptCode;
+ (id)networkType2;
+ (id)networkType;
+ (id)getPreferredLanguage;
+ (id)deviceModelName;
+ (id)phoneModel;
+ (id)idfa;
+ (id)sysVer;
+ (id)udid;
+ (_Bool)isAppStoreChannel;
+ (id)channelFlag;
+ (void)initChannelCode;
+ (id)readChannelCode;
+ (id)urlplat;
+ (id)plateFlag;
+ (id)appVersion;
+ (id)defaultInstance;
@property(retain, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(retain, nonatomic) NSString *sysVer; // @synthesize sysVer;
@property int screenHeight; // @synthesize screenHeight;
@property int screenWidth; // @synthesize screenWidth;
@property(retain, nonatomic) NSString *cellID; // @synthesize cellID;
@property(retain, nonatomic) NSString *locID; // @synthesize locID;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType;
@property(retain, nonatomic) NSString *udid; // @synthesize udid;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *channelFlag; // @synthesize channelFlag;
@property(retain, nonatomic) NSString *plateFlag; // @synthesize plateFlag;
- (double)usedCPU;
- (double)availableMemory;
- (double)usedMemory;
- (void)dealloc;
- (void)appUdidInit;
- (id)init;

@end

