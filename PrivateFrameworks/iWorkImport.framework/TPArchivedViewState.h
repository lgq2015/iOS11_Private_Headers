/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedViewState : TSPObject {
    TSKAnnotationAuthor * _authorFilter;
    NSString * _authorFilterName;
    TSWPSelection * _bodySelection;
    bool  _changeTrackingPaused;
    NSMutableDictionary * _chartUIState;
    TSKSelectionPath * _compatibilitySelectionPath;
    bool  _hasShowsCTDeletions;
    bool  _hasShowsCTMarkup;
    bool  _inspectorHidden;
    bool  _layoutBordersVisible;
    bool  _masterDrawablesSelectable;
    bool  _rulerVisible;
    NSString * _selectedInspectorSwitchSegmentIdentifier;
    TSKSelectionPath * _selectionPath;
    bool  _showUserDefinedGuides;
    bool  _showsActivitySidebar;
    bool  _showsCTDeletions;
    bool  _showsCTMarkup;
    bool  _showsComments;
    bool  _showsPageNavigator;
    double  _viewScale;
    int  _viewScaleMode;
    int  _viewScaleModeiOS;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _wordCountHUDPosition;
    int  _wordCountHUDType;
    bool  _wordCountHUDVisible;
}

@property (nonatomic, retain) TSKSelectionPath *compatibilitySelectionPath;
@property (nonatomic, retain) TSKSelectionPath *selectionPath;

- (void).cxx_destruct;
- (void)captureViewStateWithProvider:(id)arg1;
- (id)compatibilitySelectionPath;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_setArchivedViewStateDefaults;
- (void)readCanvasStateWithConsumer:(id)arg1;
- (void)readViewStateWithConsumer:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selectionPath;
- (void)setCompatibilitySelectionPath:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (bool)showsComments;

@end
