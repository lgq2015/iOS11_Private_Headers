/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject {
    NSString * _description;
    PHMemory * _memory;
    NSString * _name;
    NSDictionary * _options;
    NSString * _rejectionCause;
}

@property (readonly) NSString *description;
@property (readonly) PHMemory *memory;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *rejectionCause;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMemory:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)memory;
- (id)name;
- (id)options;
- (id)rejectionCause;

@end
