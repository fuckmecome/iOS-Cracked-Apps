//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIView;

@interface CTDestPackagesCollectionCell : UICollectionViewCell
{
    id <CTDestPackagesMapCellClickDelegate> _delegate;
    UIView *_bgView;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <CTDestPackagesMapCellClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

