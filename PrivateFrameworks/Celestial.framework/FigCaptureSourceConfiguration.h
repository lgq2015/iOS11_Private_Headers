/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    bool  _applyMaxIntegrationTimeOverrideWhenAvailable;
    bool  _automaticallyEnablesLowLightBoostWhenAvailable;
    int  _colorSpace;
    bool  _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat * _depthDataFormat;
    NSDictionary * _faceDetectionConfiguration;
    bool  _hasSetVideoZoomFactorOnCaptureSource;
    int  _imageControlMode;
    FigCaptureSourceVideoFormat * _requiredFormat;
    float  _requiredMaxFrameRate;
    float  _requiredMinFrameRate;
    bool  _sensorHDREnabled;
    struct OpaqueFigCaptureSource { } * _source;
    NSDictionary * _sourceAttributes;
    NSString * _sourceID;
    int  _sourceType;
    float  _videoZoomFactor;
    float  _videoZoomRampAcceleration;
}

@property (nonatomic) bool applyMaxIntegrationTimeOverrideWhenAvailable;
@property (nonatomic) bool automaticallyEnablesLowLightBoostWhenAvailable;
@property (nonatomic) int colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic, retain) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *faceDetectionConfiguration;
@property (nonatomic) bool hasSetVideoZoomFactorOnCaptureSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageControlMode;
@property (nonatomic, retain) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) bool sensorHDREnabled;
@property (nonatomic, readonly) struct OpaqueFigCaptureSource { }*source;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) int sourcePosition;
@property (nonatomic, readonly) int sourceType;
@property (readonly) Class superclass;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;

- (int)_deviceType;
- (bool)_isCameraSource;
- (id)_sourceAttributes;
- (int)_sourceToken;
- (id)_sourceUID;
- (bool)applyMaxIntegrationTimeOverrideWhenAvailable;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (int)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)depthDataFormat;
- (id)description;
- (id)faceDetectionConfiguration;
- (bool)hasSetVideoZoomFactorOnCaptureSource;
- (int)imageControlMode;
- (id)initWithSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requiredFormat;
- (float)requiredMaxFrameRate;
- (float)requiredMinFrameRate;
- (bool)sensorHDREnabled;
- (void)setApplyMaxIntegrationTimeOverrideWhenAvailable:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setColorSpace:(int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthDataFormat:(id)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setHasSetVideoZoomFactorOnCaptureSource:(bool)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setRequiredFormat:(id)arg1;
- (void)setRequiredMaxFrameRate:(float)arg1;
- (void)setRequiredMinFrameRate:(float)arg1;
- (void)setSensorHDREnabled:(bool)arg1;
- (void)setSourceID:(id)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (struct OpaqueFigCaptureSource { }*)source;
- (id)sourceID;
- (int)sourcePosition;
- (int)sourceType;
- (float)videoZoomFactor;
- (float)videoZoomRampAcceleration;

@end
