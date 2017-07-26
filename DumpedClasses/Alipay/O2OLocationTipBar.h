//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface O2OLocationTipBar : UIView
{
    _Bool _autoCloseWhenOpenSetting;
    _Bool _hasGoSettingBtn;
    id <O2OLocationTipBarDelegate> _delegate;
    NSString *_baseSeed;
    id _spmView;
}

+ (id)tipBarWithTip:(id)arg1 cannotGoSettingTip:(id)arg2 baseSeed:(id)arg3 view:(id)arg4;
@property(nonatomic) __weak id spmView; // @synthesize spmView=_spmView;
@property(copy, nonatomic) NSString *baseSeed; // @synthesize baseSeed=_baseSeed;
@property(nonatomic) _Bool hasGoSettingBtn; // @synthesize hasGoSettingBtn=_hasGoSettingBtn;
@property(nonatomic) _Bool autoCloseWhenOpenSetting; // @synthesize autoCloseWhenOpenSetting=_autoCloseWhenOpenSetting;
@property(nonatomic) __weak id <O2OLocationTipBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fakeGoSetting;
- (void)fakeClose;
- (void)notifyClose;
- (void)toEnable;
- (void)close:(_Bool)arg1;
- (void)closeByUser;
- (id)initWithFrame:(struct CGRect)arg1 tip:(id)arg2 cannotGoSettingTip:(id)arg3 baseSeed:(id)arg4 view:(id)arg5;

@end
