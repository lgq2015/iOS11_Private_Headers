/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKVectorMultiTimestamp : NSObject <NSCopying> {
    NSArray * _timestamps;
}

@property (nonatomic, readonly) NSArray *timestamps;

- (void).cxx_destruct;
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)compareTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct VectorTimestamp { int (**x1)(); struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_1; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithTimestamps:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (void)saveToArchive:(struct VectorTimestamp { int (**x1)(); struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_1; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)serialize;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)sortedUUIDs;
- (id)timestamps;

@end
