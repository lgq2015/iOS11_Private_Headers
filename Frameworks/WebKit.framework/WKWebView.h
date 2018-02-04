/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebView : UIView <UIScrollViewDelegate, WBUFormAutoFillWebView> {
    int  _activeAnimatedResizeCount;
    unsigned long long  _activeFocusedStateRetainCount;
    bool  _allowsBackForwardNavigationGestures;
    bool  _allowsLinkPreview;
    bool  _allowsViewportShrinkToFit;
    bool  _avoidsUnsafeArea;
    bool  _commitDidRestoreScrollPosition;
    struct RetainPtr<WKWebViewConfiguration> { 
        void *m_ptr; 
    }  _configuration;
    struct RetainPtr<WKContentView> { 
        void *m_ptr; 
    }  _contentView;
    bool  _currentlyAdjustingScrollViewInsetsForKeyboard;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _customContentFixedOverlayView;
    struct RetainPtr<UIView<WKWebViewContentProvider> > { 
        void *m_ptr; 
    }  _customContentView;
    bool  _delayUpdateVisibleContentRects;
    bool  _didScrollSinceLastTimerFire;
    unsigned long long  _dragInteractionPolicy;
    int  _dynamicViewportUpdateMode;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _enclosingScrollViewScrollTimer;
    bool  _fastClickingIsDisabled;
    unsigned long long  _firstPaintAfterCommitLoadTransactionID;
    unsigned long long  _firstTransactionIDAfterPageRestore;
    struct optional<CGRect> { 
        bool init_; 
        union constexpr_storage_t<CGRect> { 
            unsigned char dummy_; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } value_; 
        } storage_; 
    }  _frozenUnobscuredContentRect;
    struct optional<CGRect> { 
        bool init_; 
        union constexpr_storage_t<CGRect> { 
            unsigned char dummy_; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } value_; 
        } storage_; 
    }  _frozenVisibleContentRect;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> > { 
        struct __compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> > { 
            struct ViewGestureController {} *__first_; 
        } __ptr_; 
    }  _gestureController;
    bool  _hadDelayedUpdateVisibleContentRects;
    bool  _hasCommittedLoadForMainFrame;
    bool  _hasScheduledVisibleRectUpdate;
    bool  _haveSetObscuredInsets;
    bool  _haveSetUnobscuredSafeAreaInsets;
    struct unique_ptr<WebKit::IconLoadingDelegate, std::__1::default_delete<WebKit::IconLoadingDelegate> > { 
        struct __compressed_pair<WebKit::IconLoadingDelegate *, std::__1::default_delete<WebKit::IconLoadingDelegate> > { 
            struct IconLoadingDelegate {} *__first_; 
        } __ptr_; 
    }  _iconLoadingDelegate;
    double  _initialScaleFactor;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKInputDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKInputDelegate> > { 
        id m_weakReference; 
    }  _inputDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputViewBounds;
    long long  _interfaceOrientationOverride;
    bool  _isChangingObscuredInsetsInteractively;
    double  _lastAdjustmentForScroller;
    struct optional<int> { 
        bool init_; 
        union constexpr_storage_t<int> { 
            unsigned char dummy_; 
            int value_; 
        } storage_; 
    }  _lastSentDeviceOrientation;
    struct optional<WebCore::FloatSize> { 
        bool init_; 
        union constexpr_storage_t<WebCore::FloatSize> { 
            unsigned char dummy_; 
            struct FloatSize { 
                float m_width; 
                float m_height; 
            } value_; 
        } storage_; 
    }  _lastSentMaximumUnobscuredSize;
    struct optional<WebCore::FloatSize> { 
        bool init_; 
        union constexpr_storage_t<WebCore::FloatSize> { 
            unsigned char dummy_; 
            struct FloatSize { 
                float m_width; 
                float m_height; 
            } value_; 
        } storage_; 
    }  _lastSentMinimumLayoutSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumUnobscuredSizeOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumLayoutSizeOverride;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> > { 
        struct __compressed_pair<WebKit::NavigationState *, std::__1::default_delete<WebKit::NavigationState> > { 
            struct NavigationState {} *__first_; 
        } __ptr_; 
    }  _navigationState;
    bool  _needsResetViewStateAfterCommitLoadForMainFrame;
    unsigned long long  _obscuredInsetEdgesAffectedBySafeArea;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _obscuredInsets;
    struct BoxExtent<float> { 
        struct array<float, 4> { 
            float __elems_[4]; 
        } m_sides; 
    }  _obscuredInsetsWhenSaved;
    unsigned long long  _observedRenderingProgressEvents;
    bool  _overridesInterfaceOrientation;
    bool  _overridesMaximumUnobscuredSize;
    bool  _overridesMinimumLayoutSize;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
    struct RetainPtr<WKPasswordView> { 
        void *m_ptr; 
    }  _passwordView;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    }  _remoteObjectRegistry;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _resizeAnimationTransformAdjustments;
    struct optional<unsigned long long> { 
        bool init_; 
        union constexpr_storage_t<unsigned long long> { 
            unsigned char dummy_; 
            unsigned long long value_; 
        } storage_; 
    }  _resizeAnimationTransformTransactionID;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _resizeAnimationView;
    double  _scaleToRestore;
    struct optional<WebCore::FloatPoint> { 
        bool init_; 
        union constexpr_storage_t<WebCore::FloatPoint> { 
            unsigned char dummy_; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } value_; 
        } storage_; 
    }  _scrollOffsetToRestore;
    struct RetainPtr<WKScrollView> { 
        void *m_ptr; 
    }  _scrollView;
    struct Color { 
        union { 
            unsigned long long rgbaAndFlags; 
            struct ExtendedColor {} *extendedColor; 
        } m_colorData; 
    }  _scrollViewBackgroundColor;
    struct Vector<WTF::Function<void ()>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^{Function<void ()> {}  _snapshotsDeferredDuringResize;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _stableStatePresentationUpdateCallbacks;
    double  _totalScrollViewBottomInsetAdjustmentForKeyboard;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> > { 
        struct __compressed_pair<WebKit::UIDelegate *, std::__1::default_delete<WebKit::UIDelegate> > { 
            struct UIDelegate {} *__first_; 
        } __ptr_; 
    }  _uiDelegate;
    struct optional<WebCore::FloatPoint> { 
        bool init_; 
        union constexpr_storage_t<WebCore::FloatPoint> { 
            unsigned char dummy_; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } value_; 
        } storage_; 
    }  _unobscuredCenterToRestore;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _unobscuredSafeAreaInsets;
    bool  _viewportMetaTagCameFromImageDocument;
    double  _viewportMetaTagWidth;
    bool  _viewportMetaTagWidthWasExplicit;
    struct Vector<WTF::BlockPtr<void ()>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^{BlockPtr<void ()> {}  _visibleContentRectUpdateCallbacks;
    bool  _visibleContentRectUpdateScheduledFromScrollViewInStableState;
}

