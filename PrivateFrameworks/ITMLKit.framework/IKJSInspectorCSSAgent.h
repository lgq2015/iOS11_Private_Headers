/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {
    NSMapTable * _authorStylesheets;
    IKJSInspectorController * _controller;
    NSMutableDictionary * _inlineStyleMap;
    IKViewElementStyleFactory * _styleFactory;
    RWIProtocolCSSStyleSheetHeader * _templateStylesheetHeader;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cssRuleForRule:(id)arg1 withOrdinal:(int)arg2 forStyleSheetHeader:(id)arg3 forStyleMarkup:(id)arg4 styleMarkupNewLineIndexSet:(id)arg5;
+ (id)_cssSelectorListWithSelectorList:(id)arg1 forStyleMarkup:(id)arg2 styleMarkupNewLineIndexSet:(id)arg3;
+ (id)_cssSourceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 newLineIndexSet:(id)arg2;
+ (id)_cssStyleWithDeclarationList:(id)arg1 forStyleMarkup:(id)arg2 styleMarkupNewLineIndexSet:(id)arg3 existingStyle:(id)arg4;
+ (id)_newLineIndexSetForCSSMarkup:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForSourceRange:(id)arg1 newLineIndexSet:(id)arg2;

- (void).cxx_destruct;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getMatchedTemplateStylesForNode:(id)arg1;
- (id)_styleNodeForStylesheetId:(id)arg1;
- (id)_stylesheetBodyForStylesheetId:(id)arg1;
- (id)_updatedInlineStyleForNode:(int)arg1 withStyleString:(id)arg2;
- (void)addRuleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 contextNodeId:(int)arg3 selector:(id)arg4;
- (void)addRuleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
- (id)controller;
- (void)createStyleSheetWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)forcePseudoStateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;
- (void)getAllStyleSheetsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 includePseudo:(bool*)arg4 includeInherited:(bool*)arg5;
- (void)getNamedFlowCollectionWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 documentNodeId:(int)arg3;
- (void)getStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getSupportedCSSPropertiesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)mediaQueryResultDidChange;
- (void)resetStylesFromNode:(id)arg1;
- (void)setPropertyTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 text:(id)arg5 overwrite:(bool)arg6;
- (void)setRuleSelectorWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 ruleId:(id)arg3 selector:(id)arg4;
- (void)setStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)setStyleTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)togglePropertyWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 disable:(bool)arg5;
- (void)updateStylesheets;

@end
