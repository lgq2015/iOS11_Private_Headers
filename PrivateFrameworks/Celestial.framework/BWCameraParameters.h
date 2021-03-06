/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCameraParameters : NSObject {
    NSDictionary * _cameraTuningParameters;
}

@property (nonatomic, readonly) NSDictionary *cameraTuningParameters;

+ (void)initialize;
+ (id)sharedInstance;

- (id)_initWithModelSpecificName:(id)arg1;
- (id)cameraTuningParameters;
- (void)dealloc;
- (id)focalLengthCharacterizationForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)init;
- (id)sensorIDDictionaryForStream:(struct OpaqueFigCaptureStream { }*)arg1;

@end
