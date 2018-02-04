/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSessionIndexableContent : NSObject {
    NSString * _indexableTextRepresentation;
    NSString * _presentableTextRepresentation;
}

@property (nonatomic, readonly, copy) NSString *indexableTextRepresentation;
@property (nonatomic, readonly, copy) NSString *presentableTextRepresentation;

- (void)dealloc;
- (id)indexableTextRepresentation;
- (id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2;
- (id)presentableTextRepresentation;

@end