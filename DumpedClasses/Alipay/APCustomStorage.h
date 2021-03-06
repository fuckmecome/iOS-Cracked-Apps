//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APDAOProxyRouterDelegate.h"

@class APBusinessPreferences, APDAOProxyRouter, NSString;

@interface APCustomStorage : NSObject <APDAOProxyRouterDelegate>
{
    NSString *_identifier;
    APBusinessPreferences *_commonPreferences;
    APBusinessPreferences *_userPreferences;
    _Bool _commonWillLoadNotified;
    _Bool _userWillLoadNotified;
    NSString *_path;
    APDAOProxyRouter *_commonProxy;
    APDAOProxyRouter *_userProxy;
}

+ (id)storageInDocumentsWithName:(id)arg1;
+ (void)postStorageEvent:(unsigned long long)arg1 forStorage:(id)arg2 withArguments:(id)arg3;
+ (void)setEventListener:(CDUnknownBlockType)arg1 forStorageInDocumentsWithName:(id)arg2;
@property(retain, nonatomic) APDAOProxyRouter *userProxy; // @synthesize userProxy=_userProxy;
@property(retain, nonatomic) APDAOProxyRouter *commonProxy; // @synthesize commonProxy=_commonProxy;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)userDatabaseProxy;
- (id)commonDatabaseProxy;
- (id)daoWithPath:(id)arg1 userDependent:(_Bool)arg2 protocol:(id)arg3;
- (void)didReleaseUserPreferences:(id)arg1;
- (void)closeUserPreferences;
- (id)userPreferences;
- (id)commonPreferences;
- (void)prepareUserPreferences;
- (void)prepareCommonPreferences;
- (id)filePathWithName:(id)arg1;
- (void)currentUserUpdated:(id)arg1;
- (void)reset;
- (void)dealloc;
- (void)setup;
- (id)initWithPath:(id)arg1 identifier:(id)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

