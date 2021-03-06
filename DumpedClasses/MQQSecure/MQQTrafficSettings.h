//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQUserDefaults, NSDate, NSString;

@interface MQQTrafficSettings : NSObject
{
    _Bool _monthAlert;
    long long _cellCostDay;
    long long _cellFreeFlow;
    long long _extendingLastMonthCount;
    long long _lastLeftFlow;
    _Bool _realTimeMonitor;
    _Bool _isSetFlow;
    float _percentToAlert;
    _Bool _hasAlertMyPercent;
    _Bool _hasAlert100;
    _Bool _isAdjustUsedFlow;
    NSDate *_adjustDate;
    long long _adjustUsedFlow;
    NSDate *_lastMonthAdjustDate;
    long long _lastMonthAdjustUsedFlow;
    _Bool _isLastMonthDataComplete;
    long long _adjustDeviationFlow;
    _Bool _hasCheckTrafficsmsValid;
    double _checkMissTimeInterval;
    MQQUserDefaults *_configurationUserDefaults;
    _Bool _guideTrafficTodayInMobileCenter;
    _Bool _guideTrafficTodayInTraffic;
    NSDate *_firstSetDate;
}

+ (id)shareTrafficSettings;
@property(nonatomic) double checkMissTimeInterval; // @synthesize checkMissTimeInterval=_checkMissTimeInterval;
@property(nonatomic) long long adjustDeviationFlow; // @synthesize adjustDeviationFlow=_adjustDeviationFlow;
@property(nonatomic) _Bool isLastMonthDataComplete; // @synthesize isLastMonthDataComplete=_isLastMonthDataComplete;
@property(nonatomic) long long lastMonthAdjustUsedFlow; // @synthesize lastMonthAdjustUsedFlow=_lastMonthAdjustUsedFlow;
@property(retain, nonatomic) NSDate *lastMonthAdjustDate; // @synthesize lastMonthAdjustDate=_lastMonthAdjustDate;
@property(nonatomic) long long adjustUsedFlow; // @synthesize adjustUsedFlow=_adjustUsedFlow;
@property(retain, nonatomic) NSDate *adjustDate; // @synthesize adjustDate=_adjustDate;
@property(nonatomic) _Bool isAdjustUsedFlow; // @synthesize isAdjustUsedFlow=_isAdjustUsedFlow;
@property(nonatomic) _Bool hasAlert100; // @synthesize hasAlert100=_hasAlert100;
@property(nonatomic) _Bool hasAlertMyPercent; // @synthesize hasAlertMyPercent=_hasAlertMyPercent;
@property(nonatomic) float percentToAlert; // @synthesize percentToAlert=_percentToAlert;
@property(retain, nonatomic) NSDate *firstSetDate; // @synthesize firstSetDate=_firstSetDate;
@property(nonatomic) _Bool isSetFlow; // @synthesize isSetFlow=_isSetFlow;
@property(nonatomic) _Bool realTimeMonitor; // @synthesize realTimeMonitor=_realTimeMonitor;
@property(nonatomic) long long lastLeftFlow; // @synthesize lastLeftFlow=_lastLeftFlow;
@property(nonatomic) long long extendingLastMonthCount; // @synthesize extendingLastMonthCount=_extendingLastMonthCount;
@property(nonatomic) long long cellFreeFlow; // @synthesize cellFreeFlow=_cellFreeFlow;
@property(nonatomic) long long cellCostDay; // @synthesize cellCostDay=_cellCostDay;
@property(nonatomic) _Bool monthAlert; // @synthesize monthAlert=_monthAlert;
@property(readonly, nonatomic) long long actualFreeFlow;
- (_Bool)synchronize;
- (void)removeTrafficAlert;
- (void)adjustTrafficAlert:(long long)arg1;
- (void)removeLastMonthAdjust;
- (void)resetLastMonthAdjust;
- (void)removeAdjustUsedFlow;
- (void)scheduleAlert;
- (void)rescheduleLocalNotification;
- (id)notifFireDate:(long long)arg1;
@property(readonly, nonatomic) _Bool extendsLastLeftFlow;
@property(readonly, nonatomic) _Bool canExtendLastLeftFlow;
- (void)cmdSwitchDidUpdate:(id)arg1;
@property(readonly, nonatomic) long long remainCostDay;
- (id)trafficCarrierString;
- (id)trafficLocationString;
@property(nonatomic) NSString *trafficCarrier;
- (void)checkCarrierIsValid;
@property(nonatomic) NSString *trafficLocation;
@property(nonatomic) long long notificationDay;
@property(nonatomic) long long notificationTime;
@property(nonatomic) long long notification;
@property(nonatomic) _Bool notificationService;
- (void)setNotificationSchedule:(long long)arg1 time:(long long)arg2;
- (void)removeOldNotification;
- (void)dealloc;
- (id)init;
@property(nonatomic) _Bool guideTrafficTodayInTraffic;
@property(nonatomic) _Bool guideTrafficTodayInMobileCenter;
- (void)loadConfiguration;

@end

