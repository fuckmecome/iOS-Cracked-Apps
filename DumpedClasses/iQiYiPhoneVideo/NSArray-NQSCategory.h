//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (NQSCategory)
- (id)JSONRepresentation;
- (id)reversedArray;
- (id)uniqueObjects;
- (id)mergedArrayWithArray:(id)arg1;
- (_Bool)containsObject:(id)arg1 withSelector:(SEL)arg2;
- (id)objectWithClass:(Class)arg1;
- (id)objectWithValue:(id)arg1 forKey:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)perform:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (void)perform:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)perform:(SEL)arg1 withObject:(id)arg2;
- (void)perform:(SEL)arg1;
@end

