/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISplitViewTemplateElement : SKUIViewElement {
    SKUIJSDOMFeatureNavigationDocument * _leftNavigationDocument;
    long long  _preferredDisplayMode;
    SKUIJSDOMFeatureNavigationDocument * _rightNavigationDocument;
}

@property (readonly) SKUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (nonatomic, readonly) SKUIViewElement *leftSplitElement;
@property (nonatomic, readonly) long long preferredDisplayMode;
@property (readonly) SKUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (nonatomic, readonly) SKUIViewElement *rightSplitElement;
@property (nonatomic, readonly) bool usesInlineSplitContent;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_splitElementForIndex:(long long)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftNavigationDocument;
- (id)leftSplitElement;
- (long long)preferredDisplayMode;
- (id)rightNavigationDocument;
- (id)rightSplitElement;
- (bool)usesInlineSplitContent;

@end
