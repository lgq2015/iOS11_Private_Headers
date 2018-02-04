/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGroup : OADDrawable <OADDrawableContainer> {
    NSMutableArray * mChildren;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLogicalBounds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)children;
- (void)dealloc;
- (id)description;
- (id)groupProperties;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logicalBounds;
- (void)removeChild:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParentTextListStyle:(id)arg1;

@end
