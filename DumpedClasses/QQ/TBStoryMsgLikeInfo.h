//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBStoryMsgLikeInfo : NSObject
{
    _Bool _isBigV;
    unsigned int _likeTime;
    unsigned int _type;
    unsigned long long _likeUid;
    NSString *_likeUnionId;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *likeUnionId; // @synthesize likeUnionId=_likeUnionId;
@property(nonatomic) _Bool isBigV; // @synthesize isBigV=_isBigV;
@property(nonatomic) unsigned int likeTime; // @synthesize likeTime=_likeTime;
@property(nonatomic) unsigned long long likeUid; // @synthesize likeUid=_likeUid;
- (void)dealloc;

@end

