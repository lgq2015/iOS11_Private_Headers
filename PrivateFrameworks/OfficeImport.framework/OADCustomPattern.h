/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCustomPattern : OADPattern {
    OADBlipRef * mBlipRef;
    bool  mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (id)blipRef;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isBlipRefOverridden;
- (bool)isEqual:(id)arg1;
- (void)setBlipRef:(id)arg1;

@end
