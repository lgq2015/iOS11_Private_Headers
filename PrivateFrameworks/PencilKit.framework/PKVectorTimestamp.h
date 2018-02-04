/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKVectorTimestamp : NSObject <CHStrokeProviderVersion, NSCopying> {
    NSMutableDictionary * _clock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (long long)compareClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (unsigned long long)compareTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (void)incrementClockForUUID:(id)arg1;
- (id)init;
- (id)initWithArchive:(const struct VectorTimestamp { int (**x1)(); struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_1; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (void)saveToArchive:(struct VectorTimestamp { int (**x1)(); struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_1; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_1_2_2; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > {} *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)serialize;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)shortDescription;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;

@end
