//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiveUserModel;

@interface HTSLiveAccountService : NSObject
{
    id <HTSLiveAccountServiceDelegate> _delegate;
    LiveUserModel *_loginUser;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LiveUserModel *loginUser; // @synthesize loginUser=_loginUser;
@property(nonatomic) __weak id <HTSLiveAccountServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)clearPersistedAccountUser;
- (_Bool)persistenceAccountUser:(id)arg1;
- (void)requestUnBindPlatform:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestBindPlatform:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentBindedAccount;
- (void)updateLiveAccountUserWithModel:(id)arg1;
- (void)requestLogout:(CDUnknownBlockType)arg1;
- (void)requestLogin:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncLiveAccountUser:(CDUnknownBlockType)arg1;
- (void)checkoutLiveUser;
- (void)checkinLiveUser;
- (_Bool)isCurrentLoginUserWithID:(id)arg1;
- (_Bool)isCurrentLoginUser:(id)arg1;
- (id)currentLoginUser;
- (void)needLogin;
- (_Bool)isLogin;
- (void)start;
- (id)init;
- (void)updateUserProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
