//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VUIGLContext : NSObject
{
    float matProject[16];
    float matView[16];
    float matOuterScale[16];
    float matOuterRotation[16];
    float matOuterTranslation[16];
    float *_matrixProject;
    float *_matrixView;
    float *_matrixOuterScale;
    float *_matrixOuterRotation;
    float *_matrixOuterTranslation;
}

@property(readonly, nonatomic) float *matrixOuterTranslation; // @synthesize matrixOuterTranslation=_matrixOuterTranslation;
@property(readonly, nonatomic) float *matrixOuterRotation; // @synthesize matrixOuterRotation=_matrixOuterRotation;
@property(readonly, nonatomic) float *matrixOuterScale; // @synthesize matrixOuterScale=_matrixOuterScale;
@property(readonly, nonatomic) float *matrixView; // @synthesize matrixView=_matrixView;
@property(readonly, nonatomic) float *matrixProject; // @synthesize matrixProject=_matrixProject;
- (void)copyMatrixOuterTranslation:(float *)arg1;
- (void)copyMatrixOuterRotation:(float *)arg1;
- (void)copyMatrixOuterScale:(float *)arg1;
- (void)copyMatrixView:(float *)arg1;
- (void)copyMatrixProject:(float *)arg1;
- (id)init;

@end

