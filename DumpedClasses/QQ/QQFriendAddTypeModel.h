//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQFriendAddTypeModel : NSObject
{
    _Bool _isFromNearFile;
    int addTypeSourceID;
    int addTypeSourceSubID;
    NSString *addTypeGroupName;
    NSString *addTypeGroupNickName;
    long long groupCode;
}

@property(nonatomic) _Bool isFromNearFile; // @synthesize isFromNearFile=_isFromNearFile;
@property(nonatomic) long long groupCode; // @synthesize groupCode;
@property(retain, nonatomic) NSString *addTypeGroupNickName; // @synthesize addTypeGroupNickName;
@property(retain, nonatomic) NSString *addTypeGroupName; // @synthesize addTypeGroupName;
@property(nonatomic) int addTypeSourceSubID; // @synthesize addTypeSourceSubID;
@property(nonatomic) int addTypeSourceID; // @synthesize addTypeSourceID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceID:(int)arg1 sourceSubId:(int)arg2;

@end

