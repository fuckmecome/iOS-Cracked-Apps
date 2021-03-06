//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

@class AppMonitorMetric, NSMutableDictionary;

@interface AppMonitorStatEvent : AppMonitorEvent
{
    int lock;
    AppMonitorMetric *_metric;
    NSMutableDictionary *_dimensionValueSet_x_entity_values;
}

@property(retain, nonatomic) NSMutableDictionary *dimensionValueSet_x_entity_values; // @synthesize dimensionValueSet_x_entity_values=_dimensionValueSet_x_entity_values;
@property(retain, nonatomic) AppMonitorMetric *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (id)jsonDict;
- (void)commitWithDimensionValueSet:(id)arg1 measureValueSet:(id)arg2;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

