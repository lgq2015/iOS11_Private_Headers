/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTaggedText : NSMutableAttributedString {
    NSMutableAttributedString * _attrString;
    id /* block */  _evaluationBlock;
    NSMutableDictionary * _globalAttributes;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (getter=isSpeakable, nonatomic) bool speakable;
@property (nonatomic, readonly) NSString *speakableText;

+ (id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_evaluateIfNeeded;
- (id)_initWithAttributedString:(id)arg1;
- (bool)_isEvaluated;
- (void)_setNeedEvaluation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_stringRange;
- (id)_substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addGlobalTag:(id)arg1;
- (void)addTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)debugDescription;
- (bool)hasGlobalTag:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (bool)isRangeSpeakable:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isSpeakable;
- (id)locale;
- (id)mutableString;
- (void)removeGlobalTag:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSpeakable:(bool)arg1;
- (id)speakableText;
- (id)string;

@end
