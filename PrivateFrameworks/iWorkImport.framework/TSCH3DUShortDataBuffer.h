/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { 
        struct PODType<unsigned short> {} *__begin_; 
        struct PODType<unsigned short> {} *__end_; 
        struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { 
            struct PODType<unsigned short> {} *__first_; 
        } __end_cap_; 
    }  mContainer;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<TSCH3D::PODType<unsigned short>' */ struct *container; /* unknown property attribute:  std::__1::allocator<TSCH3D::PODType<unsigned short> > >=^{PODType<unsigned short>}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)components;
- (struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> {} *x1; struct PODType<unsigned short> {} *x2; struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> {} *x_3_1_1; } x3; }*)container;
- (unsigned long long)count;
- (const void*)data;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
