//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, ONEMMTableViewSection;

@interface ONEMMTableViewItem : NSObject
{
    _Bool _separatorHidden;
    NSString *_title;
    ONEMMTableViewSection *_section;
    CDUnknownBlockType _selectionHandler;
    double _separatorIndent;
}

@property(nonatomic) double separatorIndent; // @synthesize separatorIndent=_separatorIndent;
@property(nonatomic) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) __weak ONEMMTableViewSection *section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

