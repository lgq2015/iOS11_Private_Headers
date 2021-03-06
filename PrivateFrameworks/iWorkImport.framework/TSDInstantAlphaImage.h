/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInstantAlphaImage : NSObject {
    long long  mHeight;
    unsigned int * mImageData;
    long long  mWidth;
}

- (unsigned int)averageColorAtXPosition:(long long)arg1 yPosition:(long long)arg2;
- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end
