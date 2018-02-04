/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAPortraitRequest : NSObject <CVAPortraitRequest> {
    NSData * _backgroundColorCube;
    float  _colorCubeIntensity;
    struct __CVBuffer { } * _destinationColorPixelBuffer;
    NSData * _foregroundColorCube;
    CVAMattingRequest * _mattingRequest;
    int  _relightingCondition;
    float  _simulatedFocalRatio;
    float  _sourceColorGain;
    float  _sourceColorLux;
}

@property (readonly) NSData *backgroundColorCube;
@property (readonly) float colorCubeIntensity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) struct __CVBuffer { }*destinationColorPixelBuffer;
@property (readonly) NSData *foregroundColorCube;
@property (readonly) unsigned long long hash;
@property (readonly) CVAMattingRequest *mattingRequest;
@property (readonly) int relightingCondition;
@property (readonly) float simulatedFocalRatio;
@property (readonly) float sourceColorGain;
@property (readonly) float sourceColorLux;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundColorCube;
- (float)colorCubeIntensity;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationColorPixelBuffer;
- (id)foregroundColorCube;
- (id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8;
- (id)mattingRequest;
- (int)relightingCondition;
- (float)simulatedFocalRatio;
- (float)sourceColorGain;
- (float)sourceColorLux;

@end
