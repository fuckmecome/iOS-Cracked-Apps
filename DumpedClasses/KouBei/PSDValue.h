//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSDValue : NSObject
{
    id _weakObject;
    id _object;
}

+ (id)valueWithObject:(id)arg1;
+ (id)valueWithWeakObject:(id)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (void).cxx_destruct;
- (id)objectValue;
- (id)weakObjectValue;

@end

