//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ISecurityBodyComponent;

@interface TBSecretMgr : NSObject
{
    int _environmentID;
    id <ISecurityBodyComponent> _sbComponent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <ISecurityBodyComponent> sbComponent; // @synthesize sbComponent=_sbComponent;
@property int environmentID; // @synthesize environmentID=_environmentID;
- (void).cxx_destruct;
- (_Bool)checkMethodSecurity:(id)arg1 SELName:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForkey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)getAppKeyWithIndex:(long long)arg1;
- (_Bool)isSimulator;
- (_Bool)isRoot;
- (void)dataReceive:(id)arg1;
- (id)secBodyData:(id)arg1;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)getTopSignWithParam:(id)arg1;
- (id)getTopTokenWithUser:(id)arg1 TimeStamp:(id)arg2;
- (id)getAgooSignWithInput:(id)arg1 appkey:(id)arg2;
- (id)getTmallSignWithInput:(id)arg1 appkey:(id)arg2;
- (id)getLaiwangSignWithInput:(id)arg1 encryptedKey:(id)arg2 appkeyIndex:(id)arg3;
- (id)getLaiwangSignWithInput:(id)arg1 appkeyIndex:(id)arg2;
- (id)getMtopV4RespSignWithInput:(id)arg1;
- (id)getMtopV4SignWithEcode:(id)arg1 data:(id)arg2 timestamp:(id)arg3 api:(id)arg4 version:(id)arg5 sid:(id)arg6 ttid:(id)arg7 deviceid:(id)arg8 latitude:(id)arg9 longitude:(id)arg10;
- (id)getMtopSignWithParm:(id)arg1 Api:(id)arg2 Version:(id)arg3 Ecode:(id)arg4 Imei:(id)arg5 Imsi:(id)arg6 TimeStamp:(id)arg7;
- (id)getSecretParam:(id)arg1;
- (id)getAppKeyWithIos;
- (id)getVersion;
- (int)TBGetAPIEnvironment;
- (void)TBSetAPIEnvironment:(int)arg1;

@end

