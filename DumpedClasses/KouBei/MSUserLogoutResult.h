//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSUserLogoutResult : NSObject
{
    int _resultStatus;
    NSString *_memo;
    NSString *_token;
    NSString *_tokenExpireTime;
}

@property(retain, nonatomic) NSString *tokenExpireTime; // @synthesize tokenExpireTime=_tokenExpireTime;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) int resultStatus; // @synthesize resultStatus=_resultStatus;
- (void).cxx_destruct;

@end

