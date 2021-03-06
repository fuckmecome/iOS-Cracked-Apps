//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LocalMusicMvHashMatchBLLDelegate.h"

@class NSString;

@interface KGMusicTableViewAdapterBusinessTools : NSObject <LocalMusicMvHashMatchBLLDelegate>
{
    id <KGMusicTableViewAdapterBusinessToolsDelegate> _delegate;
}

@property(nonatomic) __weak id <KGMusicTableViewAdapterBusinessToolsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mvHashMatchBll:(id)arg1 didLoadedMvHashBySongInfo:(id)arg2;
- (_Bool)updateMvHashOfSongInfo:(id)arg1 byAnOtherSongInfo:(id)arg2;
- (void)registerToObserverMvHashLoadState;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

