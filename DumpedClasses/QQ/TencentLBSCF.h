//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, NSString;

@interface TencentLBSCF : NSObject
{
    NSString *_docPath;
    NSString *_path;
    NSMutableArray *_locationArray;
    NSMutableArray *_locations;
    long long _maxSize;
    long long _fakeSize;
    long long _count;
    NSOperationQueue *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long fakeSize; // @synthesize fakeSize=_fakeSize;
@property(nonatomic) long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSMutableArray *locationArray; // @synthesize locationArray=_locationArray;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *docPath; // @synthesize docPath=_docPath;
- (void).cxx_destruct;
- (void)writeLocationToFile;
- (void)cFWithLocation:(id)arg1;
- (void)cFWithLocation:(id)arg1 timestamp:(double)arg2;
- (id)init;

@end

