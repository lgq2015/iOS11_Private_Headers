/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKContentView : UIView <UIDragInteractionDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate, UIPreviewItemDelegate, UITextInputPrivate, UIWKInteractionViewProtocol, UIWebFormAccessoryDelegate, UIWebTouchEventsGestureRecognizerDelegate, WKActionSheetAssistantDelegate, WKFileUploadPanelDelegate, _WKWebViewPrintProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    }  _actionSheetAssistant;
    struct RetainPtr<WKAirPlayRoutePicker> { 
        void *m_ptr; 
    }  _airPlayRoutePicker;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
        struct __compressed_pair<WebKit::ApplicationStateTracker *, std::__1::default_delete<WebKit::ApplicationStateTracker> > { 
            struct ApplicationStateTracker {} *__first_; 
        } __ptr_; 
    }  _applicationStateTracker;
    struct AssistedNodeInformation { 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } elementRect; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } selectionRect; 
        double minimumScaleFactor; 
        double maximumScaleFactor; 
        double maximumScaleFactorIgnoringAlwaysScalable; 
        double nodeFontSize; 
        bool hasNextNode; 
        bool hasPreviousNode; 
        bool isAutocorrect; 
        bool isRTL; 
        bool isMultiSelect; 
        bool isReadOnly; 
        bool allowsUserScaling; 
        bool allowsUserScalingIgnoringAlwaysScalable; 
        bool insideFixedPosition; 
        int autocapitalizeType; 
        int elementType; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } formAction; 
        struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16> { 
            struct OptionItem {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } selectOptions; 
        int selectedIndex; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } value; 
        double valueAsNumber; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        int autofillFieldName; 
    }  _assistedNodeInformation;
    struct WKAutoCorrectionData { 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } fontName; 
        double fontSize; 
        unsigned long long fontTraits; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } textFirstRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } textLastRect; 
        id /* block */ autocorrectionHandler; 
        id /* block */ autocorrectionContextHandler; 
    }  _autocorrectionData;
    bool  _becomingFirstResponder;
    struct RetainPtr<WKBrowsingContextController> { 
        void *m_ptr; 
    }  _browsingContextController;
    bool  _canSendTouchEventsAsynchronously;
    struct RetainPtr<UIDragInteraction> { 
        void *m_ptr; 
    }  _dataInteraction;
    struct WKDataInteractionState { 
        struct RetainPtr<UIImage> { 
            void *m_ptr; 
        } image; 
        struct optional<WebCore::TextIndicatorData> { 
            bool init_; 
            union storage_t<WebCore::TextIndicatorData> { 
                unsigned char dummy_; 
                struct TextIndicatorData { 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } selectionRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } textBoundingRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } contentImageWithoutSelectionRectInRootViewCoordinates; 
                    struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { 
                        struct FloatRect {} *m_buffer; 
                        unsigned int m_capacity; 
                        unsigned int m_size; 
                    } textRectsInBoundingRectCoordinates; 
                    float contentImageScaleFactor; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImageWithHighlight; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImageWithoutSelection; 
                    struct RefPtr<WebCore::Image> { 
                        struct Image {} *m_ptr; 
                    } contentImage; 
                    struct Color { 
                        union { 
                            unsigned long long rgbaAndFlags; 
                            struct ExtendedColor {} *extendedColor; 
                        } m_colorData; 
                    } estimatedBackgroundColor; 
                    unsigned char presentationTransition; 
                    unsigned short options; 
                } value_; 
            } storage_; 
        } indicatorData; 
        struct CGPoint { 
            double x; 
            double y; 
        } adjustedOrigin; 
        struct CGPoint { 
            double x; 
            double y; 
        } lastGlobalPosition; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } elementBounds; 
        bool didBeginDragging; 
        bool isPerformingOperation; 
        bool isAnimatingConcludeEditDrag; 
        bool shouldRestoreCalloutBar; 
        struct RetainPtr<id<UIDragSession> > { 
            void *m_ptr; 
        } dragSession; 
        struct RetainPtr<id<UIDropSession> > { 
            void *m_ptr; 
        } dropSession; 
        struct BlockPtr<void ()>="m_block"@? {} dragStartCompletionBlock; 
        struct BlockPtr<void ()>="m_block"@? {} dragCancelSetDownBlock; 
        int sourceAction; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } linkTitle; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } linkURL; 
        struct RetainPtr<UIView> { 
            void *m_ptr; 
        } visibleContentViewSnapshot; 
        struct RetainPtr<_UITextDragCaretView> { 
            void *m_ptr; 
        } caretView; 
    }  _dataInteractionState;
    struct RetainPtr<UIDropInteraction> { 
        void *m_ptr; 
    }  _dataOperation;
    bool  _didAccessoryTabInitiateFocus;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _doubleTapGestureRecognizer;
    struct RetainPtr<WKFileUploadPanel> { 
        void *m_ptr; 
    }  _fileUploadPanel;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _fixedClippingView;
    struct RetainPtr<UIWebFormAccessory> { 
        void *m_ptr; 
    }  _formAccessoryView;
    struct RetainPtr<WKFormInputSession> { 
        void *m_ptr; 
    }  _formInputSession;
    bool  _hasTapHighlightForPotentialTap;
    bool  _hasValidPositionInformation;
    bool  _highlightLongPressCanClick;
    struct RetainPtr<_UIWebHighlightLongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _highlightLongPressGestureRecognizer;
    struct RetainPtr<_UIHighlightView> { 
        void *m_ptr; 
    }  _highlightView;
    struct HistoricalVelocityData { 
        unsigned int m_historySize; 
        unsigned int m_latestDataIndex; 
        struct MonotonicTime { 
            double m_value; 
        } m_lastAppendTimestamp; 
        struct Data { 
            struct MonotonicTime { 
                double m_value; 
            } timestamp; 
            struct CGPoint { 
                double x; 
                double y; 
            } position; 
            double scale; 
        } m_history[3]; 
    }  _historicalKinematicData;
    <UITextInputDelegate> * _inputDelegate;
    struct RetainPtr<NSObject<WKFormPeripheral> > { 
        void *m_ptr; 
    }  _inputPeripheral;
    struct unique_ptr<WebKit::InputViewUpdateDeferrer, std::__1::default_delete<WebKit::InputViewUpdateDeferrer> > { 
        struct __compressed_pair<WebKit::InputViewUpdateDeferrer *, std::__1::default_delete<WebKit::InputViewUpdateDeferrer> > { 
            struct InputViewUpdateDeferrer {} *__first_; 
        } __ptr_; 
    }  _inputViewUpdateDeferrer;
    struct RetainPtr<WKInspectorHighlightView> { 
        void *m_ptr; 
    }  _inspectorHighlightView;
    struct RetainPtr<WKInspectorIndicationView> { 
        void *m_ptr; 
    }  _inspectorIndicationView;
    bool  _inspectorNodeSearchEnabled;
    struct RetainPtr<WKInspectorNodeSearchGestureRecognizer> { 
        void *m_ptr; 
    }  _inspectorNodeSearchGestureRecognizer;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _interactionViewsContainerView;
    bool  _isDoubleTapPending;
    bool  _isEditable;
    bool  _isExpectingFastSingleTapCommit;
    bool  _isPrintingToPDF;
    bool  _isTapHighlightIDValid;
    id /* block */  _keyWebEventHandler;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastInteractionLocation;
    struct WKSelectionDrawingInfo { 
        int type; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } caretRect; 
        struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow, 16> { 
            struct SelectionRect {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } selectionRects; 
    }  _lastSelectionDrawingInfo;
    unsigned long long  _latestTapID;
    unsigned long long  _layerTreeTransactionIdAtLastTouchStart;
    struct RetainPtr<UILongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _longPressGestureRecognizer;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _markedText;
    bool  _needsDeferredEndScrollingSelectionUpdate;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _nonBlockingDoubleTapGestureRecognizer;
    struct optional<WebKit::InteractionInformationRequest> { 
        bool init_; 
        union constexpr_storage_t<WebKit::InteractionInformationRequest> { 
            unsigned char dummy_; 
            struct InteractionInformationRequest { 
                struct IntPoint { 
                    int m_x; 
                    int m_y; 
                } point; 
                bool includeSnapshot; 
                bool includeLinkIndicator; 
            } value_; 
        } storage_; 
    }  _outstandingPositionInformationRequest;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
    struct unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl> > { 
        struct __compressed_pair<WebKit::PageClientImpl *, std::__1::default_delete<WebKit::PageClientImpl> > { 
            struct PageClientImpl {} *__first_; 
        } __ptr_; 
    }  _pageClient;
    struct Vector<std::optional<std::__1::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)> > >, 0, WTF::CrashOnOverflow, 16>="m_buffer"^{optional<std::__1::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)> > > {}  _pendingPositionInformationHandlers;
    struct InteractionInformationAtPosition { 
        struct InteractionInformationRequest { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } point; 
            bool includeSnapshot; 
            bool includeLinkIndicator; 
        } request; 
        bool nodeAtPositionIsAssistedNode; 
        bool hasSelectionAtPosition; 
        bool isSelectable; 
        bool isNearMarkedText; 
        bool touchCalloutEnabled; 
        bool isLink; 
        bool isImage; 
        bool isAttachment; 
        bool isAnimatedImage; 
        bool isElement; 
        bool isDataDetectorLink; 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } adjustedPointForNodeRespondingToClickEvents; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } url; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } imageURL; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } idAttribute; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } bounds; 
        struct RefPtr<WebKit::ShareableBitmap> { 
            struct ShareableBitmap {} *m_ptr; 
        } image; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textBefore; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textAfter; 
        struct TextIndicatorData { 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } selectionRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } textBoundingRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } contentImageWithoutSelectionRectInRootViewCoordinates; 
            struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { 
                struct FloatRect {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } textRectsInBoundingRectCoordinates; 
            float contentImageScaleFactor; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImageWithHighlight; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImageWithoutSelection; 
            struct RefPtr<WebCore::Image> { 
                struct Image {} *m_ptr; 
            } contentImage; 
            struct Color { 
                union { 
                    unsigned long long rgbaAndFlags; 
                    struct ExtendedColor {} *extendedColor; 
                } m_colorData; 
            } estimatedBackgroundColor; 
            unsigned char presentationTransition; 
            unsigned short options; 
        } linkIndicator; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } dataDetectorIdentifier; 
        struct RetainPtr<NSArray> { 
            void *m_ptr; 
        } dataDetectorResults; 
    }  _positionInformation;
    unsigned long long  _positionInformationCallbackDepth;
    bool  _potentialTapInProgress;
    struct RetainPtr<UIGestureRecognizer> { 
        void *m_ptr; 
    }  _previewGestureRecognizer;
    struct RetainPtr<UIPreviewItemController> { 
        void *m_ptr; 
    }  _previewItemController;
    struct RetainPtr<UIGestureRecognizer> { 
        void *m_ptr; 
    }  _previewSecondaryGestureRecognizer;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _printedDocument;
    bool  _resigningFirstResponder;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _rootContentView;
    bool  _selectionNeedsUpdate;
    bool  _shouldRestoreSelection;
    bool  _showDebugTapHighlightsForFastClicking;
    bool  _showingTextStyleOptions;
    struct RetainPtr<WKSyntheticClickTapGestureRecognizer> { 
        void *m_ptr; 
    }  _singleTapGestureRecognizer;
    bool  _sizeChangedSinceLastVisibleContentRectUpdate;
    struct unique_ptr<WebKit::SmartMagnificationController, std::__1::default_delete<WebKit::SmartMagnificationController> > { 
        struct __compressed_pair<WebKit::SmartMagnificationController *, std::__1::default_delete<WebKit::SmartMagnificationController> > { 
            struct SmartMagnificationController {} *__first_; 
        } __ptr_; 
    }  _smartMagnificationController;
    bool  _suppressAssistantSelectionView;
    struct TapHighlightInformation { 
        struct Color { 
            union { 
                unsigned long long rgbaAndFlags; 
                struct ExtendedColor {} *extendedColor; 
            } m_colorData; 
        } color; 
        struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { 
            struct FloatQuad {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } quads; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } topLeftRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } topRightRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } bottomLeftRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } bottomRightRadius; 
    }  _tapHighlightInformation;
    struct RetainPtr<UIWKTextInteractionAssistant> { 
        void *m_ptr; 
    }  _textSelectionAssistant;
    struct RetainPtr<UIWebTouchEventsGestureRecognizer> { 
        void *m_ptr; 
    }  _touchEventGestureRecognizer;
    struct RetainPtr<UITextInputTraits> { 
        void *m_ptr; 
    }  _traits;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _twoFingerDoubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _twoFingerSingleTapGestureRecognizer;
    struct RetainPtr<UIEvent> { 
        void *m_ptr; 
    }  _uiEventBeingResent;
    struct RetainPtr<NSUndoManager> { 
        void *m_ptr; 
    }  _undoManager;
    bool  _usingGestureForSelection;
    struct RetainPtr<UIWKSelectionAssistant> { 
        void *m_ptr; 
    }  _webSelectionAssistant;
    WKWebView * _webView;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, readonly) struct CGPDFDocument { }*_wk_printedDocument;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsPayloads;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic, readonly) const struct AssistedNodeInformation { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; double x3; double x4; double x5; double x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; int x16; int x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; /* Warning: unhandled struct encoding: '{Vector<WebKit::OptionItem' */ struct x19; }*assistedNodeInformation; /* unknown property attribute:  16>=^{OptionItem}II}i{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}d{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}i} */
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic, readonly) const struct WKAutoCorrectionData { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; double x2; unsigned long long x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; id /* block */ x6; id /* block */ x7; }*autocorrectionData;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) WKBrowsingContextController *browsingContextController;
@property (nonatomic) bool contentsIsSingleValue;
@property (nonatomic, readonly) struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; } currentPositionInformation; /* unknown property attribute:  16>=^{FloatRect}II}f{RefPtr<WebCore::Image>=^{Image}}{RefPtr<WebCore::Image>=^{Image}}{RefPtr<WebCore::Image>=^{Image}}{Color=(?=Q^{ExtendedColor})}CS}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RetainPtr<NSArray>=^v}} */
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic, readonly) UIWebFormAccessory *formAccessoryView;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) bool isAssistingNode;
@property (nonatomic, readonly) bool isBackground;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lastInteractionLocation;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic) bool loadKeyboardsForSiriLanguage;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); struct RetainPtr<NSArray> { void *x_6_1_1; } x6; struct PageClient {} *x7; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_8_1_1; } x8; /* Warning: unhandled struct encoding: '{unique_ptr<API::LoaderClient' */ struct x9; }*page; /* unknown property attribute:  WTF::Ref<WebKit::WebURLSchemeHandler> >}IIII}}} */
@property (nonatomic, readonly) const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*positionInformation; /* unknown property attribute:  16>=^{FloatRect}II}f{RefPtr<WebCore::Image>=^{Image}}{RefPtr<WebCore::Image>=^{Image}}{RefPtr<WebCore::Image>=^{Image}}{Color=(?=Q^{ExtendedColor})}CS}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RetainPtr<NSArray>=^v}} */
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (getter=isResigningFirstResponder, nonatomic, readonly) bool resigningFirstResponder;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic, readonly) bool shouldHideSelectionWhenScrolling;
@property (getter=isShowingInspectorIndication, nonatomic) bool showingInspectorIndication;
@property (nonatomic) bool sizeChangedSinceLastVisibleContentRectUpdate;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAssistantSelectionView;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, retain) UIColor *underlineColorForSpelling;
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2;
- (void)_accessibilityRetrieveRectsEnclosingSelectionOffset:(long long)arg1 withGranularity:(long long)arg2;
- (SEL)_actionForLongPress;
- (SEL)_actionForLongPressFromPositionInformation:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;
- (void)_addDefaultGestureRecognizers;
- (void)_addShortcut:(id)arg1;
- (void)_addShortcutForWebView:(id)arg1;
- (bool)_allowAnimatedUpdateSelectionRectViews;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidCreateWindowContext;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_applicationWillEnterForeground;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_arrowKey:(id)arg1;
- (void)_arrowKeyForWebView:(id)arg1;
- (void)_attemptClickAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_becomeFirstResponderWithSelectionMovingForward:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelInteraction;
- (void)_cancelLongPressGestureRecognizer;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (void)_commitPotentialTapFailed;
- (id)_commonInitializationWithProcessPool:(struct WebProcessPool { int (**x1)(); id x2; int (*x3)(); struct Ref<API::ProcessPoolConfiguration> { struct ProcessPoolConfiguration {} *x_4_1_1; } x4; struct MessageReceiverMap { struct HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_5_1_1; struct HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<std::__1::pair<IPC::StringReference, unsigned long long>, WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> >, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> > > { struct KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_5_1_2; } x5; }*)arg1 configuration:(struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x1; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeUnobscuredContentRectRespectingInputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (void)_createAndConfigureDoubleTapGestureRecognizer;
- (void)_createAndConfigureLongPressGestureRecognizer;
- (struct unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct DrawingAreaProxy {} *x_1_1_1; } x1; })_createDrawingAreaProxy;
- (bool)_currentPositionInformationIsValidForRequest:(const struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; }*)arg1;
- (id)_dataDetectionResults;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 type:(long long*)arg3;
- (void)_define:(id)arg1;
- (void)_defineForWebView:(id)arg1;
- (void)_didChangeDataInteractionCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_didChangeDragInteractionPolicy;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction { unsigned long long x1; struct Vector<WTF::RefPtr<WebKit::PlatformCALayerRemote>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebKit::PlatformCALayerRemote> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; }*)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didCompleteSyntheticClick;
- (void)_didConcludeEditDataInteraction:(struct optional<WebCore::TextIndicatorData> { bool x1; union storage_t<WebCore::TextIndicatorData> { unsigned char x_2_1_1; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_2_2_1; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_2_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_2_2_2; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_3_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_3_3_2; } x_2_2_3; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_4_3_1; unsigned int x_4_3_2; unsigned int x_4_3_3; } x_2_2_4; float x_2_2_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_3_1; } x_2_2_6; struct RefPtr<WebCore::Image> { struct Image {} *x_7_3_1; } x_2_2_7; struct RefPtr<WebCore::Image> { struct Image {} *x_8_3_1; } x_2_2_8; struct Color { union { unsigned long long x_1_4_1; struct ExtendedColor {} *x_1_4_2; } x_9_3_1; } x_2_2_9; unsigned char x_2_2_10; unsigned short x_2_2_11; } x_2_1_2; } x2; })arg1;
- (void)_didEndScrollingOrZooming;
- (void)_didExitStableState;
- (void)_didGetTapHighlightForRequest:(unsigned long long)arg1 color:(const struct Color { union { unsigned long long x_1_1_1; struct ExtendedColor {} *x_1_1_2; } x1; }*)arg2 quads:(const struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x1; unsigned int x2; unsigned int x3; }*)arg3 topLeftRadius:(const struct IntSize { int x1; int x2; }*)arg4 topRightRadius:(const struct IntSize { int x1; int x2; }*)arg5 bottomLeftRadius:(const struct IntSize { int x1; int x2; }*)arg6 bottomRightRadius:(const struct IntSize { int x1; int x2; }*)arg7;
- (void)_didHandleKeyEvent:(id)arg1 eventWasHandled:(bool)arg2;
- (void)_didHandleStartDataInteractionRequest:(bool)arg1;
- (void)_didNotHandleTapAsClick:(const struct IntPoint { int x1; int x2; }*)arg1;
- (void)_didPerformDataInteractionControllerOperation:(bool)arg1;
- (void)_didRelaunchProcess;
- (void)_didScroll;
- (void)_didUpdateBlockSelectionWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (void)_disableDoubleTapGesturesDuringTapIfNecessary:(unsigned long long)arg1;
- (void)_disableInspectorNodeSearch;
- (void)_displayFormNodeInputView;
- (void)_doubleTapRecognized:(id)arg1;
- (unsigned long long)_dragDestinationActionForDropSession:(id)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)_dragInteraction:(id)arg1 item:(id)arg2 shouldDelaySetDownAnimationWithCompletion:(id /* block */)arg3;
- (void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(id /* block */)arg3;
- (bool)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_enableInspectorNodeSearch;
- (void)_endPotentialTapAndEnableDoubleTapGesturesIfNecessary;
- (void)_ensureFormAccessoryView;
- (void)_finishInteraction;
- (void)_handleKeyUIEvent:(id)arg1;
- (bool)_hasValidOutstandingPositionInformationRequest:(const struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; }*)arg1;
- (void)_hideInspectorHighlight;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_inspectorNodeSearchRecognized:(id)arg1;
- (bool)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (bool)_interpretKeyEvent:(id)arg1 isCharEvent:(bool)arg2;
- (void)_invokeAndRemovePendingHandlersValidForCurrentPositionInformation;
- (bool)_isInteractingWithAssistedNode;
- (void)_layerTreeCommitComplete;
- (void)_longPressRecognized:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_lookupForWebView:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_markedTextNSRange;
- (bool)_mayDisableDoubleTapGesturesDuringSingleTap;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_nonBlockingDoubleTapRecognized:(id)arg1;
- (void)_overflowScrollingDidEnd;
- (void)_overflowScrollingWillBegin;
- (struct OpaqueWKPage { }*)_pageRef;
- (void)_positionInformationDidChange:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForPreviewItemController:(id)arg1;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_presentationSnapshotForPreviewItemController:(id)arg1;
- (id)_presentedViewControllerForPreviewItemController:(id)arg1;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
- (void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(bool)arg3;
- (void)_previewItemControllerDidCancelPreview:(id)arg1;
- (void)_processDidExit;
- (void)_promptForReplace:(id)arg1;
- (void)_promptForReplaceForWebView:(id)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_reanalyzeForWebView:(id)arg1;
- (void)_registerPreview;
- (void)_removeDefaultGestureRecognizers;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (void)_resetIsDoubleTapPending;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)_restoreCalloutBarIfNeeded;
- (struct optional<WebCore::FloatPoint> { bool x1; union constexpr_storage_t<WebCore::FloatPoint> { unsigned char x_2_1_1; struct FloatPoint { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })_scrollOffsetForEvent:(id)arg1;
- (bool)_scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 minimumScrollDistance:(double)arg3;
- (id)_scroller;
- (bool)_selectionAtDocumentStart;
- (void)_selectionChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAcceleratedCompositingRootView:(id)arg1;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (void)_setDoubleTapGesturesEnabled:(bool)arg1;
- (void)_share:(id)arg1;
- (void)_shareForWebView:(id)arg1;
- (void)_showAttachmentSheet;
- (void)_showDataDetectorsSheet;
- (void)_showDictionary:(id)arg1;
- (void)_showImageSheet;
- (void)_showInspectorHighlight:(const struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1;
- (void)_showLinkSheet;
- (void)_showPlaybackTargetPicker:(bool)arg1 fromRect:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg2;
- (void)_showRunOpenPanel:(struct OpenPanelParameters { }*)arg1 resultListener:(struct WebOpenPanelResultListenerProxy { }*)arg2;
- (void)_showTapHighlight;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_showTextStyleOptionsForWebView:(id)arg1;
- (void)_simulateDataInteractionEnded:(id)arg1;
- (void)_simulateDataInteractionEntered:(id)arg1;
- (void)_simulateDataInteractionPerformOperation:(id)arg1;
- (void)_simulateDataInteractionSessionDidEnd:(id)arg1;
- (unsigned long long)_simulateDataInteractionUpdated:(id)arg1;
- (void)_simulateLongPressActionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_simulatePrepareForDataInteractionSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_simulateWillBeginDataInteractionWithSession:(id)arg1;
- (id)_simulatedItemsForSession:(id)arg1;
- (void)_singleTapCommited:(id)arg1;
- (void)_singleTapDidReset:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (void)_startAssistingKeyboard;
- (void)_startAssistingNode:(const struct AssistedNodeInformation { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; double x3; double x4; double x5; double x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; int x16; int x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16> { struct OptionItem {} *x_19_1_1; unsigned int x_19_1_2; unsigned int x_19_1_3; } x19; int x20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_21_1_1; } x21; double x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; int x24; }*)arg1 userIsInteracting:(bool)arg2 blurPreviousNode:(bool)arg3 userObject:(id)arg4;
- (void)_startDrag:(struct RetainPtr<CGImage *> { void *x1; })arg1 item:(const struct DragItem { struct DragImage { struct RetainPtr<CGImage *> { void *x_1_2_1; } x_1_1_1; struct optional<WebCore::TextIndicatorData> { bool x_2_2_1; union storage_t<WebCore::TextIndicatorData> { unsigned char x_2_3_1; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_6_1; float x_1_6_2; } x_1_5_1; struct FloatSize { float x_2_6_1; float x_2_6_2; } x_1_5_2; } x_2_4_1; struct FloatRect { struct FloatPoint { float x_1_6_1; float x_1_6_2; } x_2_5_1; struct FloatSize { float x_2_6_1; float x_2_6_2; } x_2_5_2; } x_2_4_2; struct FloatRect { struct FloatPoint { float x_1_6_1; float x_1_6_2; } x_3_5_1; struct FloatSize { float x_2_6_1; float x_2_6_2; } x_3_5_2; } x_2_4_3; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_4_5_1; unsigned int x_4_5_2; unsigned int x_4_5_3; } x_2_4_4; float x_2_4_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_5_1; } x_2_4_6; struct RefPtr<WebCore::Image> { struct Image {} *x_7_5_1; } x_2_4_7; struct RefPtr<WebCore::Image> { struct Image {} *x_8_5_1; } x_2_4_8; struct Color { union { unsigned long long x_1_6_1; struct ExtendedColor {} *x_1_6_2; } x_9_5_1; } x_2_4_9; unsigned char x_2_4_10; unsigned short x_2_4_11; } x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; }*)arg2;
- (void)_stopAssistingKeyboard;
- (void)_stopAssistingNode;
- (struct Color { union { unsigned long long x_1_1_1; struct ExtendedColor {} *x_1_1_2; } x1; })_tapHighlightColorForFastClick:(bool)arg1;
- (void)_transitionDragPreviewToImageIfNecessary:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_transliterateChineseForWebView:(id)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_twoFingerSingleTapGestureRecognized:(id)arg1;
- (id)_uiTextSelectionRects;
- (void)_unregisterPreview;
- (void)_updateAccessory;
- (void)_updateChangedSelection;
- (void)_updateChangedSelection:(bool)arg1;
- (void)_updateForScreen:(id)arg1;
- (void)_updateTapHighlight;
- (void)_webTouchEvent:(const struct NativeWebTouchEvent { unsigned int x1; unsigned int x2; double x3; struct Vector<WebKit::WebPlatformTouchPoint, 0, WTF::CrashOnOverflow, 16> { struct WebPlatformTouchPoint {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct IntPoint { int x_5_1_1; int x_5_1_2; } x5; bool x6; bool x7; bool x8; float x9; float x10; }*)arg1 preventsNativeGestures:(bool)arg2;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_webViewDestroyed;
- (void)_willStartScrollingOrZooming;
- (void)_windowDidMoveToScreenNotification:(id)arg1;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (struct CGPDFDocument { }*)_wk_printedDocument;
- (void)_zoomOutWithOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_zoomToFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insideFixed:(bool)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(bool)arg7 forceScroll:(bool)arg8;
- (void)_zoomToInitialScaleWithOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(double)arg6;
- (void)accessibilityRetrieveSpeakSelectionContent;
- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryTab:(bool)arg1;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(id /* block */)arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (bool)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
- (void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
- (void)actionSheetAssistantDidStopInteraction:(id)arg1;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (const struct AssistedNodeInformation { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; double x3; double x4; double x5; double x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; int x16; int x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16> { struct OptionItem {} *x_19_1_1; unsigned int x_19_1_2; unsigned int x_19_1_3; } x19; int x20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_21_1_1; } x21; double x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; int x24; }*)assistedNodeInformation;
- (struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16> { struct OptionItem {} *x1; unsigned int x2; unsigned int x3; }*)assistedNodeSelectOptions;
- (const struct WKAutoCorrectionData { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; double x2; unsigned long long x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; id /* block */ x6; id /* block */ x7; }*)autocorrectionData;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)becomeFirstResponderForWebView;
- (void)beginSelectionChange;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)beginningOfDocument;
- (id)browsingContextController;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFirstResponderForWebView;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformActionForWebView:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeBlockSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 forHandle:(long long)arg3;
- (void)changeSelectionWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)changeSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 baseIsStart:(bool)arg3;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (unsigned short)characterBeforeCaretSelection;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)cleanUpDragSourceSessionState;
- (void)cleanupInteraction;
- (void)clearSelection;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)computeClientAndGlobalPointsForDropSession:(id)arg1 outClientPoint:(struct CGPoint { double x1; double x2; }*)arg2 outGlobalPoint:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)copy:(id)arg1;
- (void)copyForWebView:(id)arg1;
- (id)currentDragOrDropSession;
- (struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; })currentPositionInformation;
- (void)cut:(id)arg1;
- (void)cutForWebView:(id)arg1;
- (id)dataDetectionContextForActionSheetAssistant:(id)arg1;
- (void)dealloc;
- (void)deleteBackward;
- (void)didFinishScrolling;
- (void)didInterruptScrolling;
- (void)didMoveToWindow;
- (void)didUpdateVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 unobscuredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 unobscuredRectInScrollViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 obscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 unobscuredSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 inputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 scale:(double)arg7 minimumScale:(double)arg8 inStableState:(bool)arg9 isChangingObscuredInsetsInteractively:(bool)arg10 enclosedInScrollableAncestorView:(bool)arg11;
- (void)didZoomToScale:(double)arg1;
- (void)doAfterPositionInformationUpdate:(id /* block */)arg1 forRequest:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; })arg2;
- (struct DragData { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntPoint { int x_2_1_1; int x_2_1_2; } x2; void *x3; int x4; int x5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; int x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; })dragDataForDropSession:(id)arg1 dragDestinationAction:(unsigned long long)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (double)dragLiftDelay;
- (struct RetainPtr<UITargetedDragPreview> { void *x1; })dragPreviewForCurrentDataInteractionState;
- (struct RetainPtr<UITargetedDragPreview> { void *x1; })dragPreviewForImage:(id)arg1 frameInRootViewCoordinates:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 clippingRectsInFrameCoordinates:(const struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x1; unsigned int x2; unsigned int x3; }*)arg3 backgroundColor:(id)arg4;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)endOfDocument;
- (void)endSelectionChange;
- (bool)ensurePositionInformationIsUpToDate:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; })arg1;
- (void)executeEditCommandWithCallback:(id)arg1;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (id)formAccessoryView;
- (bool)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldIgnoreWebTouchWithEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasContent;
- (bool)hasMarkedText;
- (bool)hasSelectablePositionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasSelection;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 processPool:(struct WebProcessPool { int (**x1)(); id x2; int (*x3)(); struct Ref<API::ProcessPoolConfiguration> { struct ProcessPoolConfiguration {} *x_4_1_1; } x4; struct MessageReceiverMap { struct HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_5_1_1; struct HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<std::__1::pair<IPC::StringReference, unsigned long long>, WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> >, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> > > { struct KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_5_1_2; } x5; }*)arg2 configuration:(struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x1; }*)arg3 webView:(id)arg4;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertText:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
- (id)insertionPointColor;
- (id)interactionAssistant;
- (double)inverseScale;
- (bool)isAnyTouchOverActiveArea:(id)arg1;
- (bool)isAssistingNode;
- (bool)isBackground;
- (bool)isEditable;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (bool)isReplaceAllowed;
- (bool)isResigningFirstResponder;
- (bool)isShowingInspectorIndication;
- (id)keyCommands;
- (struct CGPoint { double x1; double x2; })lastInteractionLocation;
- (id)markedText;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (void)moveBackward:(unsigned int)arg1;
- (void)moveByOffset:(long long)arg1;
- (void)moveForward:(unsigned int)arg1;
- (void)moveSelectionAtBoundary:(long long)arg1 inDirection:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); struct RetainPtr<NSArray> { void *x_6_1_1; } x6; struct PageClient {} *x7; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_8_1_1; } x8; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_12_1_1; } x12; }*)page;
- (void)paste:(id)arg1;
- (void)pasteForWebView:(id)arg1;
- (bool)pointIsInAssistedNode:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointIsNearMarkedText:(struct CGPoint { double x1; double x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)positionInformation;
- (struct optional<WebKit::InteractionInformationAtPosition> { bool x1; union storage_t<WebKit::InteractionInformationAtPosition> { unsigned char x_2_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; } x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; struct FloatPoint { float x_13_3_1; float x_13_3_2; } x_2_2_13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_14_3_1; unsigned int x_14_3_2 : 1; unsigned int x_14_3_3 : 1; unsigned int x_14_3_4 : 1; unsigned int x_14_3_5; unsigned int x_14_3_6; unsigned int x_14_3_7; unsigned int x_14_3_8; unsigned int x_14_3_9; unsigned int x_14_3_10; unsigned int x_14_3_11; unsigned int x_14_3_12; unsigned int x_14_3_13; } x_2_2_14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_15_3_1; unsigned int x_15_3_2 : 1; unsigned int x_15_3_3 : 1; unsigned int x_15_3_4 : 1; unsigned int x_15_3_5; unsigned int x_15_3_6; unsigned int x_15_3_7; unsigned int x_15_3_8; unsigned int x_15_3_9; unsigned int x_15_3_10; unsigned int x_15_3_11; unsigned int x_15_3_12; unsigned int x_15_3_13; } x_2_2_15; } x_2_1_2; } x2; })positionInformationForActionSheetAssistant:(id)arg1;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replace:(id)arg1;
- (void)replaceDictatedText:(id)arg1 withText:(id)arg2;
- (void)replaceForWebView:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceText:(id)arg1 withText:(id)arg2;
- (void)requestAsynchronousPositionInformationUpdate:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; })arg1;
- (void)requestAutocorrectionContextWithCompletionHandler:(id /* block */)arg1;
- (void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestDictationContext:(id /* block */)arg1;
- (bool)requiresAccessoryView;
- (bool)requiresKeyEvents;
- (bool)resignFirstResponder;
- (bool)resignFirstResponderForWebView;
- (void)scrollViewWillStartPanOrPinchGesture;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectAllForWebView:(id)arg1;
- (void)selectForWebView:(id)arg1;
- (void)selectFormAccessoryPickerRow:(long long)arg1;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)selectWordBackward;
- (void)selectWordForReplacement;
- (id)selectedDOMRange;
- (id)selectedText;
- (id)selectedTextForActionSheetAssistant:(id)arg1;
- (id)selectedTextRange;
- (long long)selectionGranularity;
- (id)selectionInteractionAssistant;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setInputDelegate:(id)arg1;
- (bool)setIsEditable:(bool)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(bool)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShowingInspectorIndication:(bool)arg1;
- (void)setSizeChangedSinceLastVisibleContentRectUpdate:(bool)arg1;
- (void)setSuppressAssistantSelectionView:(bool)arg1;
- (void)setupDataInteractionDelegates;
- (void)setupInteraction;
- (bool)shouldHideSelectionWhenScrolling;
- (bool)shouldIgnoreWebTouch;
- (bool)sizeChangedSinceLastVisibleContentRectUpdate;
- (id)supportedPasteboardTypesForCurrentSelection;
- (bool)suppressAssistantSelectionView;
- (void)takeTraitsFrom:(id)arg1;
- (void)teardownDataInteractionDelegates;
- (id)textColorForCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFirstRect;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (bool)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textLastRect;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleBoldfaceForWebView:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleItalicsForWebView:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleUnderlineForWebView:(id)arg1;
- (id)tokenizer;
- (id)undoManager;
- (void)unmarkText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredContentRect;
- (id)unscaledView;
- (void)updateFixedClippingView:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updatePositionInformationForActionSheetAssistant:(id)arg1;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 withBoundary:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)useSelectionAssistantWithGranularity:(long long)arg1;
- (id)webSelectionAssistant;
- (id)webSelectionRects;
- (id)webSelectionRectsForSelectionRects:(const struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow, 16> { struct SelectionRect {} *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)webViewUIDelegate;
- (void)willMoveToWindow:(id)arg1;
- (void)willStartZoomOrScroll;
- (id)wordContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;

@end
