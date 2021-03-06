/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {
    MTLToolsPointerArray * _functions;
    MTLToolsPointerArray * _indirectArgumentEncoders;
}

@property (readonly) NSArray *arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectArgumentEncoders;
@property (copy) NSString *label;
@property (readonly) long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly) NSArray *vertexAttributes;

- (void)acceptVisitor:(id)arg1;
- (id)arguments;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (void)dealloc;
- (id)filePath;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionConstantsDictionary;
- (unsigned long long)functionType;
- (id)indirectArgumentEncoders;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;
- (id)label;
- (long long)lineNumber;
- (id)name;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)returnType;
- (void)setLabel:(id)arg1;
- (id)stageInputAttributes;
- (id)vertexAttributes;

@end
