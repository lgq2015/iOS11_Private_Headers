/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideBase : NSObject {
    PDAnimation * mAnimation;
    OADBackground * mBackground;
    OADTableStyle * mDefaultTableStyle;
    NSArray * mDrawables;
    unsigned int  mIsDoneWithContent;
    unsigned int  mIsHidden;
    NSString * mName;
    PDTransition * mPpt2011Transition;
    unsigned int  mSlideId;
    PDTransition * mTransition;
}

@property (nonatomic) unsigned int slideId;

+ (int)inheritedPlaceholderType:(int)arg1;

- (void)addSlideNumberPlaceholder:(id)arg1;
- (id)animation;
- (id)background;
- (id)colorMap;
- (id)colorScheme;
- (void)dealloc;
- (id)defaultTableStyle;
- (id)defaultTextListStyle;
- (id)defaultTheme;
- (id)description;
- (void)doneWithContent;
- (id)drawables;
- (id)drawingTheme;
- (id)fontScheme;
- (void)generatePpt9Animations:(id)arg1;
- (bool)hasPpt10Animations;
- (bool)hasPpt9Animations;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (id)init;
- (bool)isHidden;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)name;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(bool)arg3 overrideIndex:(bool)arg4;
- (id)placeholders;
- (id)ppt2011Transition;
- (void)removeUnnecessaryOverrides;
- (void)setBackground:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setDrawables:(id)arg1;
- (void)setDrawablesNoHierarchy:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPpt2011Transition:(id)arg1;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;
- (void)setSlideId:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (void)setUpDrawablePropertyHierarchy;
- (void)setUpPropertyHierarchyForDrawable:(id)arg1;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (unsigned int)slideId;
- (id)styleMatrix;
- (id)transition;

@end
