//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface MQQLaunchAdvertiseOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (_Bool)deleteAdertise:(id)arg1;
- (id)getImageURLInfosWithURLs:(id)arg1;
- (id)advertiseByType:(long long)arg1 advertiseId:(id)arg2;
- (id)keyForAdvertiseId:(id)arg1 advertiseType:(long long)arg2;
- (id)advertiseListByType:(long long)arg1;
- (_Bool)insertOrUpdateAdvertiseList:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

