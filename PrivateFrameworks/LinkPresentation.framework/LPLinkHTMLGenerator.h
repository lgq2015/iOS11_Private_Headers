/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkHTMLGenerator : NSObject {
    NSURL * _URL;
    bool  _allowsTapToLoad;
    bool  _applyCornerRadiusToLink;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPCSSResolver * _cssResolver;
    <LPLinkHTMLGeneratorDelegate> * _delegate;
    bool  _everBuiltView;
    bool  _generateEmailCompatibleMarkup;
    LPImage * _image;
    bool  _includeClassNamesWhenUsingInlineStyles;
    bool  _isPreliminary;
    LPHTMLComponent * _linkComponent;
    bool  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    LPLinkMetadata * _metadata;
    DOMDocument * _parentDocument;
    LPMetadataProvider * _pendingMetadataProvider;
    NSString * _quotedText;
    DOMElement * _rootElement;
    long long  _style;
    LPTheme * _theme;
    bool  _useInlineStyles;
    bool  _useVariablesWhenUsingInlineStyles;
    bool  _usesComputedPresentationProperties;
    LPVideo * _video;
    LPHTMLVideoComponent * _videoComponent;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (setter=_setAllowsTapToLoad:, nonatomic) bool _allowsTapToLoad;
@property (nonatomic, readonly) bool _canTapToLoad;
@property (setter=_setIncludeClassNamesWhenUsingInlineStyles:, nonatomic) bool _includeClassNamesWhenUsingInlineStyles;
@property (setter=_setUseVariablesWhenUsingInlineStyles:, nonatomic) bool _useVariablesWhenUsingInlineStyles;
@property (nonatomic) bool applyCornerRadiusToLink;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) LPCSSResolver *cssResolver;
@property (nonatomic) <LPLinkHTMLGeneratorDelegate> *delegate;
@property (nonatomic, readonly) bool delegateRespondsToURLForResource;
@property (nonatomic, readonly, retain) DOMDocumentFragment *documentFragment;
@property (nonatomic) bool generateEmailCompatibleMarkup;
@property (nonatomic, readonly) bool hasPendingMetadataProvider;
@property (nonatomic, readonly) bool hasTallMedia;
@property (nonatomic, readonly) bool isPreliminary;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly) DOMDocument *parentDocument;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) bool useFlexibleWidth;
@property (nonatomic) bool useInlineStyles;

+ (void)initialize;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
- (bool)_allowsTapToLoad;
- (bool)_canTapToLoad;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (void)_didFollowLink;
- (void)_fetchMetadata;
- (bool)_includeClassNamesWhenUsingInlineStyles;
- (void)_rebuildView;
- (void)_setAllowsTapToLoad:(bool)arg1;
- (void)_setIncludeClassNamesWhenUsingInlineStyles:(bool)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(bool)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setUseVariablesWhenUsingInlineStyles:(bool)arg1;
- (bool)_useVariablesWhenUsingInlineStyles;
- (bool)applyCornerRadiusToLink;
- (id)backgroundColor;
- (void)clearCurrentLayout;
- (id)cssResolver;
- (id)delegate;
- (bool)delegateRespondsToURLForResource;
- (id)documentFragment;
- (bool)generateEmailCompatibleMarkup;
- (bool)hasPendingMetadataProvider;
- (bool)hasTallMedia;
- (id)init;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (void)injectCSSIfNeeded;
- (bool)isPreliminary;
- (id)metadata;
- (id)parentDocument;
- (void)setApplyCornerRadiusToLink:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerateEmailCompatibleMarkup:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUseInlineStyles:(bool)arg1;
- (long long)style;
- (id)theme;
- (bool)useFlexibleWidth;
- (bool)useInlineStyles;

@end
