//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCOfficialProcessorProtocol.h"

@class NSString;

@interface MCOfficialBaseProcessor : NSObject <MCOfficialProcessorProtocol>
{
    id <MCOfficialContentPresenterInterface> _officialContentPresenterInterface;
}

@property(nonatomic) __weak id <MCOfficialContentPresenterInterface> officialContentPresenterInterface; // @synthesize officialContentPresenterInterface=_officialContentPresenterInterface;
- (void).cxx_destruct;
- (id)findNextLastMessageVOWithDeletedMessageVO:(id)arg1 config:(id)arg2;
- (_Bool)isLastMessageVO:(id)arg1 config:(id)arg2;
- (id)argsWithMessageVO:(id)arg1 config:(id)arg2 needSpmUrl:(_Bool)arg3;
- (void)reSendMessageVO:(id)arg1 config:(id)arg2;
- (void)deleteMessageVO:(id)arg1 config:(id)arg2;
- (void)tappedMessageVO:(id)arg1 config:(id)arg2;
- (void)exploseMessageVO:(id)arg1 config:(id)arg2;
- (void)configExtInfoWithBubble:(id)arg1 messageVO:(id)arg2 config:(id)arg3;
- (id)getCellByOfficialVO:(id)arg1 tableView:(id)arg2 config:(id)arg3;
- (id)doTransformProcessorData:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
