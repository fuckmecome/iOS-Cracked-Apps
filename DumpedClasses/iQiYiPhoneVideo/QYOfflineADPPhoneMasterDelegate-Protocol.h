//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, QYOfflineADPPhoneMaster;

@protocol QYOfflineADPPhoneMasterDelegate <NSObject>

@optional
- (void)downloadPhoneMasterLimitTipCanDownloadNum:(long long)arg1;
- (void)downloadPhoneMasterGotoLogin:(NSDictionary *)arg1;
- (void)downloadPhoneMasterFilterEpisodesForDownloadEndWithNum:(int)arg1;
- (void)downloadPhoneMasterStatusChange;
- (void)downloadPhoneMaster:(QYOfflineADPPhoneMaster *)arg1 eventDidChanged:(int)arg2;
- (void)downloadPhoneMasterCacheResultByDownload:(int)arg1;
@end

