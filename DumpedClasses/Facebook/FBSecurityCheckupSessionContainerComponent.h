//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSecurityCheckupSessionContainerState, FBSecurityCheckupSessionSectionComponent, FBUserSession, NSArray, NSString;

@interface FBSecurityCheckupSessionContainerComponent : CKCompositeComponent
{
    FBSecurityCheckupSessionSectionComponent *_sectionComponent;
    FBUserSession *_session;
    FBSecurityCheckupSessionContainerState *_listState;
    NSArray *_sessions;
    NSString *_source;
    CKTypedComponentAction_4b39899e _didLogoutSessions;
}

+ (id)newWithTitle:(id)arg1 titleImage:(id)arg2 subtitle:(id)arg3 sessions:(id)arg4 cancelAction:(CKTypedComponentAction_4b39899e)arg5 didLogoutSessionsAction:(CKTypedComponentAction_4b39899e)arg6 context:(id)arg7;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) FBSecurityCheckupSessionContainerState *listState; // @synthesize listState=_listState;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) CKTypedComponentAction_4b39899e didLogoutSessions; // @synthesize didLogoutSessions=_didLogoutSessions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)selectedSessions;

@end

