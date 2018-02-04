/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _bufferBindings;
    id  _delegate;
    NSString * _fragmentFunctionName;
    NSString * _fragmentShader;
    id  _library;
    NSString * _name;
    bool  _opaque;
    NSMutableDictionary * _semanticInfos;
    NSString * _vertexFunctionName;
    NSString * _vertexShader;
}

@property (nonatomic) <SCNProgramDelegate> *delegate;
@property (nonatomic, copy) NSString *fragmentFunctionName;
@property (nonatomic, copy) NSString *fragmentShader;
@property (nonatomic, retain) <MTLLibrary> *library;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic, copy) NSString *vertexFunctionName;
@property (nonatomic, copy) NSString *vertexShader;

+ (id)program;
+ (id)programWithLibrary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_allSymbolsWithSceneKitSemantic;
- (id)_bufferBindings;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
- (id)_optionsForSymbol:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentFunctionName;
- (id)fragmentShader;
- (void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isOpaque;
- (id)library;
- (id)name;
- (id)semanticForSymbol:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFragmentFunctionName:(id)arg1;
- (void)setFragmentShader:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
- (void)setSemanticInfos:(id)arg1;
- (void)setVertexFunctionName:(id)arg1;
- (void)setVertexShader:(id)arg1;
- (int)shadingLanguage;
- (id)vertexFunctionName;
- (id)vertexShader;

@end
