//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SNAppUpdateQueue : NSObject
{
    double _lastMarkError;
    NSString *_markUpdatePackage;
    NSMutableArray *_tasks;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSString *markUpdatePackage; // @synthesize markUpdatePackage=_markUpdatePackage;
@property(nonatomic) double lastMarkError; // @synthesize lastMarkError=_lastMarkError;
- (void).cxx_destruct;
- (void)cleanRubishFile;
- (void)cancelTaskIds:(id)arg1;
- (void)cancelAll;
- (void)addTask:(id)arg1;
- (void)removeTasksWithTaskId:(id)arg1;
- (void)postNotificationWithTaskId:(id)arg1;
- (void)runTasks;
- (void)dropAppTask:(id)arg1;
- (id)init;

@end

