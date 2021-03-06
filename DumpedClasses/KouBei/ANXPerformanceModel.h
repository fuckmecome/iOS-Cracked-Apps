//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBaseLogModel.h"

#import "ANXPerformance-Protocol.h"

@class NSString;

@interface ANXPerformanceModel : ANXBaseLogModel <ANXPerformance>
{
    NSString *type;
    NSString *code;
    NSString *value;
    NSString *message;
    NSString *time;
}

@property(copy, nonatomic) NSString *time; // @synthesize time;
@property(copy, nonatomic) NSString *message; // @synthesize message;
@property(copy, nonatomic) NSString *value; // @synthesize value;
@property(copy, nonatomic) NSString *code; // @synthesize code;
@property(copy, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (id)childModelContents;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

