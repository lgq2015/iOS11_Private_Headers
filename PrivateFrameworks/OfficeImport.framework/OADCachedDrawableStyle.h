/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedDrawableStyle : NSObject {
    int  mFillCategory;
    unsigned long long  mFillIndex;
    unsigned char  mReflectionOpacity;
    unsigned long long  mShadowIndex;
    unsigned long long  mStrokeIndex;
    unsigned long long  mTextStyleIndex;
}

@property (nonatomic, readonly) int fillCategory;
@property (nonatomic, readonly) unsigned long long fillIndex;
@property (nonatomic, readonly) unsigned char reflectionOpacity;
@property (nonatomic, readonly) unsigned long long shadowIndex;
@property (nonatomic, readonly) unsigned long long strokeIndex;
@property (nonatomic, readonly) unsigned long long textStyleIndex;

- (int)fillCategory;
- (unsigned long long)fillIndex;
- (unsigned long long)hash;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned char)reflectionOpacity;
- (unsigned long long)shadowIndex;
- (unsigned long long)strokeIndex;
- (unsigned long long)textStyleIndex;

@end
