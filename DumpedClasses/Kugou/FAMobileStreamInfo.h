//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray;

@interface FAMobileStreamInfo : FAModel
{
    int _sid;
    int _age;
    NSArray *_streamAddr;
    long long _status;
}

@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) int sid; // @synthesize sid=_sid;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *streamAddr; // @synthesize streamAddr=_streamAddr;
- (void).cxx_destruct;

@end

