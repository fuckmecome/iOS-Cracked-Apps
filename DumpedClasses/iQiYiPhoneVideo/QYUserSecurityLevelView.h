//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol QYPayUserInfoViewDelegate;

@interface QYUserSecurityLevelView : UIView
{
    int _infoType;
    id <QYPayUserInfoViewDelegate> _delegate;
    UIButton *_improveLevel;
    UILabel *_lblLevel;
    UILabel *_lblTitle;
}

@property(nonatomic) int infoType; // @synthesize infoType=_infoType;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UILabel *lblLevel; // @synthesize lblLevel=_lblLevel;
@property(retain, nonatomic) UIButton *improveLevel; // @synthesize improveLevel=_improveLevel;
@property(nonatomic) __weak id <QYPayUserInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshInfo;
- (void)toImproveLevel;
- (void)reloadLevelInfo;
- (id)initWithFrame:(struct CGRect)arg1 andType:(int)arg2;

@end

