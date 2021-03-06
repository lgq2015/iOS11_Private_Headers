/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorController : NSObject {
    IKDOMDocument * _activeDocument;
    NSString * _activeDocumentIdentifier;
    IKAppContext * _appContext;
    NSMutableArray * _appDocumentStack;
    IKJSInspectorCSSAgent * _cssAgent;
    <IKJSInspectorControllerDelegate> * _delegate;
    IKJSInspectorDOMAgent * _domAgent;
    RWIProtocolInspector * _inspector;
    NSDate * _inspectorConnectDate;
    id  _inspectorConnectedToken;
    id  _inspectorDisconntectedToken;
    IKJSInspectorNetworkAgent * _networkAgent;
    IKJSInspectorPageAgent * _pageAgent;
    IKJSInspectorStorageAgent * _storageAgent;
}

@property (nonatomic, readonly) IKDOMDocument *activeDocument;
@property (nonatomic, readonly, copy) NSString *activeDocumentIdentifier;
@property (readonly) IKAppContext *appContext;
@property (nonatomic) <IKJSInspectorControllerDelegate> *delegate;
@property (nonatomic, readonly) RWIProtocolInspector *inspector;
@property (nonatomic, readonly) NSDate *inspectorConnectDate;

+ (id)_nodeById:(long long)arg1 fromNode:(id)arg2;
+ (id)_nodesByIds:(id)arg1 fromNode:(id)arg2;
+ (id)_templateNameForDocument:(id)arg1;

- (void).cxx_destruct;
- (id)activeDocument;
- (id)activeDocumentIdentifier;
- (id)appContext;
- (void)appDocumentDidAppear:(id)arg1;
- (void)appDocumentDidDisappear:(id)arg1;
- (void)appDocumentDidLoad:(id)arg1;
- (void)appDocumentDidUnload:(id)arg1;
- (void)appDocumentDidUpdate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)evaluateMediaQuery:(id /* block */)arg1;
- (id)initWithAppContext:(id)arg1;
- (id)inspector;
- (id)inspectorConnectDate;
- (void)mediaQueryResultDidChange;
- (id)nodeById:(long long)arg1;
- (id)nodesByIds:(id)arg1;
- (id)registerNetworkRequestLoader:(id)arg1;
- (void)resetStylesFromNode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)styleFromComposer:(id)arg1;
- (void)updateStylesheets;

@end
