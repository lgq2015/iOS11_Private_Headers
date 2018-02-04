/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUITestInput : NSObject {
    AFUIRequestOptions * _requestOptions;
}

@property (nonatomic, readonly) AFUIRequestOptions *requestOptions;

+ (id)_baseRequestOptions;

- (void).cxx_destruct;
- (id)_initWithRequestOptions:(id)arg1;
- (id)initWithRecordedSpeechURL:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)requestOptions;

@end
