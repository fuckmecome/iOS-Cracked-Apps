//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRateShareInfo : TBJSONModel
{
    _Bool _shareSupport;
    NSString *_shareURL;
    NSString *_shareCover;
}

@property(retain, nonatomic) NSString *shareCover; // @synthesize shareCover=_shareCover;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(nonatomic) _Bool shareSupport; // @synthesize shareSupport=_shareSupport;
- (void).cxx_destruct;

@end

