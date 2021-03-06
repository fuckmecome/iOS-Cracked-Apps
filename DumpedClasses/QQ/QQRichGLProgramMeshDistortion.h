//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@class NSMutableArray;

@interface QQRichGLProgramMeshDistortion : QQRichPTVGLProgramBase
{
    unsigned int transTexture[2];
    struct MeshDistortionType *_meshDistortions;
    struct MeshDistortionType *_curMeshArray;
    NSMutableArray *_meshDistortiosArray;
    unsigned long long _meshDistortionsNum;
    float _screenRatio;
    struct CGSize _faceDetectImageSize;
    int _meshXCoordNum;
    int _meshYCoordNum;
    long long _meshCount;
    unsigned int _outputTexture;
    float _faceRatio;
    float _faceDegree;
    struct CGSize _outputSize;
}

@property(nonatomic) float faceDegree; // @synthesize faceDegree=_faceDegree;
@property(nonatomic) float faceRatio; // @synthesize faceRatio=_faceRatio;
@property(readonly, nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (void)renderWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (void)loadMeshDistortionProgramParam2:(struct MeshDistortionType *)arg1;
- (void)loadMeshData;
- (void)updateMeshDistortions:(float (*)[2])arg1 faceDetectImaegSize:(struct CGSize)arg2 meshDistortions:(struct MeshDistortionType *)arg3;
- (void)updateMeshDistortions2:(id)arg1;
- (void)clearMeshDistortions;
- (void)setMeshDistortions:(struct MeshDistortionType *)arg1 meshDistortionsNum:(unsigned long long)arg2;
- (void)setMeshDistortions:(id)arg1;
- (void)compileShaders;
- (void)dealloc;
- (id)init;

@end

