//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTConnectionPool : NSObject
{
    int _capacity;
    NSMutableArray *_connections;
}

@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(nonatomic) int capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)closeAllConnection;
- (void)returnConnection:(id)arg1 state:(long long)arg2;
- (id)idleConnection;
- (id)allConnections;
- (id)init;

@end