@property (nonatomic) <WKUIDelegate> *UIDelegate;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *_MIMEType;
@property (setter=_setAddsVisitedLinks:, nonatomic) bool _addsVisitedLinks;
@property (nonatomic, readonly) bool _allowsBlockSelection;
@property (nonatomic, readonly) bool _allowsDoubleTapGestures;
@property (getter=_allowsMediaDocumentInlinePlayback, setter=_setAllowsMediaDocumentInlinePlayback:, nonatomic) bool _allowsMediaDocumentInlinePlayback;
@property (setter=_setAllowsRemoteInspection:, nonatomic) bool _allowsRemoteInspection;
@property (setter=_setAllowsViewportShrinkToFit:, nonatomic) bool _allowsViewportShrinkToFit;
@property (setter=_setApplicationNameForUserAgent:, copy) NSString *_applicationNameForUserAgent;
@property (setter=_setBackgroundExtendsBeyondPage:, nonatomic) bool _backgroundExtendsBeyondPage;
@property (nonatomic, readonly) NSArray *_certificateChain;
@property (nonatomic, readonly) NSURL *_committedURL;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _computedContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _computedUnobscuredSafeAreaInset;
@property (nonatomic, readonly) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _contentVisibleRect;
@property (setter=_setCustomUserAgent:, copy) NSString *_customUserAgent;
@property (nonatomic, readonly) NSData *_dataForDisplayedPDF;
@property (setter=_setDiagnosticLoggingDelegate:, nonatomic) <_WKDiagnosticLoggingDelegate> *_diagnosticLoggingDelegate;
@property (getter=_isDisplayingPDF, nonatomic, readonly) bool _displayingPDF;
@property (getter=_isDisplayingStandaloneImageDocument, nonatomic, readonly) bool _displayingStandaloneImageDocument;
@property (getter=_isDisplayingStandaloneMediaDocument, nonatomic, readonly) bool _displayingStandaloneMediaDocument;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _dragCaretRect;
@property (setter=_setDragInteractionPolicy:, nonatomic) unsigned long long _dragInteractionPolicy;
@property (getter=_isEditable, setter=_setEditable:, nonatomic) bool _editable;
@property (nonatomic, readonly) UIView *_enclosingViewForExposedRectComputation;
@property (setter=_setFindDelegate:, nonatomic) <_WKFindDelegate> *_findDelegate;
@property (setter=_setFixedLayoutSize:, nonatomic) struct CGSize { double x1; double x2; } _fixedLayoutSize;
@property (setter=_setFullscreenDelegate:, nonatomic) <_WKFullscreenDelegate> *_fullscreenDelegate;
@property (setter=_setGapBetweenPages:, nonatomic) double _gapBetweenPages;
@property (nonatomic, readonly) WKBrowsingContextHandle *_handle;
@property (setter=_setHistoryDelegate:, nonatomic) <WKHistoryDelegatePrivate> *_historyDelegate;
@property (setter=_setIconLoadingDelegate:, nonatomic) <_WKIconLoadingDelegate> *_iconLoadingDelegate;
@property (setter=_setInputDelegate:, nonatomic) <_WKInputDelegate> *_inputDelegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _inputViewBounds;
@property (setter=_setInterfaceOrientationOverride:, nonatomic) long long _interfaceOrientationOverride;
@property (nonatomic, readonly) bool _isBackground;
@property (nonatomic, readonly) bool _isInFullscreen;
@property (setter=_setLayoutMode:, nonatomic) unsigned long long _layoutMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _maximumUnobscuredSizeOverride;
@property (setter=_setMediaCaptureEnabled:, nonatomic) bool _mediaCaptureEnabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _minimumLayoutSizeOverride;
@property (nonatomic, readonly) bool _networkRequestsInProgress;
@property (setter=_setObscuredInsetEdgesAffectedBySafeArea:, nonatomic) unsigned long long _obscuredInsetEdgesAffectedBySafeArea;
@property (setter=_setObscuredInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _obscuredInsets;
@property (setter=_setObservedRenderingProgressEvents:, nonatomic) unsigned long long _observedRenderingProgressEvents;
@property (readonly) unsigned long long _pageCount;
@property (setter=_setPageLength:, nonatomic) double _pageLength;
@property (setter=_setPageZoomFactor:, nonatomic) double _pageZoomFactor;
@property (setter=_setPaginationBehavesLikeColumns:, nonatomic) bool _paginationBehavesLikeColumns;
@property (setter=_setPaginationLineGridEnabled:, nonatomic) bool _paginationLineGridEnabled;
@property (setter=_setPaginationMode:, nonatomic) long long _paginationMode;
@property (nonatomic, readonly) WKPasswordView *_passwordView;
@property (nonatomic, readonly) <_WKWebViewPrintProvider> *_printProvider;
@property (setter=_setRemoteInspectionNameOverride:, nonatomic, copy) NSString *_remoteInspectionNameOverride;
@property (nonatomic, readonly) id _remoteObjectRegistry;
@property (nonatomic, readonly) bool _safeAreaShouldAffectObscuredInsets;
@property (nonatomic, readonly) NSArray *_scrollPerformanceData;
@property (setter=_setScrollPerformanceDataCollectionEnabled:, nonatomic) bool _scrollPerformanceDataCollectionEnabled;
@property (nonatomic, readonly) NSString *_scrollingTreeAsText;
@property (nonatomic, readonly) long long _selectionGranularity;
@property (nonatomic, readonly) _WKSessionState *_sessionState;
@property (nonatomic, readonly) NSData *_sessionStateData;
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (getter=_isShowingNavigationGestureSnapshot, nonatomic, readonly) bool _showingNavigationGestureSnapshot;
@property (nonatomic, readonly) NSNumber *_stableStateOverride;
@property (nonatomic, readonly) NSString *_suggestedFilenameForDisplayedPDF;
@property (nonatomic, readonly) bool _supportsTextZoom;
@property (setter=_setTextZoomFactor:, nonatomic) double _textZoomFactor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _uiTextCaretRect;
@property (nonatomic, readonly) NSArray *_uiTextSelectionRects;
@property (setter=_setUnobscuredSafeAreaInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _unobscuredSafeAreaInsets;
@property (nonatomic, readonly) NSURL *_unreachableURL;
@property (nonatomic, readonly) NSString *_userAgent;
@property (setter=_setUserContentExtensionsEnabled:, nonatomic) bool _userContentExtensionsEnabled;
@property (setter=_setViewScale:, nonatomic) double _viewScale;
@property (setter=_setViewportSizeForCSSViewportUnits:, nonatomic) struct CGSize { double x1; double x2; } _viewportSizeForCSSViewportUnits;
@property (nonatomic, readonly) int _webProcessIdentifier;
@property (nonatomic, readonly) bool _webProcessIsResponsive;
@property (nonatomic, readonly) _WKWebViewPrintFormatter *_webViewPrintFormatter;
@property (nonatomic) bool allowsBackForwardNavigationGestures;
@property (nonatomic) bool allowsLinkPreview;
@property (nonatomic, readonly) WKBackForwardList *backForwardList;
@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoForward;
@property (nonatomic, readonly, copy) NSArray *certificateChain;
@property (nonatomic, readonly, copy) WKWebViewConfiguration *configuration;
@property (nonatomic, copy) NSString *customUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic, readonly) bool hasOnlySecureContent;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) <WKNavigationDelegate> *navigationDelegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) struct __SecTrust { }*serverTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:, nonatomic, copy) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
@property (nonatomic, readonly) UIViewController *webui_presentingViewController;
@property (nonatomic, readonly) bool webui_privateBrowsingEnabled;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (bool)handlesURLScheme:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UIDelegate;
- (id)URL;
- (id)_MIMEType;
- (void)_accessibilityDidGetSpeakSelectionContent:(id)arg1;
- (void)_accessibilityRetrieveSpeakSelectionContent;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_addUpdateVisibleContentRectPreCommitHandler;
- (bool)_addsVisitedLinks;
- (struct CGPoint { double x1; double x2; })_adjustedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_allowsBlockSelection;
- (bool)_allowsDoubleTapGestures;
- (bool)_allowsMediaDocumentInlinePlayback;
- (bool)_allowsRemoteInspection;
- (bool)_allowsViewportShrinkToFit;
- (id)_applicationNameForUserAgent;
- (void)_arrowKey:(id)arg1;
- (bool)_backgroundExtendsBeyondPage;
- (void)_becomeFirstResponderWithSelectionMovingForward:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_beginAnimatedResizeWithUpdates:(id /* block */)arg1;
- (void)_beginInteractiveObscuredInsetsChange;
- (id)_certificateChain;
- (void)_clearInterfaceOrientationOverride;
- (void)_clearOverrideLayoutParameters;
- (void)_close;
- (id)_committedURL;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_computedContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_computedUnobscuredSafeAreaInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsExtendedForRubberbandingWithScale:(double)arg1;
- (id)_contentProviderRegistry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForUserInteraction;
- (id)_contentSizeCategory;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentVisibleRect;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromContentsToView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromViewToContents:(struct CGPoint { double x1; double x2; })arg1;
- (void)_couldNotRestorePageState;
- (void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)_currentContentView;
- (id)_customUserAgent;
- (id)_dataDetectionResults;
- (id)_dataForDisplayedPDF;
- (void)_define:(id)arg1;
- (id)_diagnosticLoggingDelegate;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction { unsigned long long x1; struct Vector<WTF::RefPtr<WebKit::PlatformCALayerRemote>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebKit::PlatformCALayerRemote> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; }*)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didDismissForcePressPreview;
- (void)_didFailLoadForMainFrame;
- (void)_didFinishLoadForMainFrame;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 data:(id)arg2;
- (void)_didFinishScrolling;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_didRelaunchProcess;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_didScroll;
- (void)_didShowForcePressPreview;
- (void)_disableBackForwardSnapshotVolatilityForTesting;
- (void)_dispatchSetDeviceOrientation:(int)arg1;
- (void)_dispatchSetMaximumUnobscuredSize:(struct FloatSize { float x1; float x2; })arg1;
- (void)_dispatchSetMinimumLayoutSize:(struct FloatSize { float x1; float x2; })arg1;
- (void)_doAfterNextPresentationUpdate:(id /* block */)arg1;
- (void)_doAfterNextPresentationUpdateWithoutWaitingForPainting:(id /* block */)arg1;
- (void)_doAfterNextStablePresentationUpdate:(id /* block */)arg1;
- (void)_doAfterNextVisibleContentRectUpdate:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dragCaretRect;
- (unsigned long long)_dragInteractionPolicy;
- (id)_draggableElementAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(struct CGPoint { double x1; double x2; })arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3;
- (unsigned long long)_effectiveObscuredInsetEdgesAffectedBySafeArea;
- (void)_enclosingScrollerScrollingEnded:(id)arg1;
- (id)_enclosingViewForExposedRectComputation;
- (void)_endAnimatedResize;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_evaluateJavaScript:(id)arg1 forceUserGesture:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_evaluateJavaScriptWithoutUserGesture:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_findDelegate;
- (void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)_firePresentationUpdateForPendingStableStatePresentationCallbacks;
- (struct CGSize { double x1; double x2; })_fixedLayoutSize;
- (id)_formDelegate;
- (void)_frameOrBoundsChanged;
- (id)_fullscreenDelegate;
- (double)_gapBetweenPages;
- (void)_getContentsAsStringWithCompletionHandler:(id /* block */)arg1;
- (void)_getMainResourceDataWithCompletionHandler:(id /* block */)arg1;
- (void)_getWebArchiveDataWithCompletionHandler:(id /* block */)arg1;
- (id)_handle;
- (void)_handleActiveNowPlayingSessionInfoResponse:(bool)arg1 title:(id)arg2 duration:(double)arg3 elapsedTime:(double)arg4;
- (void)_hideContentUntilNextUpdate;
- (void)_hideFindUI;
- (void)_hidePasswordView;
- (id)_historyDelegate;
- (id)_iconLoadingDelegate;
- (void)_initializeWithConfiguration:(id)arg1;
- (id)_inputDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inputViewBounds;
- (long long)_interfaceOrientationOverride;
- (bool)_isBackground;
- (bool)_isDisplayingPDF;
- (bool)_isDisplayingStandaloneImageDocument;
- (bool)_isDisplayingStandaloneMediaDocument;
- (bool)_isEditable;
- (bool)_isInFullscreen;
- (bool)_isNavigationSwipeGestureRecognizer:(id)arg1;
- (bool)_isShowingNavigationGestureSnapshot;
- (bool)_isShowingVideoPictureInPicture;
- (bool)_isValid;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(bool)arg2;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_killWebContentProcess;
- (void)_killWebContentProcessAndResetState;
- (void)_layerTreeCommitComplete;
- (unsigned long long)_layoutMode;
- (void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (id)_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (id)_loadRequest:(id)arg1 shouldOpenExternalURLs:(bool)arg2;
- (void)_lookup:(id)arg1;
- (struct CGSize { double x1; double x2; })_maximumUnobscuredSizeOverride;
- (bool)_mayAutomaticallyShowVideoPictureInPicture;
- (bool)_mediaCaptureEnabled;
- (struct CGSize { double x1; double x2; })_minimumLayoutSizeOverride;
- (void)_muteMediaCapture;
- (void)_navigationGestureDidBegin;
- (void)_navigationGestureDidEnd;
- (bool)_networkRequestsInProgress;
- (unsigned long long)_obscuredInsetEdgesAffectedBySafeArea;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_obscuredInsets;
- (unsigned long long)_observedRenderingProgressEvents;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1 maximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg2;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1 minimumLayoutSizeForMinimalUI:(struct CGSize { double x1; double x2; })arg2 maximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)_pageCount;
- (struct OpaqueWKPage { }*)_pageForTesting;
- (double)_pageLength;
- (double)_pageScale;
- (double)_pageZoomFactor;
- (bool)_paginationBehavesLikeColumns;
- (bool)_paginationLineGridEnabled;
- (long long)_paginationMode;
- (id)_passwordView;
- (void)_populateArchivedSubviews:(id)arg1;
- (Class)_printFormatterClass;
- (id)_printProvider;
- (void)_processDidExit;
- (void)_promptForReplace:(id)arg1;
- (id)_propertiesOfLayerWithID:(unsigned long long)arg1;
- (void)_reanalyze:(id)arg1;
- (id)_reloadExpiredOnly;
- (id)_reloadWithoutContentBlockers;
- (id)_remoteInspectionNameOverride;
- (id)_remoteObjectRegistry;
- (void)_requestActivatedElementAtPosition:(struct CGPoint { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (void)_requestActiveNowPlayingSessionInfo;
- (void)_requestDraggableElementAtPosition:(struct CGPoint { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (void)_resizeWhileHidingContentWithUpdates:(id /* block */)arg1;
- (void)_restoreFromSessionStateData:(id)arg1;
- (void)_restorePageScrollPosition:(struct optional<WebCore::FloatPoint> { bool x1; union constexpr_storage_t<WebCore::FloatPoint> { unsigned char x_2_1_1; struct FloatPoint { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1 scrollOrigin:(struct FloatPoint { float x1; float x2; })arg2 previousObscuredInset:(struct BoxExtent<float> { struct array<float, 4> { float x_1_1_1[4]; } x1; })arg3 scale:(double)arg4;
- (void)_restorePageStateToUnobscuredCenter:(struct optional<WebCore::FloatPoint> { bool x1; union constexpr_storage_t<WebCore::FloatPoint> { unsigned char x_2_1_1; struct FloatPoint { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1 scale:(double)arg2;
- (id)_restoreSessionState:(id)arg1 andNavigate:(bool)arg2;
- (id /* block */)_retainActiveFocusedState;
- (bool)_safeAreaShouldAffectObscuredInsets;
- (void)_saveBackForwardSnapshotForItem:(id)arg1;
- (void)_scheduleVisibleContentRectUpdate;
- (void)_scheduleVisibleContentRectUpdateAfterScrollInView:(id)arg1;
- (void)_scrollByContentOffset:(struct FloatPoint { float x1; float x2; })arg1;
- (id)_scrollPerformanceData;
- (bool)_scrollPerformanceDataCollectionEnabled;
- (void)_scrollToContentScrollPosition:(struct FloatPoint { float x1; float x2; })arg1 scrollOrigin:(struct IntPoint { int x1; int x2; })arg2;
- (bool)_scrollToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 origin:(struct FloatPoint { float x1; float x2; })arg2 minimumScrollDistance:(float)arg3;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (bool)_scrollViewIsInStableState:(id)arg1;
- (bool)_scrollViewIsRubberBanding;
- (id)_scrollingTreeAsText;
- (long long)_selectionGranularity;
- (id)_sessionState;
- (id)_sessionStateData;
- (id)_sessionStateWithFilter:(id /* block */)arg1;
- (void)_setAddsVisitedLinks:(bool)arg1;
- (void)_setAllowsMediaDocumentInlinePlayback:(bool)arg1;
- (void)_setAllowsRemoteInspection:(bool)arg1;
- (void)_setAllowsViewportShrinkToFit:(bool)arg1;
- (void)_setApplicationNameForUserAgent:(id)arg1;
- (void)_setAvoidsUnsafeArea:(bool)arg1;
- (void)_setBackgroundExtendsBeyondPage:(bool)arg1;
- (void)_setCustomUserAgent:(id)arg1;
- (void)_setDiagnosticLoggingDelegate:(id)arg1;
- (void)_setDragInteractionPolicy:(unsigned long long)arg1;
- (void)_setEditable:(bool)arg1;
- (void)_setFindDelegate:(id)arg1;
- (void)_setFixedLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFormDelegate:(id)arg1;
- (void)_setFullscreenDelegate:(id)arg1;
- (void)_setGapBetweenPages:(double)arg1;
- (void)_setHasCustomContentView:(bool)arg1 loadedMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (void)_setHistoryDelegate:(id)arg1;
- (void)_setIconLoadingDelegate:(id)arg1;
- (void)_setInputDelegate:(id)arg1;
- (void)_setInterfaceOrientationOverride:(long long)arg1;
- (void)_setLayoutMode:(unsigned long long)arg1;
- (void)_setMaximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMediaCaptureEnabled:(bool)arg1;
- (void)_setMinimumLayoutSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)_setObscuredInsetEdgesAffectedBySafeArea:(unsigned long long)arg1;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setObservedRenderingProgressEvents:(unsigned long long)arg1;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPageLength:(double)arg1;
- (void)_setPageMuted:(long long)arg1;
- (void)_setPageScale:(double)arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2;
- (void)_setPageZoomFactor:(double)arg1;
- (void)_setPaginationBehavesLikeColumns:(bool)arg1;
- (void)_setPaginationLineGridEnabled:(bool)arg1;
- (void)_setPaginationMode:(long long)arg1;
- (void)_setRemoteInspectionNameOverride:(id)arg1;
- (void)_setScrollPerformanceDataCollectionEnabled:(bool)arg1;
- (void)_setTextZoomFactor:(double)arg1;
- (void)_setUnobscuredSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setUpSQLiteDatabaseTrackerClient;
- (void)_setUserContentExtensionsEnabled:(bool)arg1;
- (void)_setViewScale:(double)arg1;
- (void)_setViewportSizeForCSSViewportUnits:(struct CGSize { double x1; double x2; })arg1;
- (void)_share:(id)arg1;
- (bool)_shouldUpdateKeyboardWithInfo:(id)arg1;
- (void)_showPasswordViewWithDocumentName:(id)arg1 passwordHandler:(id /* block */)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_simulateDataInteractionEnded:(id)arg1;
- (void)_simulateDataInteractionEntered:(id)arg1;
- (void)_simulateDataInteractionPerformOperation:(id)arg1;
- (void)_simulateDataInteractionSessionDidEnd:(id)arg1;
- (unsigned long long)_simulateDataInteractionUpdated:(id)arg1;
- (void)_simulateLongPressActionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_simulatePrepareForDataInteractionSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_simulateWillBeginDataInteractionWithSession:(id)arg1;
- (id)_simulatedItemsForSession:(id)arg1;
- (id)_snapshotLayerContentsForBackForwardListItem:(id)arg1;
- (void)_snapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intoImageOfWidth:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)_stableStateOverride;
- (id)_suggestedFilenameForDisplayedPDF;
- (bool)_supportsTextZoom;
- (struct RefPtr<WebKit::ViewSnapshot> { struct ViewSnapshot {} *x1; })_takeViewSnapshot;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 currentScale:(double)arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (double)_textZoomFactor;
- (void)_transliterateChinese:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_uiTextCaretRect;
- (id)_uiTextSelectionRects;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_unobscuredSafeAreaInsets;
- (id)_unreachableURL;
- (void)_updateScrollViewBackground;
- (void)_updateScrollViewInsetAdjustmentBehavior;
- (void)_updateVisibleContentRects;
- (void)_updateWebsitePolicies:(id)arg1;
- (id)_userAgent;
- (bool)_userContentExtensionsEnabled;
- (id)_viewForFindUI;
- (double)_viewScale;
- (struct CGSize { double x1; double x2; })_viewportSizeForCSSViewportUnits;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectInEnclosingView:(id)arg1;
- (int)_webProcessIdentifier;
- (bool)_webProcessIsResponsive;
- (id)_webViewPrintFormatter;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_windowDidRotate:(id)arg1;
- (void)_zoomOutWithOrigin:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (void)_zoomToFocusRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selectionRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 insideFixed:(bool)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(bool)arg7 forceScroll:(bool)arg8;
- (void)_zoomToInitialScaleWithOrigin:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (void)_zoomToPoint:(struct FloatPoint { float x1; float x2; })arg1 atScale:(double)arg2 animated:(bool)arg3;
- (void)_zoomToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atScale:(double)arg2 origin:(struct FloatPoint { float x1; float x2; })arg3 animated:(bool)arg4;
- (bool)_zoomToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOrigin:(struct FloatPoint { float x1; float x2; })arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (bool)allowsBackForwardNavigationGestures;
- (bool)allowsLinkPreview;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)backForwardList;
- (bool)becomeFirstResponder;
- (id)browsingContextController;
- (bool)canBecomeFirstResponder;
- (bool)canGoBack;
- (bool)canGoForward;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)certificateChain;
- (id)configuration;
- (void)copy:(id)arg1;
- (id)customUserAgent;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)didEndFormControlInteraction;
- (void)didMoveToWindow;
- (void)didStartFormControlInteraction;
- (void)dismissFormAccessoryView;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedProgress;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)goBack;
- (id)goForward;
- (id)goToBackForwardListItem:(id)arg1;
- (bool)hasOnlySecureContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (bool)isLoading;
- (void)keyboardAccessoryBarNext;
- (void)keyboardAccessoryBarPrevious;
- (void)layoutSubviews;
- (id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (id)navigationDelegate;
- (void)paste:(id)arg1;
- (id)reload;
- (id)reloadFromOrigin;
- (void)replace:(id)arg1;
- (bool)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (id)scrollView;
- (struct CGSize { double x1; double x2; })scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectFormAccessoryPickerRow:(int)arg1;
- (struct __SecTrust { }*)serverTrust;
- (void)setAllowsBackForwardNavigationGestures:(bool)arg1;
- (void)setAllowsLinkPreview:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUIDelegate:(id)arg1;
- (void)stopLoading;
- (void)takeSnapshotWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)title;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)urlSchemeHandlerForURLScheme:(id)arg1;
- (bool)usesStandardContentView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInViewCoordinates;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_applicationDidEnterBackgroundOrWillTerminate:(id)arg1;
- (void)_sf_saveUnsubmittedGeneratedPasswordAndRemoveFormMetadata;
- (id)_sf_securityInfo;
- (void)_sf_setSecurityInfo:(id)arg1;
- (id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (id)webui_lastGeneratedPasswordForCurrentBackForwardItem;
- (id)webui_presentingViewController;
- (id /* block */)webui_preventNavigationDuringAutoFillPrompt;
- (bool)webui_privateBrowsingEnabled;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;

@end
