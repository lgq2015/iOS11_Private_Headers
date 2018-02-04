/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSubscriptionStatusRequest : SUScriptObject {
    bool  _ignoreCache;
    long long  _reason;
    long long  _service;
    bool  _wantsPartialResults;
}

@property id ignoreCache;
@property (copy) NSString *reasonName;
@property (readonly) NSString *reasonNameDeepLink;
@property (copy) NSString *serviceName;
@property (readonly) NSString *serviceNameAppleMusic;
@property id wantsPartialResults;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_handleRequestCompletionWithSubscriptionStatus:(id)arg1 isFinal:(bool)arg2 scriptCallbackFunction:(id)arg3;
- (id)attributeKeys;
- (id)ignoreCache;
- (void)performRequestWithCallbackFunction:(id)arg1;
- (id)reasonName;
- (id)reasonNameDeepLink;
- (id)scriptAttributeKeys;
- (id)serviceName;
- (id)serviceNameAppleMusic;
- (void)setIgnoreCache:(id)arg1;
- (void)setReasonName:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setWantsPartialResults:(id)arg1;
- (id)wantsPartialResults;

@end
