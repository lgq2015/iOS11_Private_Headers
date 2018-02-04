/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoSourceNode : NUSourceNode {
    NSURL * _URL;
    AVAsset * _asset;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cleanAperture;
    NSDictionary * _colorProperties;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoKeyFrameTime;
    bool  _loaded;
    NSArray * _metadata;
    long long  _orientation;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cleanAperture;

- (void).cxx_destruct;
- (id)_evaluateImageProperties:(out id*)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (bool)_load:(out id*)arg1;
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(bool)arg2;
- (id)asset:(out id*)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)load:(out id*)arg1;
- (struct { long long x1; long long x2; })pixelSize;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
