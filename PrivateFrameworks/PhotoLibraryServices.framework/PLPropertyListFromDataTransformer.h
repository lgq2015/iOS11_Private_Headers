/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPropertyListFromDataTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
