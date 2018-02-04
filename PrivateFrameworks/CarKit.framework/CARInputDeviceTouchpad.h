/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARInputDeviceTouchpad : CARInputDevice {
    bool  _characterRecognitionSupported;
    <CARInputDeviceTouchpadDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    double  _sensitivity;
    unsigned long long  _supportedFeedbackTypes;
}

@property (nonatomic, readonly) bool characterRecognitionSupported;
@property (nonatomic) <CARInputDeviceTouchpadDelegate> *delegate;
@property (nonatomic, readonly) bool feedbackSupported;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic) double sensitivity;
@property (nonatomic, readonly) unsigned long long supportedFeedbackTypes;

+ (struct CGSize { double x1; double x2; })physicalSizeForTouchpadWithDigitizerProperties:(id)arg1;

- (void).cxx_destruct;
- (bool)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)_initWithSupportedHapticTypes:(unsigned long long)arg1 physicalSize:(struct CGSize { double x1; double x2; })arg2 characterRecognitionSupported:(bool)arg3 senderID:(unsigned long long)arg4 UUID:(id)arg5;
- (struct CGSize { double x1; double x2; })_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)_setDelegate:(id)arg1;
- (bool)characterRecognitionSupported;
- (id)delegate;
- (id)description;
- (bool)feedbackSupported;
- (id)initWithServiceClient:(struct __IOHIDServiceClient { }*)arg1 UUID:(id)arg2 settings:(id)arg3 delegate:(id)arg4;
- (void)performFeedbackOfType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })physicalSize;
- (double)sensitivity;
- (void)setDelegate:(id)arg1;
- (void)setSensitivity:(double)arg1;
- (unsigned long long)supportedFeedbackTypes;
- (void)updateSettingsWithSettings:(id)arg1;

@end
