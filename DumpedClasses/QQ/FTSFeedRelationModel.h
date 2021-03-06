//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellModel.h"

@class NSString;

@interface FTSFeedRelationModel : FTSBaseCellModel
{
    int _xo;
    NSString *_ftsUid;
    long long _ftsRelationType;
    NSString *_ftsMajorText;
    NSString *_ftsSubText;
    NSString *_ftsSummary;
    long long _ftsRdmMatchType;
    _Bool _ftsRdmIsPinyinMatch;
    _Bool _aiEditDistance;
    NSString *_ftsTypeText;
    NSString *_aiEditTarget;
    unsigned long long _ftsRdmWeightValue;
    long long _ftsRdmRecentSessionCount;
}

@property(nonatomic) long long ftsRdmRecentSessionCount; // @synthesize ftsRdmRecentSessionCount=_ftsRdmRecentSessionCount;
@property(nonatomic) unsigned long long ftsRdmWeightValue; // @synthesize ftsRdmWeightValue=_ftsRdmWeightValue;
@property(copy, nonatomic) NSString *aiEditTarget; // @synthesize aiEditTarget=_aiEditTarget;
@property(nonatomic) _Bool aiEditDistance; // @synthesize aiEditDistance=_aiEditDistance;
@property(copy, nonatomic) NSString *ftsTypeText; // @synthesize ftsTypeText=_ftsTypeText;
- (void).cxx_destruct;
- (void)_ftsDataReportMultiKeyword;
- (_Bool)isEqual:(id)arg1;
- (void)cellDidSelectedAction:(long long)arg1;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;

// Remaining properties
@property(retain, nonatomic) NSString *ftsMajorText; // @dynamic ftsMajorText;
@property(nonatomic) _Bool ftsRdmIsPinyinMatch; // @dynamic ftsRdmIsPinyinMatch;
@property(nonatomic) long long ftsRdmMatchType; // @dynamic ftsRdmMatchType;
@property(nonatomic) long long ftsRelationType; // @dynamic ftsRelationType;
@property(retain, nonatomic) NSString *ftsSubText; // @dynamic ftsSubText;
@property(retain, nonatomic) NSString *ftsSummary; // @dynamic ftsSummary;
@property(retain, nonatomic) NSString *ftsUid; // @dynamic ftsUid;

@end

