/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextAnnotationAttributeHelper : NSObject

+ (id)actualOrPlaceholderTextOfAnnotation:(id)arg1;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3;
+ (void)enumerateFontAttributesOfAttributedString:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)font:(id)arg1 byApplyingScaleFactor:(double)arg2;
+ (id)fontsOfAnnotations:(id)arg1;
+ (id)fontsOfEditor:(id)arg1;
+ (id)newTextStorage:(id)arg1 byApplyingScaleFactor:(double)arg2;
+ (id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg1;
+ (id)newTextStorageOriginalFontSavvyWithString:(id)arg1 attributes:(id)arg2;
+ (id)placeholderTextOfAnnotation:(id)arg1;
+ (void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(long long*)arg3 direction:(long long*)arg4;
+ (void)setFont:(id)arg1 ofAnnotation:(id)arg2;
+ (void)setTextAlignment:(long long)arg1 ofAnnotation:(id)arg2;
+ (void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2;
+ (id)textAttributesOfAnnotations:(id)arg1;
+ (id)textAttributesOfEditor:(id)arg1;
+ (id)typingAttributes:(id)arg1 byApplyingScaleFactor:(double)arg2;

@end
