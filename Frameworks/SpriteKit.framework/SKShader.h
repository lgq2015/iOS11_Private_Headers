/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKShader : NSObject <NSCoding, NSCopying> {
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _attributeBuffers;
    NSArray * _attributes;
    struct shared_ptr<jet_program> { 
        struct jet_program {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backingProgram;
    struct shared_ptr<jet_program> { 
        struct jet_program {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backingProgramWithTransform;
    NSString * _compileLog;
    NSString * _fileName;
    bool  _performFullCapture;
    bool  _programDirty;
    bool  _programWithTransformDirty;
    NSString * _source;
    NSPointerArray * _targetNodes;
    NSMutableDictionary * _uniformData;
    NSMutableArray * _uniforms;
    bool  _usesPathLengthUniform;
    bool  _usesSpriteSizeUniform;
    bool  _usesTimeUniform;
}

@property (readonly) /* Warning: unhandled struct encoding: '{map<std::__1::basic_string<char>' */ struct *_attributeBuffers; /* unknown property attribute:  true> >=Q}}} */
@property (readonly) struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; } _backingProgram;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; } _backingProgramWithTransform;
@property (readonly) struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; } _commands;
@property (readonly) NSArray *_textureUniforms;
@property (nonatomic, copy) NSArray *attributes;
@property bool performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;

+ (id)shader;
+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTargetNode:(id)arg1;
- (struct map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)_attributeBuffers;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_backingProgram;
- (bool)_backingProgramIsDirty;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_backingProgramWithTransform;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; })_commands;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; })_commandsForBatchOffset:(int)arg1 count:(int)arg2;
- (id)_fullMetalVertexSourceWithImplementation:(bool)arg1;
- (id)_fullVertexSourceWithImplementation:(long long)arg1;
- (id)_generateMetalSource;
- (id)_getLegacyUniformData;
- (id)_getMetalFragmentFunctionName;
- (id)_getMetalVertexOutDefinition;
- (id)_getShaderCompilationLog;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_makeBackingProgramWithImplementation:(long long)arg1;
- (void)_removeTargetNode:(id)arg1;
- (void)_setUniformsDirty;
- (id)_textureUniforms;
- (bool)_usesPathLengthUniform;
- (bool)_usesTimeUniform;
- (void)addUniform:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentPrelude;
- (id)fragmentPreludeMetal;
- (id)fullFragmentSource;
- (id)fullMetalFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (void)generateFragmentAttributeDeclares:(id*)arg1;
- (void)generateVertexAttributeDeclares:(id*)arg1 statements:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;
- (bool)isValid;
- (bool)performFullCapture;
- (void)removeUniformNamed:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setPerformFullCapture:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setUniforms:(id)arg1;
- (id)source;
- (id)uniformNamed:(id)arg1;
- (id)uniforms;

@end
