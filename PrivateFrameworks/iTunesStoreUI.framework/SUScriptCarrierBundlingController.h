/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString *statusEligible;
@property (readonly) NSString *statusNeedsManualVerification;
@property (readonly) NSString *statusNotEligible;
@property (readonly) NSString *statusUnknown;
@property (readonly) NSString *statusUnlinked;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)statusEligible;
- (id)statusNeedsManualVerification;
- (id)statusNotEligible;
- (id)statusUnknown;
- (id)statusUnlinked;
- (void)updateLastKnownStatus:(id)arg1;

@end