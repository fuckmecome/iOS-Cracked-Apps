//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponent.h>

@interface FBSearchBreakingNewsArticlesCarouselComponent : CKComponent
{
    vector_4cad59d0 _children;
    shared_ptr_6a94d7a4 _mountedChildren;
}

+ (id)newWithChildren:(const vector_4cad59d0 *)arg1 scopeFrameToken:(id)arg2;
@property(readonly, nonatomic) shared_ptr_6a94d7a4 mountedChildren; // @synthesize mountedChildren=_mountedChildren;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unmount;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_6a94d7a4)arg3 supercomponent:(id)arg4;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

