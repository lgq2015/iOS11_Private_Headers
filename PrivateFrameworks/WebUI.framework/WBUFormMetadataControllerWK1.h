/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormMetadataControllerWK1 : WBSFormMetadataController {
    WebScriptWorld * _scriptWorld;
}

@property (nonatomic, readonly) WebScriptWorld *scriptWorld;

+ (id)sharedFormMetadataController;

- (void).cxx_destruct;
- (void)clearScriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)scriptWorld;
- (bool)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;

@end
