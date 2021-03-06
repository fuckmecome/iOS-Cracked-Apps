//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TSCENTERDataReportRequest : NSObject
{
    NSString *_bizType;
    NSString *_rpcVersion;
    NSString *_os;
    NSDictionary *_bizData;
    NSDictionary *_deviceData;
}

+ (Class)deviceDataElementClass;
+ (Class)bizDataElementClass;
@property(retain, nonatomic) NSDictionary *deviceData; // @synthesize deviceData=_deviceData;
@property(retain, nonatomic) NSDictionary *bizData; // @synthesize bizData=_bizData;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *rpcVersion; // @synthesize rpcVersion=_rpcVersion;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end

