//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XChatMessageCardBaseCell.h"

@class FMImageView, MASConstraint, UILabel;

@interface XChatMessageCardImageCell : XChatMessageCardBaseCell
{
    UILabel *contentLabel;
    FMImageView *bodyImageView;
    MASConstraint *bottomWithImage;
    MASConstraint *bottomWithoutImage;
}

+ (double)rowHeightForComponent:(id)arg1;
+ (id)IdentifierForComponent:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)imageCardlayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

