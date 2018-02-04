/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKHighlightAnnotationController : NSObject {
    AKHighlightAnnotation * _continuousHighlight;
    AKController * _controller;
}

@property (retain) AKHighlightAnnotation *continuousHighlight;
@property AKController *controller;

- (void).cxx_destruct;
- (bool)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id*)arg3;
- (bool)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 onPageController:(id)arg4;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 onPageController:(id)arg2;
- (void)beginContinuousHighlighting;
- (void)clearHighlightsWithinSelection;
- (void)continueHighlighting;
- (id)continuousHighlight;
- (id)controller;
- (void)endContinuousHighlighting;
- (id)highlightsWithinSelection;
- (id)initWithController:(id)arg1;
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;
- (void)setContinuousHighlight:(id)arg1;
- (void)setController:(id)arg1;

@end
