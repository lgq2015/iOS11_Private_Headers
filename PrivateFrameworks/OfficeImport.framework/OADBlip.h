/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBlip : NSObject {
    OADSubBlip * mAltSubBlip;
    OADSubBlip * mMainSubBlip;
    unsigned int  mReferenceCount;
}

+ (id)pathExtensionForBlipType:(int)arg1;

- (id)altSubBlip;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mainSubBlip;
- (unsigned int*)referenceCount;
- (void)setAltSubBlip:(id)arg1;
- (void)setMainSubBlip:(id)arg1;

@end
