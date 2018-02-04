/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBackgroundProperties : OADBackground {
    NSArray * mEffects;
    OADFill * mFill;
}

- (void)dealloc;
- (id)effects;
- (id)fill;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;

@end
