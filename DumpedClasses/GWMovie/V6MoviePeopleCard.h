//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWImagePolicyView, GWPeople, UIImage, UIImageView, UILabel;

@interface V6MoviePeopleCard : UIView
{
    _Bool _showBorderFrame;
    GWImagePolicyView *_headImageView;
    GWPeople *_people;
    UIView *_headView;
    UIImageView *_maskImage;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UIImage *_cacheImage;
}

@property(retain, nonatomic) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool showBorderFrame; // @synthesize showBorderFrame=_showBorderFrame;
@property(retain, nonatomic) GWPeople *people; // @synthesize people=_people;
@property(retain, nonatomic) GWImagePolicyView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)configureBorderFrame;
- (void)adjustImageView;
- (void)dealloc;

@end

