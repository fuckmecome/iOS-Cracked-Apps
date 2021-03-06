//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailNatantViewBase.h"

@class ArticleInfoManager, TTTagView;

@interface TTDetailNatantTagsView : TTDetailNatantViewBase
{
    TTTagView *_tagsView;
    ArticleInfoManager *_articleInfo;
}

+ (double)topPadding;
@property(retain, nonatomic) ArticleInfoManager *articleInfo; // @synthesize articleInfo=_articleInfo;
@property(retain, nonatomic) TTTagView *tagsView; // @synthesize tagsView=_tagsView;
- (void).cxx_destruct;
- (id)_mappingTagsToModel:(id)arg1;
- (void)trackEventIfNeeded;
- (void)refreshUI;
- (void)reloadData:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

