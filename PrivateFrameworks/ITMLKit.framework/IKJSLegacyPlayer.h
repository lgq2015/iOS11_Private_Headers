/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSLegacyPlayer : IKJSObject <IKJSLegacyPlayer, NSObject, _IKJSLegacyPlayer, _IKJSLegacyPlayerProxy> {
    <IKJSPlayerAppBridge> * _appBridge;
}

@property (nonatomic) <IKJSPlayerAppBridge> *appBridge;
@property (nonatomic, readonly) IKDOMElement *currentAVMediaElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appBridge;
- (id)asPrivateIKJSLegacyPlayer;
- (id)currentAVMediaElement;
- (void)setAppBridge:(id)arg1;

@end
