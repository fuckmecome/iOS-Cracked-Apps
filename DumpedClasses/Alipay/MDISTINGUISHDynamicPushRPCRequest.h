//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDISTINGUISHDynamicPushRPCRequest : NSObject
{
    int _netEnvironment;
    NSString *_deviceID;
    NSString *_userID;
    NSString *_clientVersion;
    NSString *_clientPlatform;
    NSArray *_dynamicResourceInfoList;
}

+ (Class)dynamicResourceInfoListElementClass;
@property(retain, nonatomic) NSArray *dynamicResourceInfoList; // @synthesize dynamicResourceInfoList=_dynamicResourceInfoList;
@property(nonatomic) int netEnvironment; // @synthesize netEnvironment=_netEnvironment;
@property(retain, nonatomic) NSString *clientPlatform; // @synthesize clientPlatform=_clientPlatform;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;

@end

