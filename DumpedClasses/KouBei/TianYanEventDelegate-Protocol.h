//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol TianYanEventDelegate

@optional
- (void)onCheckMemoryEndPerTime;
- (void)onUnitAppLaunchMonitorEnd;
- (void)onUnitAppLaunchMonitorBegin;
- (void)onLagMonitorMark;
- (void)onFPSEnterBgWithFgTime:(double)arg1;
- (void)onFPSEnd;
- (void)onFPSEnterFg;
- (void)onFPSLagHappen:(double)arg1;
- (void)onFPSBegin;
@end

