//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIImageView;

@interface FBLiveMapAnnotationView : MKAnnotationView
{
    UIImageView *_smallCircleImgView;
    UIImageView *_bigCircleImgView;
    double _animatedCircleDiameter;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDotHighlighted:(_Bool)arg1;
- (void)setNumViewers:(unsigned long long)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

