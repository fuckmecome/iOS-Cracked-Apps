//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class NSString;

@interface QLStarCommentModel : QLPageDataBaseModel
{
    NSString *_requestVid;
}

@property(copy, nonatomic) NSString *requestVid; // @synthesize requestVid=_requestVid;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

@end
