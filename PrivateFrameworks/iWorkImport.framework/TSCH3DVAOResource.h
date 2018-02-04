/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVAOResource : TSCH3DResource {
    struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
        struct ResourceAttributeState {} *__begin_; 
        struct ResourceAttributeState {} *__end_; 
        struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
            struct ResourceAttributeState {} *__first_; 
        } __end_cap_; 
    }  mAttributes;
    NSIndexSet * mEnabledArrays;
    bool  mFailed;
    TSCH3DResource * mIndices;
}

@property (nonatomic, retain) NSIndexSet *enabledArrays;
@property (nonatomic) bool failed;

+ (id)resourceWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_1_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_2; } x_3_2_1[8]; } x_1_1_3; } x1; }*)arg1 indices:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enabledArrays;
- (bool)failed;
- (id)get;
- (unsigned long long)hash;
- (id)initWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_1_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_2; } x_3_2_1[8]; } x_1_1_3; } x1; }*)arg1 indices:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setEnabledArrays:(id)arg1;
- (void)setFailed:(bool)arg1;

@end
