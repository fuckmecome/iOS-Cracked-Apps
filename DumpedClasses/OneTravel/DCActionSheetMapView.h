//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class NSMutableArray;

@interface DCActionSheetMapView : DCEmergeCustomBaseView
{
    CDUnknownBlockType _selectRowBlock;
    NSMutableArray *_titles;
}

@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) CDUnknownBlockType selectRowBlock; // @synthesize selectRowBlock=_selectRowBlock;
- (void).cxx_destruct;
- (void)didSelectAction:(id)arg1;
- (id)initWithCancelButtonTitles:(id)arg1;
- (id)init;
- (void)dealloc;

@end

