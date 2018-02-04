/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSDFillTexture : TSCH3DTexture {
    TSDFill * mFill;
}

+ (id)textureWithTSDFill:(id)arg1;

- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)initWithTSDFill:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
