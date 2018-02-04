/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrame : NSObject <WBUFormAutoFillFrameHandle> {
    WebFramePrivate * _private;
}

@property (nonatomic, readonly) DOMDocument *DOMDocument;
@property (nonatomic, readonly, copy) NSArray *childFrames;
@property (nonatomic, readonly) WebDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOMHTMLElement *frameElement;
@property (nonatomic, readonly) WebFrameView *frameView;
@property (nonatomic, readonly) struct OpaqueJSContext { }*globalContext;
@property (nonatomic, readonly) bool hasRichlyEditableDragCaret;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) JSContext *javaScriptContext;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) WebFrame *parentFrame;
@property (nonatomic, readonly) WebDataSource *provisionalDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WebView *webView;
@property (nonatomic, readonly) NSURL *webui_URL;
@property (nonatomic, readonly) struct __SecTrust { }*webui_serverTrust;
@property (nonatomic, readonly) WebScriptObject *windowObject;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (struct Ref<WebCore::Frame> { struct Frame {} *x1; })_createFrameWithPage:(struct Page { struct HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > > { struct HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> > { struct KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_1_1_1; } x1; }*)arg1 frameName:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2 frameView:(id)arg3 ownerElement:(struct HTMLFrameOwnerElement { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; struct Frame {} *x14; int x15; }*)arg4;
+ (void)_createMainFrameWithPage:(struct Page { struct HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > > { struct HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> > { struct KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_1_1_1; } x1; }*)arg1 frameName:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2 frameView:(id)arg3;
+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(struct Page { struct HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > > { struct HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> > { struct KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::Page>, std::__1::default_delete<WebCore::Supplement<WebCore::Page> > > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_1_1_1; } x1; }*)arg1 frameView:(id)arg2 style:(id)arg3;
+ (struct Ref<WebCore::Frame> { struct Frame {} *x1; })_createSubframeWithOwnerElement:(struct HTMLFrameOwnerElement { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; struct Frame {} *x14; int x15; }*)arg1 frameName:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2 frameView:(id)arg3;
+ (id)stringWithData:(id)arg1 textEncodingName:(id)arg2;

- (id)DOMDocument;
- (bool)_allowsFollowingLink:(id)arg1;
- (void)_attachScriptDebugger;
- (struct CGColor { }*)_bodyBackgroundColor;
- (id)_cacheabilityDictionary;
- (bool)_canProvideDocumentSource;
- (bool)_canSaveAsWebArchive;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRectAtPosition:(const struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_1_1; } x1; int x2; unsigned int x3 : 3; unsigned int x4 : 1; }*)arg1 affinity:(int)arg2;
- (id)_characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_clearCoreFrame;
- (void)_clearOpener;
- (void)_clearSelection;
- (void)_clearSelectionInOtherFrames;
- (void)_commitData:(id)arg1;
- (id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_convertDOMRangeToNSRange:(id)arg1;
- (id)_convertNSRangeToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct RefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct RefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rangeIsRelativeTo:(unsigned char)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_convertToNSRange:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (id)_dataSource;
- (void)_detachScriptDebugger;
- (void)_dispatchDidReceiveTitle:(id)arg1;
- (id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3;
- (id)_documentFragmentForText:(id)arg1;
- (id)_documentFragmentForWebArchive:(id)arg1;
- (id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_documentFragmentWithNodesAsParagraphs:(id)arg1;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentsOnly:(bool)arg2;
- (id)_findFrameWithSelection;
- (bool)_firstLayoutDone;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_firstRectForDOMRange:(id)arg1;
- (bool)_getVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (struct OpaqueJSContext { }*)_globalContextForScriptWorld:(id)arg1;
- (void)_handleKeyEvent:(id)arg1;
- (bool)_hasSelection;
- (id)_initWithWebFrameView:(id)arg1 webView:(id)arg2;
- (void)_insertParagraphSeparatorInQuotedContent;
- (id)_internalLoadDelegate;
- (bool)_isCommitting;
- (bool)_isDescendantOfFrame:(id)arg1;
- (bool)_isDisplayingStandaloneImage;
- (bool)_isFrameSet;
- (bool)_isIncludedInWebKitStatistics;
- (bool)_isVisuallyNonEmpty;
- (id)_javaScriptContextForScriptWorld:(id)arg1;
- (id)_layerTreeAsText;
- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;
- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;
- (int)_loadType;
- (bool)_loadsSynchronously;
- (id)_markDOMRange;
- (bool)_needsLayout;
- (id)_nodesFromList:(struct Vector<WebCore::Node *, 0, WTF::CrashOnOverflow, 16> { struct Node {} **x1; unsigned int x2; unsigned int x3; }*)arg1;
- (unsigned int)_paintBehaviorForDestinationContext:(struct CGContext { }*)arg1;
- (unsigned int)_pendingFrameUnloadEventCount;
- (id)_rectsForRange:(id)arg1;
- (void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4;
- (void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(bool)arg3 smartReplace:(bool)arg4;
- (void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3 matchStyle:(bool)arg4;
- (void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(bool)arg2 smartReplace:(bool)arg3;
- (void)_restoreViewState;
- (void)_saveViewState;
- (void)_scrollDOMRangeToVisible:(id)arg1;
- (void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)_selectAll;
- (void)_selectNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (id)_selectedString;
- (int)_selectionGranularity;
- (id)_selectionRangeForFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)_selectionRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setInternalLoadDelegate:(id)arg1;
- (void)_setIsCommitting:(bool)arg1;
- (void)_setLoadsSynchronously:(bool)arg1;
- (void)_setProhibitsScrolling:(bool)arg1;
- (void)_setSelectionFromNone;
- (void)_setShouldCreateRenderers:(bool)arg1;
- (void)_setTextAutosizingWidth:(double)arg1;
- (void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2;
- (void)_setVisibleSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(bool)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(struct OpaqueJSValue { }*)arg2 inScriptWorld:(id)arg3;
- (id)_stringForRange:(id)arg1;
- (id)_typingStyle;
- (void)_unmarkAllBadGrammar;
- (void)_unmarkAllMisspellings;
- (id)_unreachableURL;
- (void)_updateBackgroundAndUpdatesWhileOffscreen;
- (void)_userScrolled;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })_visiblePositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_webHTMLDocumentView;
- (id)accessibilityRoot;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (id)approximateNodeAtViewportLocation:(struct CGPoint { double x1; double x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)childFrames;
- (void)clearRangedSelectionInitialExtent;
- (void)clearSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })closestWordBoundary:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;
- (void)collapseSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertDOMRangeToNSRange:(id)arg1;
- (id)convertNSRangeToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; }*)coreFrame;
- (id)dataSource;
- (void)dealloc;
- (id)deepestNodeAtViewportLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)deviceOrientationChanged;
- (id)dictationResultMetadataForRange:(id)arg1;
- (id)documentView;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)elementRangeContainingCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementRectAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)endPosition;
- (bool)enhancedAccessibilityEnabled;
- (void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint { double x1; double x2; })arg1 initialEndPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)expandSelectionToElementContainingCaretSelection;
- (void)expandSelectionToSentence;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)expandSelectionToWordContainingCaretSelection;
- (void)extendSelection:(bool)arg1;
- (id)findFrameNamed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForDOMRange:(id)arg1;
- (bool)focusedNodeHasContent;
- (struct __CTFont { }*)fontForSelection:(bool*)arg1;
- (void)forceLayoutAdjustingViewSize:(bool)arg1;
- (unsigned int)formElementsCharacterCount;
- (id)frameElement;
- (id)frameView;
- (void)getDictationResultRanges:(id*)arg1 andMetadatas:(id*)arg2;
- (struct OpaqueJSContext { }*)globalContext;
- (bool)hasEditableSelection;
- (bool)hasRichlyEditableDragCaret;
- (bool)hasRichlyEditableSelection;
- (bool)hasSelection;
- (struct CGImage { }*)imageForNode:(id)arg1 allowDownsampling:(bool)arg2 drawContentBehindTransparentNodes:(bool)arg3;
- (id)init;
- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;
- (int)innerLineHeight:(id)arg1;
- (id)interpretationsForCurrentRoot;
- (bool)isTelephoneNumberParsingAllowed;
- (bool)isTelephoneNumberParsingEnabled;
- (id)javaScriptContext;
- (struct OpaqueJSValue { }*)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2;
- (int)layoutCount;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadArchive:(id)arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)markedTextDOMRange;
- (void)moveSelectionToEnd;
- (void)moveSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveSelectionToStart;
- (id)name;
- (bool)needsLayout;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2;
- (id)parentFrame;
- (int)preferredHeight;
- (void)prepareForPause;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (void)printToCGContext:(struct CGContext { }*)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3;
- (id)provisionalDataSource;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForScrollToVisible;
- (void)recursiveSetUpdateAppearanceEnabled:(bool)arg1;
- (void)reload;
- (void)reloadFromOrigin;
- (void)removeUnchangeableStyles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderRectForPoint:(struct CGPoint { double x1; double x2; })arg1 isReplaced:(bool*)arg2 fontSize:(float*)arg3;
- (id)renderTreeAsExternalRepresentationForPrinting:(bool)arg1;
- (bool)renderedCharactersExceed:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2;
- (void)resetSelection;
- (void)resetTextAutosizingBeforeLayout;
- (void)resumeFromPause;
- (void)revealSelectionAtExtent:(bool)arg1;
- (id)scrollableNodeAtViewportLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)selectNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 onElement:(id)arg2;
- (void)selectWithoutClosingTypingNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectedDOMRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedNSRange;
- (int)selectionAffinity;
- (bool)selectionAtDocumentStart;
- (bool)selectionAtSentenceStart;
- (bool)selectionAtWordStart;
- (int)selectionBaseWritingDirection;
- (id)selectionRects;
- (id)selectionRectsForCoreRange:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (void)sendScrollEvent;
- (void)setAccessibleName:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setCaretColor:(struct CGColor { }*)arg1;
- (void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3;
- (void)setEnhancedAccessibility:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setMarkedText:(id)arg1 forCandidates:(bool)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setNeedsLayout;
- (void)setPluginsPaused:(bool)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (bool)setRangedSelectionExtentPoint:(struct CGPoint { double x1; double x2; })arg1 baseIsStart:(bool)arg2 allowFlipping:(bool)arg3;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(bool)arg3;
- (void)setSelectionChangeCallbacksDisabled:(bool)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (bool)setSelectionWithBasePoint:(struct CGPoint { double x1; double x2; })arg1 extentPoint:(struct CGPoint { double x1; double x2; })arg2 baseIsStart:(bool)arg3;
- (bool)setSelectionWithBasePoint:(struct CGPoint { double x1; double x2; })arg1 extentPoint:(struct CGPoint { double x1; double x2; })arg2 baseIsStart:(bool)arg3 allowFlipping:(bool)arg4;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setText:(id)arg1 asChildOfElement:(id)arg2;
- (void)setTimeoutsPaused:(bool)arg1;
- (void)smartExtendRangedSelection:(int)arg1;
- (bool)spaceFollowsWordInRange:(id)arg1;
- (id)startPosition;
- (void)stopLoading;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(bool)arg2;
- (id)stringForRange:(id)arg1;
- (void)toggleBaseWritingDirection;
- (void)updateLayout;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })visiblePositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)webView;
- (id)webVisiblePositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)windowObject;
- (id)wordAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)wordInRange:(id)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (id)wordsInCurrentParagraph;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)containsOnlySelectableElements;
- (bool)isMainFrame;
- (bool)isTexty;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (id)dd_newOperation;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (id)webui_URL;
- (struct __SecTrust { }*)webui_serverTrust;

@end
