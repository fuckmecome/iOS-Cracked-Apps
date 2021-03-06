//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBNeedSetDashAttributesProtocol.h"

@class NSArray, NSDictionary, NSString, UIView;

@interface TBLayout : NSObject <TBNeedSetDashAttributesProtocol>
{
    _Bool _needLayout;
    id _parentItem;
    NSDictionary *_layoutContent;
    UIView *_parentView;
    double _parentOffsetX;
    double _parentOffsetY;
    NSDictionary *_viewAttributes;
    NSArray *_viewItems;
    double _marginTop;
    double _marginLeft;
    double _marginBottom;
    double _marginRight;
    UIView *_view;
    id _dataSource;
    struct CGSize _contextSize;
    struct CGSize _size;
}

@property(nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) struct CGSize contextSize; // @synthesize contextSize=_contextSize;
@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(retain, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain, nonatomic) NSDictionary *viewAttributes; // @synthesize viewAttributes=_viewAttributes;
@property(nonatomic) double parentOffsetY; // @synthesize parentOffsetY=_parentOffsetY;
@property(nonatomic) double parentOffsetX; // @synthesize parentOffsetX=_parentOffsetX;
@property(nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSDictionary *layoutContent; // @synthesize layoutContent=_layoutContent;
@property(nonatomic) id parentItem; // @synthesize parentItem=_parentItem;
- (void).cxx_destruct;
- (void)setPageTrackCodeOfViewItems:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)layoutViewItems;
- (void)sizeToFit;
- (_Bool)isViewLoaded;
- (void)destroyView;
@property(readonly, nonatomic) double fixedHeight;
@property(readonly, nonatomic) double fixedWidth;
- (id)createView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

