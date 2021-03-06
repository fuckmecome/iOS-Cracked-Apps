//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GPUFilterManager : NSObject
{
    struct glFilterChain *filterChain;
}

- (id)getVersion;
- (unsigned int)processFilters:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)arrangeFilters;
- (void)removeAllFilter;
- (void)removeFilter:(id)arg1;
- (void)insertFilter:(id)arg1 frontFront:(id)arg2 behindFilter:(id)arg3;
- (void)replaceFilter:(id)arg1 whithFilter:(id)arg2;
- (void)addFilter:(id)arg1;
- (void)dealloc;
- (id)init;

@end

