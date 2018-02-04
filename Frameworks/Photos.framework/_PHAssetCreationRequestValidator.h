/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface _PHAssetCreationRequestValidator : PHValidator {
    PHAssetCreationRequest * _assetCreationRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _validatedImageDisplayTime;
    NSString * _validatedPairingIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _validatedVideoDuration;
}

@property (nonatomic, readonly) PHAssetCreationRequest *assetCreationRequest;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } validatedImageDisplayTime;
@property (nonatomic, readonly) NSString *validatedPairingIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } validatedVideoDuration;

- (void).cxx_destruct;
- (id)assetCreationRequest;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 imageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (id)initWithAssetCreationRequest:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })validatedImageDisplayTime;
- (id)validatedPairingIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })validatedVideoDuration;

@end
