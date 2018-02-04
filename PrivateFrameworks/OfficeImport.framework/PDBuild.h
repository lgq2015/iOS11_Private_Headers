/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDBuild : NSObject {
    OADDrawable * mDrawable;
    bool  mIsAnimateBackground;
}

- (void)dealloc;
- (id)description;
- (id)drawable;
- (unsigned long long)hash;
- (id)init;
- (bool)isAnimateBackground;
- (bool)isEqual:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setIsAnimateBackground:(bool)arg1;

@end
