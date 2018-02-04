/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (nonatomic, copy) NSString *structuredDictationType;

+ (id)startStructuredDictationRequest;
+ (id)startStructuredDictationRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStructuredDictationType:(id)arg1;
- (id)structuredDictationType;

@end
