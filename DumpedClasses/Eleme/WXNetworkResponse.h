//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXObject.h"

@class NSDictionary, NSNumber, NSString, WXNetworkResourceTiming;

@interface WXNetworkResponse : WXObject
{
}

+ (id)keysToEncode;
+ (id)networkResponseWithURLResponse:(id)arg1 request:(id)arg2;
- (id)initWithURLResponse:(id)arg1 request:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSNumber *connectionId; // @dynamic connectionId;
@property(retain, nonatomic) NSNumber *connectionReused; // @dynamic connectionReused;
@property(retain, nonatomic) NSNumber *fromDiskCache; // @dynamic fromDiskCache;
@property(retain, nonatomic) NSDictionary *headers; // @dynamic headers;
@property(retain, nonatomic) NSString *headersText; // @dynamic headersText;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @dynamic requestHeaders;
@property(retain, nonatomic) NSString *requestHeadersText; // @dynamic requestHeadersText;
@property(retain, nonatomic) NSNumber *status; // @dynamic status;
@property(retain, nonatomic) NSString *statusText; // @dynamic statusText;
@property(retain, nonatomic) WXNetworkResourceTiming *timing; // @dynamic timing;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
