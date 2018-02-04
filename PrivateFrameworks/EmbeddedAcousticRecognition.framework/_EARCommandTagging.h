/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARCommandTagging : NSObject <NSCopying> {
    NSString * _commandId;
    NSArray * _tagSequence;
    struct unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging> > { 
        struct __compressed_pair<quasar::CommandTagging *, std::__1::default_delete<quasar::CommandTagging> > { 
            struct CommandTagging {} *__first_; 
        } __ptr_; 
    }  _tagging;
}

@property (nonatomic, readonly, copy) NSString *commandId;
@property (nonatomic, readonly, copy) NSArray *tagSequence;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithQuasarCommandTagging:(const struct CommandTagging { struct map<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > >, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg1;
- (id)commandId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)tagSequence;
- (id)tokensForTag:(id)arg1;

@end
