//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSNumber, NSString;

@interface ESPEntryDeliveryInfo : NVMModel
{
    NSString *_name;
    NSNumber *_times;
    NSString *_expireInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *expireInfo; // @synthesize expireInfo=_expireInfo;
@property(retain, nonatomic) NSNumber *times; // @synthesize times=_times;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

