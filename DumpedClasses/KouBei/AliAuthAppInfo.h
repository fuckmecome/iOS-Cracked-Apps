//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AliAuthAppInfo : NSObject
{
    NSString *_productId;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_appKey;
    NSString *_appID;
    NSString *_clientType;
    NSString *_channel;
    NSString *_appType;
    NSString *_userAgent;
}

@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

