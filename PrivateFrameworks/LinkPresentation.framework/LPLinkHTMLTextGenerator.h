/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate> {
    LPLinkHTMLGenerator * _DOMGenerator;
    <LPLinkHTMLTextGeneratorDelegate> * _delegate;
    NSString * _generatedDocumentText;
    NSString * _generatedFragmentText;
    WebView * _webView;
}

@property (nonatomic, readonly, copy) NSString *HTMLDocumentString;
@property (nonatomic, readonly, copy) NSString *HTMLFragmentString;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPLinkHTMLTextGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool generateEmailCompatibleMarkup;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)HTMLDocumentString;
- (id)HTMLFragmentString;
- (id)URL;
- (id)delegate;
- (bool)generateEmailCompatibleMarkup;
- (id)init;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3;
- (id)metadata;
- (void)setDelegate:(id)arg1;
- (void)setGenerateEmailCompatibleMarkup:(bool)arg1;
- (void)setMetadata:(id)arg1;

@end
