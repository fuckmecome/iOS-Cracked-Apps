//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EZStreamTexture : NSObject
{
    _Bool handlerInitialized;
    _Bool textureUpdated;
    unsigned int _yHandler;
    unsigned int _uvHandler;
    id <EZStreamTextureProvider> _provider;
    CDUnknownBlockType _initializedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType initializedCallback; // @synthesize initializedCallback=_initializedCallback;
@property(nonatomic) unsigned int uvHandler; // @synthesize uvHandler=_uvHandler;
@property(nonatomic) unsigned int yHandler; // @synthesize yHandler=_yHandler;
@property(nonatomic) __weak id <EZStreamTextureProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)uploadTexture:(struct __CVBuffer *)arg1 yHandler:(unsigned int)arg2 uvHandler:(unsigned int)arg3;
- (void)render;
- (void)update;
- (void)onInitialized:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

