//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface TRWanliuActivityModel : JSONModel
{
    NSString<Optional> *_countdown;
    NSString<Optional> *_countdown_time;
    NSString<Optional> *_countdown_msg;
    NSString<Optional> *_change_time;
    NSString<Optional> *_cancel_countdown_req;
}

@property(retain, nonatomic) NSString<Optional> *cancel_countdown_req; // @synthesize cancel_countdown_req=_cancel_countdown_req;
@property(retain, nonatomic) NSString<Optional> *change_time; // @synthesize change_time=_change_time;
@property(retain, nonatomic) NSString<Optional> *countdown_msg; // @synthesize countdown_msg=_countdown_msg;
@property(retain, nonatomic) NSString<Optional> *countdown_time; // @synthesize countdown_time=_countdown_time;
@property(retain, nonatomic) NSString<Optional> *countdown; // @synthesize countdown=_countdown;
- (void).cxx_destruct;

@end

