//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class EBKSegmentControl, NSArray, NSString, UIButton, UIScrollView;

@interface EBKChooseDinersNumberCell : NVMTableViewCell
{
    NSString *_selectedDiners;
    long long _selectedIndex;
    NSArray *_numberOfDiners;
    UIScrollView *_dinerSelector;
    EBKSegmentControl *_scroller;
    UIButton *_nonSelectionButton;
}

@property(retain, nonatomic) UIButton *nonSelectionButton; // @synthesize nonSelectionButton=_nonSelectionButton;
@property(retain, nonatomic) EBKSegmentControl *scroller; // @synthesize scroller=_scroller;
@property(retain, nonatomic) UIScrollView *dinerSelector; // @synthesize dinerSelector=_dinerSelector;
@property(retain, nonatomic) NSArray *numberOfDiners; // @synthesize numberOfDiners=_numberOfDiners;
- (void).cxx_destruct;
- (void)nonSelectionButtonClicked;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) NSString *selectedDiners; // @synthesize selectedDiners=_selectedDiners;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

