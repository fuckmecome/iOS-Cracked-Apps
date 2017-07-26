//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GMUserHomePageViewModel : NSObject
{
    _Bool _is_listType_like;
    NSMutableArray *_cellViewModelList;
    NSMutableArray *_cellTypeList;
    NSMutableArray *_feedidList;
    NSMutableArray *_publishTimeList;
}

@property _Bool is_listType_like; // @synthesize is_listType_like=_is_listType_like;
@property(retain, nonatomic) NSMutableArray *publishTimeList; // @synthesize publishTimeList=_publishTimeList;
@property(retain, nonatomic) NSMutableArray *feedidList; // @synthesize feedidList=_feedidList;
@property(retain, nonatomic) NSMutableArray *cellTypeList; // @synthesize cellTypeList=_cellTypeList;
@property(retain, nonatomic) NSMutableArray *cellViewModelList; // @synthesize cellViewModelList=_cellViewModelList;
- (void).cxx_destruct;
- (int)parseViewModelFromData:(id)arg1;
- (int)cellTypeAtIndexPath:(id)arg1;
- (id)cellViewModelAtIndexPath:(id)arg1;
- (long long)cellCount;

@end
