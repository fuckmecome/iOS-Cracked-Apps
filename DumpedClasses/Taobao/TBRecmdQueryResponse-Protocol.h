//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString;

@protocol TBRecmdQueryResponse <NSObject>
- (long long)pageTotal;
- (long long)itemLastCount;
- (_Bool)isEndPage;
- (NSError *)error;
- (NSString *)pvid;
- (NSString *)scm;
- (_Bool)isEmpty;
- (NSString *)currentTime;
- (unsigned long long)totalItem;
- (NSArray *)cardResultArray;
- (NSArray *)recommandResultArray;
- (NSDictionary *)resultDic;
- (NSString *)errorCode;
- (NSString *)errorMsg;
@end

