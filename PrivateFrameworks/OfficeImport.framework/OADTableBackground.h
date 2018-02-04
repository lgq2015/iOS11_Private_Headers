/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableBackground : NSObject <OADEffectsParent> {
    NSArray * mEffects;
    OADFill * mFill;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)effects;
- (id)fill;
- (bool)hasEffects;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;

@end
