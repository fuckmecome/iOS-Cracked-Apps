//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTContactManager : NSObject
{
}

+ (id)shareInstance;
- (void)deleteContactWithBizType:(id)arg1 contactInfo:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)saveContactWithBizType:(id)arg1 contactInfo:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchContactsWithBizType:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

