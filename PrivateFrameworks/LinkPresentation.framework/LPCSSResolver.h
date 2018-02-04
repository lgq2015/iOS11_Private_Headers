/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCSSResolver : NSObject {
    bool  _generateEmailCompatibleMarkup;
    bool  _includeClassNamesWhenUsingInlineStyles;
    NSMutableDictionary * _localVariables;
    NSMutableSet * _pendingVariables;
    LPTheme * _theme;
    bool  _useInlineStyles;
    bool  _useVariablesWhenUsingInlineStyles;
}

@property (nonatomic) bool generateEmailCompatibleMarkup;
@property (nonatomic) bool includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, readonly) NSMutableDictionary *localVariables;
@property (nonatomic, readonly) NSMutableSet *pendingVariables;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) bool useCSSVariables;
@property (nonatomic) bool useInlineStyles;
@property (nonatomic) bool useVariablesWhenUsingInlineStyles;

- (void).cxx_destruct;
- (void)addStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)buildCSSDeclarationsFromRuleDictionary:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3 spacer:(id)arg4 forBuffer:(id)arg5;
- (id)buildInlineStyleForRuleDictionary:(id)arg1;
- (void)buildPendingVariableSetForRuleDictionary:(id)arg1;
- (id)buildStyleSheet;
- (id)components;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)generateEmailCompatibleMarkup;
- (bool)includeClassNamesWhenUsingInlineStyles;
- (id)initWithTheme:(id)arg1;
- (id)localVariables;
- (id)localVariablesAsCSSVariables;
- (id)pendingVariables;
- (void)registerAlternateStyle:(id)arg1 inComponent:(id)arg2;
- (id)resolveCSSValue:(id)arg1;
- (id)ruleDictionaryForStyle:(id)arg1 forComponentClass:(Class)arg2;
- (void)setGenerateEmailCompatibleMarkup:(bool)arg1;
- (void)setIncludeClassNamesWhenUsingInlineStyles:(bool)arg1;
- (void)setStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)setUseInlineStyles:(bool)arg1;
- (void)setUseVariablesWhenUsingInlineStyles:(bool)arg1;
- (id)theme;
- (id)themeVariablesAsCSSVariables;
- (bool)useCSSVariables;
- (bool)useInlineStyles;
- (bool)useVariablesWhenUsingInlineStyles;

@end
