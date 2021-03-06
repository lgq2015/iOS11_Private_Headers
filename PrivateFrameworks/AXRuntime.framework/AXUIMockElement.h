/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXUIMockElement : AXUIElement <NSCopying> {
    NSMutableDictionary * _attributes;
    NSMutableDictionary * _performActionLog;
    bool  _usesCarriageReturnAsLinesSeparator;
    NSMutableDictionary * _writableAttributes;
}

@property (nonatomic) bool usesCarriageReturnAsLinesSeparator;

+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_valueForAttribute:(long long)arg1;
- (unsigned long long)arrayCountWithAXAttribute:(long long)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (struct __AXUIElement { }*)axElement;
- (bool)boolWithAXAttribute:(long long)arg1;
- (bool)canPerformAXAction:(int)arg1;
- (bool)canSetAXAttribute:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)disableCache;
- (void)enableCache:(bool)arg1;
- (void)fillStaticCache;
- (float)floatWithAXAttribute:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMockElement;
- (bool)isValid;
- (bool)isValidForApplication:(id)arg1;
- (long long)longWithAXAttribute:(long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2;
- (struct CGPath { }*)pathWithAXAttribute:(long long)arg1;
- (bool)performAXAction:(int)arg1;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (id)performBlockWhileLoggingPerformedActions:(id /* block */)arg1;
- (int)pid;
- (struct CGPoint { double x1; double x2; })pointForLineNumber:(unsigned long long)arg1;
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
- (void)setUsesCarriageReturnAsLinesSeparator:(bool)arg1;
- (void)setValue:(id)arg1 forAXAttribute:(long long)arg2;
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2;
- (void)setWritable:(bool)arg1 forAXAttribute:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeWithAXAttribute:(long long)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)uiElementArrayForAXAttribute:(long long)arg1;
- (id)uiElementWithAXAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(bool)arg3;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (id)urlWithAXAttribute:(long long)arg1;
- (bool)usesCarriageReturnAsLinesSeparator;
- (id)visibleElements;

@end
