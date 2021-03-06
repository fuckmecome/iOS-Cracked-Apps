//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCarCoreGridView, SCarMemberModel;

@interface SCarMemberView : UIView
{
    UIView *_contentView;
    SCarCoreGridView *_operationGridView;
    SCarMemberModel *_memberModel;
    CDUnknownBlockType _memberClickBlock;
    CDUnknownBlockType _itemClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(copy, nonatomic) CDUnknownBlockType memberClickBlock; // @synthesize memberClickBlock=_memberClickBlock;
@property(retain, nonatomic) SCarMemberModel *memberModel; // @synthesize memberModel=_memberModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCarCoreGridView *operationGridView; // @synthesize operationGridView=_operationGridView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

