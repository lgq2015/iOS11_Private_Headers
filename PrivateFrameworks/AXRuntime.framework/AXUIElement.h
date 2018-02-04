/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXUIElement : NSObject <UIElementProtocol> {
    struct __AXUIElement { } * _axElement;
    NSMutableDictionary * _cachedAttributes;
    long long  _cachedRefCount;
    bool  _isValid;
}

@property (nonatomic, readonly) struct __AXUIElement { }*axElement;
@property (nonatomic, readonly, copy) NSMutableDictionary *cachedAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (void)initialize;
+ (struct __AXUIElement { }*)systemWideAXUIElement;
+ (id)uiApplicationAtCoordinate:(struct CGPoint { double x1; double x2; })arg1;
+ (id)uiApplicationForContext:(unsigned int)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1 forApplication:(struct __AXUIElement { }*)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1 startWithElement:(id)arg2;
+ (id)uiElementWithAXElement:(struct __AXUIElement { }*)arg1;
+ (id)uiElementWithAXElement:(struct __AXUIElement { }*)arg1 cache:(id)arg2;
+ (id)uiSystemWideApplication;

- (void).cxx_destruct;
- (id)_attributedValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void*)_cachedValueForAttribute:(long long)arg1;
- (void)_createCache:(bool)arg1;
- (id)_elementsWithParameter:(long long)arg1 andCount:(unsigned long long)arg2;
- (void)_invalidate;
- (long long)_lineEndPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_lineRangeForPosition:(unsigned long long)arg1;
- (long long)_lineStartPosition;
- (id)_objectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withParameterizedAttribute:(long long)arg2;
- (id)_outputCache;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedTextRange;
- (void)_setCachedValue:(void*)arg1 forAttribute:(long long)arg2;
- (id)_valueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (struct __AXUIElement { }*)axElement;
- (bool)boolWithAXAttribute:(long long)arg1;
- (id)cachedAttributes;
- (bool)canPerformAXAction:(int)arg1;
- (struct CGColor { }*)colorWithAXAttribute:(long long)arg1;
- (void)dealloc;
- (void)disableCache;
- (void)enableCache:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithAXElement:(struct __AXUIElement { }*)arg1;
- (id)initWithAXElement:(struct __AXUIElement { }*)arg1 cache:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isMockElement;
- (bool)isValid;
- (bool)isValidForApplication:(id)arg1;
- (void*)modifyStaticCacheValue:(void*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 currentCursorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2;
- (struct CGPath { }*)pathWithAXAttribute:(long long)arg1;
- (bool)performAXAction:(int)arg1;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (int)pid;
- (struct CGPoint { double x1; double x2; })pointWithAXAttribute:(long long)arg1;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithAXAttribute:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithAXAttribute:(long long)arg1;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(bool)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(bool)arg3;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXElement:(struct __AXUIElement { }*)arg1;
- (void)setCachedAttributes:(id)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(bool)arg3;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (id)valueArrayWithAXAttributes:(struct __CFArray { }*)arg1;

@end
