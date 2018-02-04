/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (nonatomic, copy) NSURL *ref;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)openLink;
+ (id)openLinkWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)ref;
- (bool)requiresResponse;
- (void)setRef:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

@end
