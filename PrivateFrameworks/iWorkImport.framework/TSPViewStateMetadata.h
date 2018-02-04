/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPViewStateMetadata : TSPObject {
    struct ViewStateMetadata { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } version_; 
        int _version_cached_byte_size_; 
        struct UUID {} *version_uuid_; 
        struct ComponentInfo {} *component_; 
        struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } external_object_uuid_map_entries_; 
    }  _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (struct ViewStateMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; struct UUID {} *x7; struct ComponentInfo {} *x8; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)message;
- (void)saveToArchiver:(id)arg1;
- (long long)tsp_identifier;

@end
