//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFStockAcountModel : NSObject
{
    _Bool _enable;
    NSString *_instId;
    NSString *_name;
    NSString *_fullName;
    NSString *_describe;
    NSString *_logo;
    NSString *_origin;
    NSString *_logonAccount;
    NSString *_enableDesc;
}

@property(copy, nonatomic) NSString *enableDesc; // @synthesize enableDesc=_enableDesc;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *logonAccount; // @synthesize logonAccount=_logonAccount;
@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *instId; // @synthesize instId=_instId;
- (void).cxx_destruct;
- (void)setValuesWithRpcModel:(id)arg1;

@end

