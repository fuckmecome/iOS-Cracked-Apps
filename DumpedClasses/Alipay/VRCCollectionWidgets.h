//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRView.h"

#import "MFWidgetPluginProtocol.h"

@class CCUglyClickChecker, NSArray, NSIndexPath, NSMutableArray, NSString;

@interface VRCCollectionWidgets : VRView <MFWidgetPluginProtocol>
{
    NSArray *_dataList;
    id <VRCCollectionWidgetsDelegate> _adelegate;
    NSIndexPath *_widgetIndexPath;
    id <MFWidgetPluginProtocol> _delegate;
    NSMutableArray *_widgets;
    NSMutableArray *_lines;
    CCUglyClickChecker *_checker;
}

+ (id)subType;
+ (id)tagType;
@property(retain, nonatomic) CCUglyClickChecker *checker; // @synthesize checker=_checker;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *widgets; // @synthesize widgets=_widgets;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *widgetIndexPath; // @synthesize widgetIndexPath=_widgetIndexPath;
@property(nonatomic) __weak id <VRCCollectionWidgetsDelegate> adelegate; // @synthesize adelegate=_adelegate;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)doAnimation;
- (void)likeBtnAnimation:(id)arg1 withStatus:(_Bool)arg2;
- (void)dealloc;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)drawWithContext:(struct CGContext *)arg1 isCancelled:(CDUnknownBlockType)arg2;
- (void)handleClickRespond:(id)arg1 checker:(id)arg2 listData:(id)arg3 indexPath:(id)arg4 adelegate:(id)arg5;
- (void)handleClickRespond:(id)arg1;
- (_Bool)touchesEnded:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)touchesBegan:(id)arg1 point:(struct CGPoint)arg2;
- (int)shouldReciveGesture:(int)arg1 touchPoint:(struct CGPoint)arg2;
- (int)reciveGesture:(int)arg1 touchPoint:(struct CGPoint)arg2;
- (_Bool)interceptAction;
- (id)findButtonWithType:(id)arg1;
- (id)createLinesWithIndex:(long long)arg1 x:(double)arg2 height:(double)arg3;
- (id)createButton:(id)arg1 withIndex:(long long)arg2 maxWidth:(double)arg3;
- (void)setupSubViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

