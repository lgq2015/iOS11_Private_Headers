/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILabelViewElement : SKUIViewElement <SKUILinkHandler> {
    long long  _badgePlacement;
    NSArray * _badges;
    bool  _containsLinks;
    NSMutableDictionary * _domObjectsToViewElements;
    long long  _labelViewStyle;
    long long  _linkCounter;
    <SKUILinkHandler> * _linkDelegate;
    NSMutableDictionary * _linkToViewButtonElements;
    NSString * _moreButtonTitle;
    long long  _numberOfLines;
    SKUIViewElementText * _text;
    NSArray * _trailingBadges;
    IKDOMElement * _xml;
}

@property (nonatomic, readonly) long long badgePlacement;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic) bool containsLinks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long labelViewStyle;
@property (nonatomic) <SKUILinkHandler> *linkDelegate;
@property (nonatomic, readonly) NSString *moreButtonTitle;
@property (nonatomic, readonly) long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUIViewElementText *text;
@property (nonatomic, readonly) NSArray *trailingBadges;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (void)_createText:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;
- (id)_stringFromNumberElement:(id)arg1;
- (void)_walkDOM:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)badgePlacement;
- (id)badges;
- (bool)containsLinks;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)labelViewStyle;
- (id)linkDelegate;
- (void)linkTapped:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)moreButtonTitle;
- (long long)numberOfLines;
- (long long)pageComponentType;
- (void)setContainsLinks:(bool)arg1;
- (void)setLinkDelegate:(id)arg1;
- (id)text;
- (id)trailingBadges;
- (id)uniquingMapKey;

@end
