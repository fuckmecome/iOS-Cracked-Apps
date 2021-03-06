//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WeAppComponent;

@interface WeAppEventManager : NSObject
{
    NSMutableArray *_events;
    WeAppComponent *_weAppComponent;
}

+ (Class)getEventClassWithEventItem:(id)arg1;
+ (_Bool)executeWithWeAppComponent:(id)arg1 eventItem:(id)arg2;
+ (_Bool)registerExecuteWithWeAppEventExecute:(Class)arg1 actionType:(id)arg2;
@property(nonatomic) __weak WeAppComponent *weAppComponent; // @synthesize weAppComponent=_weAppComponent;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configActionManager;
- (void)doEventWithType:(id)arg1;
- (void)doEvent:(id)arg1;
- (void)doEvent;
- (void)updateEventExectue:(id)arg1 EventItem:(id)arg2;
- (void)updateEventItems:(id)arg1;
- (void)addEventItem:(id)arg1;
- (id)initWithWeAppComponent:(id)arg1 eventItems:(id)arg2;
- (id)initWithWeAppComponent:(id)arg1 eventItem:(id)arg2;
- (id)initWithWeAppComponent:(id)arg1;

@end

