//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQEKCalendarItemGroup.h"

@class EKReminder, NSArray;

@interface MQQEKReminderGroup : MQQEKCalendarItemGroup
{
}

+ (id)reminderGroupsFromReminders:(id)arg1;
@property(readonly, nonatomic) EKReminder *representativeReminder;
@property(readonly, nonatomic) NSArray *reminders;
- (id)initWithReminders:(id)arg1;
- (id)endDate;
- (id)startDate;
- (void)dealloc;

@end

