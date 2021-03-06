//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MCDataSourceManager : NSObject
{
    struct _opaque_pthread_rwlock_t _dataSourceRWLock;
    NSMutableDictionary *_dataSourceDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *dataSourceDict; // @synthesize dataSourceDict=_dataSourceDict;
- (void).cxx_destruct;
- (void)reset;
- (void)start;
- (id)getDataSourceByBizKey:(id)arg1 protocol:(id)arg2;
- (id)getDataSourceByBizKey:(id)arg1 protocol:(id)arg2 type:(int)arg3;
- (void)registerDataSource:(id)arg1;
- (void)registerDataSource:(id)arg1 type:(int)arg2;
- (void)_registerDataSourceWithDataSource:(id)arg1 bizKey:(id)arg2 protocol:(id)arg3;
- (void)dealloc;
- (id)init;

@end

