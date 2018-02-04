/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSBase64DataValueTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
