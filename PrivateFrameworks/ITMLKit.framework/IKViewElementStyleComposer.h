/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementStyleComposer : NSObject {
    IKViewElementStyle * _composedSansDefaultStyle;
    IKViewElementStyle * _composedStyle;
    bool  _compositionDone;
    IKViewElementStyleComposer * _defaultStyleComposer;
    IKViewElementStyle * _elementStyleOverrides;
    IKViewElementStyleComposer * _parentStyleComposer;
    bool  _requiresMediaQueryEvaluation;
    IKStyleList * _styleList;
}

@property (nonatomic, retain) IKViewElementStyle *composedSansDefaultStyle;
@property (nonatomic, retain) IKViewElementStyle *composedStyle;
@property (getter=isCompositionDone, nonatomic) bool compositionDone;
@property (nonatomic, readonly, retain) IKViewElementStyleComposer *defaultStyleComposer;
@property (nonatomic, readonly, retain) IKViewElementStyle *elementStyleOverrides;
@property (nonatomic, readonly, retain) IKViewElementStyleComposer *parentStyleComposer;
@property (nonatomic, readonly) bool requiresMediaQueryEvaluation;
@property (nonatomic, readonly, retain) IKStyleList *styleList;

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;

- (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (id)composedSansDefaultStyle;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;
- (id)composedStyle;
- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)consolidatedDefaultStyleList;
- (id)defaultStyleComposer;
- (id)elementStyleOverrides;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
- (bool)isCompositionDone;
- (id)parentStyleComposer;
- (bool)requiresMediaQueryEvaluation;
- (void)setComposedSansDefaultStyle:(id)arg1;
- (void)setComposedStyle:(id)arg1;
- (void)setCompositionDone:(bool)arg1;
- (void)setNeedsRecomposition;
- (id)styleList;

@end
