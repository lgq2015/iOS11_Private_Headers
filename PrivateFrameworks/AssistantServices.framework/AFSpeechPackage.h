/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding> {
    AFSpeechRecognition * _rawRecognition;
    AFSpeechRecognition * _recognition;
}

@property (nonatomic, readonly) AFSpeechRecognition *rawRecognition;
@property (nonatomic, readonly) AFSpeechRecognition *recognition;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2;
- (id)rawRecognition;
- (id)recognition;

@end
