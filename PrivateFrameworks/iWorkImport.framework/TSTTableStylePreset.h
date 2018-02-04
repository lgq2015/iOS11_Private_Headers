/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableStylePreset : TSPObject <TSKModel, TSSPreset, TSSStyleClient> {
    unsigned long long  mIndex;
    TSTTableStyleNetwork * mStyleNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, copy) TSTTableStyleNetwork *styleNetwork;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 index:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isThemeEquivalent:(id)arg1;
- (id)p_documentRoot;
- (id)presetKind;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setStyleNetwork:(id)arg1;
- (id)styleNetwork;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)swatchImage;

@end
