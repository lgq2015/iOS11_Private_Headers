/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {
    IKAppContext * _appContext;
    <IKAppKeyboardDelegate> * _delegate;
    NSString * _featureName;
    IKJSKeyboard * _jsKeyboard;
    NSString * _jsSource;
    NSString * _jsText;
    NSString * _source;
    NSString * _text;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppKeyboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (setter=setJSKeyboard:, nonatomic) IKJSKeyboard *jsKeyboard;
@property (setter=setJSSource:, nonatomic, copy) NSString *jsSource;
@property (setter=setJSText:, nonatomic, copy) NSString *jsText;
@property (getter=_source, setter=_setSource:, nonatomic, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)_setSource:(id)arg1;
- (id)_source;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)jsKeyboard;
- (id)jsSource;
- (id)jsText;
- (void)setDelegate:(id)arg1;
- (void)setJSKeyboard:(id)arg1;
- (void)setJSSource:(id)arg1;
- (void)setJSText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
