/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>

@property (readonly) const struct CGImageMetadata { }*metadata;

- (id)initWithCGImageMetadata:(struct CGImageMetadata { }*)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (const struct CGImageMetadata { }*)metadata;
- (id)nu_unwrapJSValue;

@end
