/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPRegistry : NSObject {
    struct unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::__1::allocator<std::__1::pair<const char *const, unsigned int> > > { 
        struct __hash_table<std::__1::__hash_value_type<const char *, unsigned int>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, unsigned int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, unsigned int>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _classnameToMessageTypeMap;
    struct unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int> > > { 
        struct __hash_table<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, true>, std::__1::__unordered_map_equal<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::equal_to<const google::protobuf::Descriptor *>, true>, std::__1::allocator<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const google::protobuf::Descriptor *, std::__1::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__1::equal_to<const google::protobuf::Descriptor *>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _descriptorToMessageTypeMap;
    struct unordered_map<unsigned int, __unsafe_unretained Class, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToClassMap;
    struct unordered_map<unsigned int, const char *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, const char *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, const char *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const char *>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const char *>, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToClassnameMap;
    struct unordered_map<unsigned int, const google::protobuf::Message *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::hash<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _messageTypeToPrototypeMap;
}

+ (void)setInitializationHandler:(id /* block */)arg1;
+ (id)sharedRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (const struct Message { int (**x1)(); }*)messagePrototypeForMessageType:(unsigned int)arg1;
- (unsigned int)messageTypeForDescriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; bool x6; bool x7; int x8; struct FieldDescriptor {} *x9; int x10; struct OneofDescriptor {} *x11; int x12; struct Descriptor {} *x13; int x14; struct EnumDescriptor {} *x15; int x16; struct ExtensionRange {} *x17; int x18; struct FieldDescriptor {} *x19; }*)arg1;
- (unsigned int)messageTypeForUnarchiveClassname:(const char *)arg1;
- (void)registerPersistenceMessages;
- (void)resetForMessageType:(unsigned int)arg1 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; bool x6; bool x7; int x8; struct FieldDescriptor {} *x9; int x10; struct OneofDescriptor {} *x11; int x12; struct Descriptor {} *x13; int x14; struct EnumDescriptor {} *x15; int x16; struct ExtensionRange {} *x17; int x18; struct FieldDescriptor {} *x19; }*)arg2;
- (void)setDeprecatedMessageType:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1 forUnarchiveClassname:(const char *)arg2;
- (void)setMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; bool x6; bool x7; int x8; struct FieldDescriptor {} *x9; int x10; struct OneofDescriptor {} *x11; int x12; struct Descriptor {} *x13; int x14; struct EnumDescriptor {} *x15; int x16; struct ExtensionRange {} *x17; int x18; struct FieldDescriptor {} *x19; }*)arg3 unarchiveClassname:(const char *)arg4;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; bool x6; bool x7; int x8; struct FieldDescriptor {} *x9; int x10; struct OneofDescriptor {} *x11; int x12; struct Descriptor {} *x13; int x14; struct EnumDescriptor {} *x15; int x16; struct ExtensionRange {} *x17; int x18; struct FieldDescriptor {} *x19; }*)arg3;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 descriptor:(const struct Descriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct FileDescriptor {} *x3; struct Descriptor {} *x4; struct MessageOptions {} *x5; bool x6; bool x7; int x8; struct FieldDescriptor {} *x9; int x10; struct OneofDescriptor {} *x11; int x12; struct Descriptor {} *x13; int x14; struct EnumDescriptor {} *x15; int x16; struct ExtensionRange {} *x17; int x18; struct FieldDescriptor {} *x19; }*)arg3 unarchiveClassname:(const char *)arg4;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 unarchiveClass:(Class)arg3 unarchiveClassname:(const char *)arg4;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message { int (**x1)(); }*)arg2 unarchiveClassname:(const char *)arg3;
- (Class)unarchiveClassForMessageType:(unsigned int)arg1;

@end
