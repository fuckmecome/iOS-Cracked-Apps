//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMRouteNode;

@interface MMRouteSearchRequest : NSObject
{
    MMRouteNode *_startPoint;
    MMRouteNode *_terminalPoint;
}

@property(retain, nonatomic) MMRouteNode *terminalPoint; // @synthesize terminalPoint=_terminalPoint;
@property(retain, nonatomic) MMRouteNode *startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;

@end

