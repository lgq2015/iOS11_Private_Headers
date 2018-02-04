/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { 
        struct PODType<unsigned char> {} *__begin_; 
        struct PODType<unsigned char> {} *__end_; 
        struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { 
            struct PODType<unsigned char> {} *__first_; 
        } __end_cap_; 
    }  mContainer;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<TSCH3D::PODType<unsigned char>' */ struct *container; /* unknown property attribute:  std::__1::allocator<TSCH3D::PODType<unsigned char> > >=^{PODType<unsigned char>}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)components;
- (struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> {} *x1; struct PODType<unsigned char> {} *x2; struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> {} *x_3_1_1; } x3; }*)container;
- (unsigned long long)count;
- (const void*)data;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
