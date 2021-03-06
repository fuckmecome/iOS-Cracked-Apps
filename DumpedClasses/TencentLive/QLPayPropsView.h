//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLPayPropsCollectionLayout, QLSImageView, UICollectionView;

@interface QLPayPropsView : UIView
{
    QLSImageView *_propsImageView;
    UIView *_lineView;
    UICollectionView *_payPropsViewcollectionView;
    QLPayPropsCollectionLayout *_collectionLayout;
    QLSImageView *_maskView;
}

@property(retain, nonatomic) QLSImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) QLPayPropsCollectionLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *payPropsViewcollectionView; // @synthesize payPropsViewcollectionView=_payPropsViewcollectionView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) QLSImageView *propsImageView; // @synthesize propsImageView=_propsImageView;
- (void).cxx_destruct;
- (id)getCurrentInputValue:(id)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 collectionViewDlegate:(id)arg2 dataSource:(id)arg3;
- (void)setImageURL:(id)arg1 collectionViewDlegate:(id)arg2 dataSource:(id)arg3;
- (void)tryToHideKeyBoard;
- (void)reloadCollectionView;
- (id)initWithFrame:(struct CGRect)arg1 withCell:(Class)arg2 forCellWithReuseIdentifier:(id)arg3;

@end

