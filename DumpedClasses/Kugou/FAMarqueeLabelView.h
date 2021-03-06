//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, FAStrokeLabel, NSString, UIColor, UIFont, UILabel;

@interface FAMarqueeLabelView : UIView
{
    _Bool _animating;
    NSString *_labelText;
    UIFont *_font;
    UIColor *_labelColor;
    UIColor *_strokeColor;
    double _maxWidth;
    double _resumeDelay;
    FAStrokeLabel *_nameLbl;
    FAStrokeLabel *_nameLbl_cp;
    double _marqueeDistance;
    double _lblDistance;
    CADisplayLink *_link;
    UILabel *_frontLbl;
    UILabel *_behindLbl;
}

@property(retain, nonatomic) UILabel *behindLbl; // @synthesize behindLbl=_behindLbl;
@property(retain, nonatomic) UILabel *frontLbl; // @synthesize frontLbl=_frontLbl;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(nonatomic) double lblDistance; // @synthesize lblDistance=_lblDistance;
@property(nonatomic) double marqueeDistance; // @synthesize marqueeDistance=_marqueeDistance;
@property(retain, nonatomic) FAStrokeLabel *nameLbl_cp; // @synthesize nameLbl_cp=_nameLbl_cp;
@property(retain, nonatomic) FAStrokeLabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(nonatomic) double resumeDelay; // @synthesize resumeDelay=_resumeDelay;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)marqueeAnimation:(id)arg1;
- (void)configSongNameLabel;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithDelay:(double)arg1;
- (void)startAnimation;
- (_Bool)canStartAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

