//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QMDateComponents : NSObject
{
    long long _timeInterval;
    struct tm _cTime;
}

@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) struct tm cTime; // @synthesize cTime=_cTime;
- (id)description;
- (id)hashOfDay;
- (long long)weekday;
- (long long)sec;
- (long long)min;
- (long long)hour;
- (long long)day;
- (long long)month;
- (long long)year;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithDate:(id)arg1;
- (_Bool)sameYearWith:(id)arg1;
- (_Bool)sameDayWith:(id)arg1;

@end
