//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ARTVCSignalingMessage.h"

@class NSArray;

@interface ARTVCICECandidateRemovalMessage : ARTVCSignalingMessage
{
    NSArray *_candidates;
}

+ (id)JSONStringForCandidatesRemove:(id)arg1;
+ (id)JSONDataForCandidatesRemove:(id)arg1;
@property(readonly, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
- (void).cxx_destruct;
- (id)JSONData;
- (id)initWithRemovedCandidates:(id)arg1;

@end

