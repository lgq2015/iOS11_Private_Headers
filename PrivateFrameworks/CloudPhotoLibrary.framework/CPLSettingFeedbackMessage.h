/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {
    NSString * _settingName;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *settingName;
@property (nonatomic, readonly) NSString *value;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithSetting:(id)arg1 value:(id)arg2;
- (id)serverMessage;
- (id)settingName;
- (id)value;

@end
