/* made by EzioChiu.
 */

@protocol NTKFaceCollectionObserver <NSObject>

@optional

- (void)faceCollection:(NTKFaceCollection *)arg1 didAddFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didRemoveFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(NTKFaceCollection *)arg1 didSelectFace:(NTKFace *)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidReorderFaces:(NTKFaceCollection *)arg1;
- (void)faceCollectionDidReset:(NTKFaceCollection *)arg1;

@end
