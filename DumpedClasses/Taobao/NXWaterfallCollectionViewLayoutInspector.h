//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXASCollectionViewLayoutInspecting.h"

@class NSString;

@interface NXWaterfallCollectionViewLayoutInspector : NSObject <NXASCollectionViewLayoutInspecting>
{
}

- (unsigned long long)collectionView:(id)arg1 supplementaryNodesOfKind:(id)arg2 inSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 numberOfSectionsForSupplementaryNodeOfKind:(id)arg2;
- (CDStruct_42a63532)collectionView:(id)arg1 constrainedSizeForSupplementaryNodeOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CDStruct_42a63532)collectionView:(id)arg1 constrainedSizeForNodeAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

