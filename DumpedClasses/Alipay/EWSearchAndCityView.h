//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseView.h"

#import "AUSearchTitleViewDelegate.h"

@class EWCityView, EWMainPageViewModel, EWSearchTitleView, NSString;

@interface EWSearchAndCityView : EWBaseView <AUSearchTitleViewDelegate>
{
    id <EWSearchAndCityViewDelegate> _delegate;
    EWSearchTitleView *_searchView;
    EWCityView *_cityView;
}

@property(retain, nonatomic) EWCityView *cityView; // @synthesize cityView=_cityView;
@property(retain, nonatomic) EWSearchTitleView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) __weak id <EWSearchAndCityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPressedTitleView:(id)arg1;
- (void)tapSearchView;
- (void)tapCityView;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (void)setSearchBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) EWMainPageViewModel *viewModel;

@end
