//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSString;

@interface TBCalendarPlan : NSManagedObject
{
}

+ (id)getDate:(id)arg1;
+ (id)toString:(id)arg1;
+ (id)getClientEvent:(id)arg1;
+ (id)getAlertTime:(id)arg1;
+ (id)getStartTime:(id)arg1;
+ (id)getUserId:(id)arg1;
+ (id)getEventId:(id)arg1;
+ (id)getSourceId:(id)arg1;
- (id)converToUserInfo;
- (_Bool)convertFromDictionary:(id)arg1;
- (id)converToH5Dictionary:(id)arg1;
- (id)converToDictionary;

// Remaining properties
@property(retain, nonatomic) NSDate *alarm_time; // @dynamic alarm_time;
@property(retain, nonatomic) NSString *clientevent; // @dynamic clientevent;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSDate *end_time; // @dynamic end_time;
@property(retain, nonatomic) NSString *event_id; // @dynamic event_id;
@property(retain, nonatomic) NSString *extradata; // @dynamic extradata;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) NSNumber *isallday; // @dynamic isallday;
@property(retain, nonatomic) NSNumber *isdeleted; // @dynamic isdeleted;
@property(retain, nonatomic) NSNumber *iseditable; // @dynamic iseditable;
@property(retain, nonatomic) NSNumber *isrepeat; // @dynamic isrepeat;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *lut; // @dynamic lut;
@property(retain, nonatomic) NSString *oprater; // @dynamic oprater;
@property(retain, nonatomic) NSNumber *remind; // @dynamic remind;
@property(retain, nonatomic) NSString *remindtype; // @dynamic remindtype;
@property(retain, nonatomic) NSString *repeat; // @dynamic repeat;
@property(retain, nonatomic) NSString *source_id; // @dynamic source_id;
@property(retain, nonatomic) NSDate *start_time; // @dynamic start_time;
@property(retain, nonatomic) NSNumber *sync; // @dynamic sync;
@property(retain, nonatomic) NSString *thedate; // @dynamic thedate;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;
@property(retain, nonatomic) NSString *user_id; // @dynamic user_id;

@end

