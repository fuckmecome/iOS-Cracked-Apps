//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OtherNonmemberLoginResponse : CTBusinessBean
{
    NSString *clientId;
    NSString *userID;
    _Bool isMember;
    NSString *authentication;
}

@property(copy, nonatomic) NSString *authentication; // @synthesize authentication;
@property(nonatomic) _Bool isMember; // @synthesize isMember;
@property(copy, nonatomic) NSString *userID; // @synthesize userID;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
