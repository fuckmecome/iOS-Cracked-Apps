//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWWeiXinCard : GWObject
{
    NSString *_duration;
    NSString *_ticket_class;
    NSString *_code;
    NSString *_show_time;
    NSString *_card_id;
    NSString *_screening_room;
    NSString *_seat_number;
    NSString *_cardExt;
}

@property(copy, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(copy, nonatomic) NSString *seat_number; // @synthesize seat_number=_seat_number;
@property(copy, nonatomic) NSString *screening_room; // @synthesize screening_room=_screening_room;
@property(copy, nonatomic) NSString *card_id; // @synthesize card_id=_card_id;
@property(copy, nonatomic) NSString *show_time; // @synthesize show_time=_show_time;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *ticket_class; // @synthesize ticket_class=_ticket_class;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
- (void).cxx_destruct;

@end

