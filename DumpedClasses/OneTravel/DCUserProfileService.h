//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseService.h"

@class DBCityConfigModel, DBProfileModel, NSString;

@interface DCUserProfileService : DCBaseService
{
    _Bool _isCityConfigFromServer;
    _Bool _shouldUpdateCityConfig;
    int _currentUserRole;
    DBProfileModel *_profile;
}

@property(nonatomic) _Bool shouldUpdateCityConfig; // @synthesize shouldUpdateCityConfig=_shouldUpdateCityConfig;
@property(nonatomic) _Bool isCityConfigFromServer; // @synthesize isCityConfigFromServer=_isCityConfigFromServer;
@property(copy, nonatomic) DBProfileModel *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)userChangeLanguage;
- (void)applicationDidActive:(id)arg1;
- (void)onePersonalInfoDidChanage:(id)arg1;
- (void)personalInfoDidChanage:(id)arg1;
- (void)logout:(id)arg1;
- (void)locationUpdated:(id)arg1;
- (void)loginSuccess:(id)arg1;
- (void)updateStatuesBarColor;
- (void)updateCityConfig;
- (void)checkCityConfig:(_Bool)arg1;
- (void)updateProfileInfo:(_Bool)arg1;
- (void)serviceDidLoad;
- (id)init;
@property(nonatomic) int currentUserRole; // @synthesize currentUserRole=_currentUserRole;
@property(readonly, copy, nonatomic) NSString *userID;
@property(readonly, nonatomic) DBCityConfigModel *currentCityConfig;
- (void)processAPNsMessage:(id)arg1;
- (void)handleAPNsMessage:(id)arg1;
- (void)registerAPNSMsg;
- (void)handleAppURL:(id)arg1;
- (void)addHttpUrlPattern;
- (void)steupURLObserver;
- (void)handleUserActionDDIMEvent:(id)arg1;
- (void)handleUserActionMyProfile;
- (void)handleUserActionWithUserHomePage;

@end

