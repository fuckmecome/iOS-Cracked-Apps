//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDMFeedModel.h"

@class NSArray, NSString;

@interface GDMRedManJnsModel : NSObject <GDMFeedModel>
{
    NSString *_type;
    NSString *_tagId;
    NSString *_tag;
    NSString *_searchName;
    NSArray *_jsnList;
}

@property(copy, nonatomic) NSArray *jsnList; // @synthesize jsnList=_jsnList;
@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

