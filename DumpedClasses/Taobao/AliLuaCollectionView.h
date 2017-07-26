//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LVCollectionView.h"

@interface AliLuaCollectionView : LVCollectionView
{
    double _spaceHeaderHeight;
    id <AliLuaViewContainerProtocal> _containerScrollView;
}

@property(nonatomic) __weak id <AliLuaViewContainerProtocal> containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) double spaceHeaderHeight; // @synthesize spaceHeaderHeight=_spaceHeaderHeight;
- (void).cxx_destruct;
- (void)luaviewScrollToTopWithAnimated:(_Bool)arg1;
- (void)luaviewScrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)luaviewSetContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)init:(struct lua_State *)arg1;

@end
