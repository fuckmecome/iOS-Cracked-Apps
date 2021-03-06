//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBDeviceBasedAccount : FBValueObject <NSCopying>
{
    _Bool _hasPin;
    NSString *_accountID;
    NSString *_shortName;
    NSString *_username;
    unsigned long long _accountType;
    NSDictionary *_accountInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(readonly, nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(readonly, nonatomic) _Bool hasPin; // @synthesize hasPin=_hasPin;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)arg1 shortName:(id)arg2 username:(id)arg3 hasPin:(_Bool)arg4 accountType:(unsigned long long)arg5 accountInfo:(id)arg6;

@end

