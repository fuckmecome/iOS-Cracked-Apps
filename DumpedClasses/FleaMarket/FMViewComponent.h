//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMComponent.h"

@class FMQueueViewComponent;

@interface FMViewComponent : FMComponent
{
    Class _viewClass;
}

@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
- (void).cxx_destruct;
- (void)deleteMyself;
- (id)getHeightCache;
- (void)setHeightCache:(id)arg1;
- (void)prepareForShow;
@property(readonly, nonatomic) __weak FMQueueViewComponent *queueViewComponent;

@end

