/* made by EzioChiu.
 */

@protocol PVFaceGroupProtocol <NSObject>

@required

- (unsigned long long)faceCountInFaceGroup;
- (bool)isDirty;
- (NSString *)localIdentifier;

@end
