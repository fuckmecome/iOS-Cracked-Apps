//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBExpandingDrawerView, NSString;

@protocol FBExpandingDrawerViewDelegate <NSObject>
- (_Bool)canShowStatusBar;
- (NSString *)analyticsModule;
- (void)expandingDrawerViewDidClose:(FBExpandingDrawerView *)arg1 analyticsTriggerType:(NSString *)arg2 analyticsLastOpenedState:(NSString *)arg3;
- (void)expandingDrawerViewDidOpen:(FBExpandingDrawerView *)arg1 analyticsTriggerType:(NSString *)arg2;
@end

