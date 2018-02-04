/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PCAMatrixArray : NSObject <NSCoding> {
    NSMutableArray * _matrixComponents;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)pcaMatrix;
- (void)setPCAMatrix:(id)arg1;

@end
