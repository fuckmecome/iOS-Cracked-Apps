//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNetworkImageView, UIImageView;

@interface FBTimelineNavigationMapView : UIView
{
    FBNetworkImageView *_thumbnailView;
    UIImageView *_placeholderThumbnailView;
    UIImageView *_pinView;
}

+ (_Bool)isUpdateNeededFromOldAppSection:(id)arg1 toNewAppSection:(id)arg2;
+ (id)viewWithNavSection:(id)arg1 session:(id)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithThumbnail:(id)arg1 session:(id)arg2;

@end

