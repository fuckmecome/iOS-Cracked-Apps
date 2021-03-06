//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBIMGroupServiceDelegate.h"

@class MCMergeContactFragment, NSString;

@interface TBIMMergeContactViewController : UIViewController <TBIMGroupServiceDelegate>
{
    id <TBIMGroupServiceAdapter> _groupServiceAdapter;
    id <TBIMGroupAdapter> _groupAdapter;
    NSString *_vGroupId;
    MCMergeContactFragment *_mergeContactFragment;
    NSString *_pageName;
    NSString *_moduleSPM_A;
    NSString *_moduleSPM_B;
}

@property(retain, nonatomic) NSString *moduleSPM_B; // @synthesize moduleSPM_B=_moduleSPM_B;
@property(retain, nonatomic) NSString *moduleSPM_A; // @synthesize moduleSPM_A=_moduleSPM_A;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) MCMergeContactFragment *mergeContactFragment; // @synthesize mergeContactFragment=_mergeContactFragment;
@property(retain, nonatomic) NSString *vGroupId; // @synthesize vGroupId=_vGroupId;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupAdapter; // @synthesize groupAdapter=_groupAdapter;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupServiceAdapter; // @synthesize groupServiceAdapter=_groupServiceAdapter;
- (void).cxx_destruct;
- (void)setUpView;
- (void)setupFragment;
- (void)clickVirtualGroupManage:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

