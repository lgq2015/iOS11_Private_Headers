/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceLandmarksRegion3D : CVMLFaceLandmarksRegion {
    const /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
}

@property const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

- (void)dealloc;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 pointCount:(unsigned long long)arg2;
- (void)pointAtIndex:(unsigned long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)setPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;

@end