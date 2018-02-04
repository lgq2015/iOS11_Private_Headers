/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHState : NSObject {
    int  mCachedCellStyleIndex;
    struct __CFDictionary { } * mCachedTableStyles;
    int  mCachedTextStyleIndex;
    struct __CFDictionary { } * mCachedTextStyles;
    struct __CFDictionary { } * mColorStrings;
    int  mColoredBackgroundLayerCount;
    struct __CFArray { } * mGraphicPropertiesStack;
    GQHXML * mHtmlDoc;
    struct __CFArray { } * mImplicitStyles;
    int  mInlineStyleIndex;
    struct __CFDictionary { } * mInlineStyles;
    int  mMultiColumnedDepth;
    int  mOutlineLevel;
    int  mOutlineStyleType;
    int  mParagraphCount;
    int  mParagraphIndex;
    GQSDocument * mProcessorState;
    struct CGSize { 
        double width; 
        double height; 
    }  mScale;
    <GQHContext> * mShapeContext;
    int  mShapeIDCounter;
    struct __CFString { } * mStyleData;
    struct __CFDictionary { } * mStyleIndexes;
    struct __CFDictionary { } * mStyleNameMap;
    GQHTableState * mTableState;
    unsigned int  mTextScale;
}

- (struct __CFString { }*)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString { }*)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowInlineWrap;
- (struct __CFString { }*)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6;
- (struct __CFString { }*)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6;
- (struct __CFString { }*)className:(id)arg1;
- (bool)coloredBackground;
- (struct __CFString { }*)createStyleName:(id)arg1 type:(const char *)arg2;
- (struct __CFString { }*)createUniqueShapeId:(const char *)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (void)dealloc;
- (bool)drawablesNeedCssZOrdering;
- (void)enterGraphicObject;
- (bool)finishMainHtml;
- (struct __CFString { }*)getColorString:(id)arg1;
- (id)htmlDoc;
- (id)implicitStyle;
- (int)indexForStyle:(const char *)arg1;
- (id)initWithState:(id)arg1;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithState:(id)arg1 needIndexFile:(bool)arg2 documentSize:(struct CGSize { double x1; double x2; })arg3;
- (void)invalidateTextScale;
- (void)leaveGraphicObject;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1 inDocument:(id)arg2;
- (bool)multiColumned;
- (bool)needAbsolutelyPositionedTables;
- (int)outlineLevel;
- (int)outlineStyleType;
- (int)paragraphCount;
- (int)paragraphIndex;
- (void)popImplicitStyle;
- (id)processorState;
- (void)pushImplicitStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })scale;
- (void)setColoredBackground:(bool)arg1;
- (void)setMultiColumned:(bool)arg1;
- (void)setOutlineLevel:(int)arg1;
- (void)setOutlineStyleType:(int)arg1;
- (void)setParagraphCount:(int)arg1;
- (void)setParagraphIndex:(int)arg1;
- (void)setScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextScale:(unsigned int)arg1;
- (id)shapeContext;
- (bool)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (id)tableState;
- (unsigned int)textScale;
- (bool)useOutline;

@end
