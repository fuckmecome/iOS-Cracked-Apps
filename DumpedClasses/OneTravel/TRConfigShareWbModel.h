//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface TRConfigShareWbModel : JSONModel
{
    NSString<Optional> *_activityid;
    NSString<Optional> *_detail;
    NSString<Optional> *_title;
    NSString<Optional> *_pic_url;
}

@property(retain, nonatomic) NSString<Optional> *pic_url; // @synthesize pic_url=_pic_url;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString<Optional> *activityid; // @synthesize activityid=_activityid;
- (void).cxx_destruct;

@end

