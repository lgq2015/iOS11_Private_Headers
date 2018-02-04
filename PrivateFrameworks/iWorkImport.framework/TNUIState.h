/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNUIState : NSObject <NSCopying> {
    NSMutableDictionary * _chartUIState;
    <TNUIStateDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desktopScreenSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _desktopWindowFrame;
    long long  _documentMode;
    NSMutableDictionary * _editModeSheetUIStates;
    bool  _inspectorPaneIsAutoHidden;
    bool  _inspectorPaneIsVisible;
    int  _inspectorPaneViewMode;
    bool  _removedAllQuickCalcFunctions;
    NSArray * _selectedQuickCalcFunctions;
    TSKSelectionPath * _selectionPath;
    NSMutableDictionary * _sheetUIStates;
    bool  _showCanvasGuides;
    bool  _showsComments;
    bool  _showsRulers;
}

@property (nonatomic, readonly) NSMutableDictionary *chartUIState;
@property (nonatomic) <TNUIStateDelegate> *delegate;
@property (nonatomic) struct CGSize { double x1; double x2; } desktopScreenSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } desktopWindowFrame;
@property (nonatomic) long long documentMode;
@property (nonatomic, readonly) NSMutableDictionary *editModeSheetUIStates;
@property (nonatomic, readonly) bool hasPreviousVisibleRect;
@property (nonatomic, readonly) bool hasVisibleRect;
@property (nonatomic) long long inspectorPaneHiddenState;
@property (getter=inspectorPaneIsAutoHidden, nonatomic) bool inspectorPaneIsAutoHidden;
@property (getter=inspectorPaneIsVisible, nonatomic) bool inspectorPaneIsVisible;
@property (nonatomic) int inspectorPaneViewMode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } previousScrollPosition;
@property (nonatomic, readonly) float previousViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousVisibleRect;
@property (nonatomic) bool removedAllQuickCalcFunctions;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } scrollPosition;
@property (nonatomic, copy) NSArray *selectedQuickCalcFunctions;
@property (nonatomic, retain) TSKSelectionPath *selectionPath;
@property (nonatomic, readonly) NSMutableDictionary *sheetUIStates;
@property (nonatomic) bool showCanvasGuides;
@property (nonatomic) bool showsComments;
@property (nonatomic) bool showsRulers;
@property (nonatomic, readonly) float viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

+ (double)maximumViewScale;
+ (double)minimumViewScale;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
- (id)chartUIState;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (struct CGSize { double x1; double x2; })desktopScreenSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desktopWindowFrame;
- (long long)documentMode;
- (id)editModeSheetUIStates;
- (void)enumerateSheetUIStatesWithBlock:(id /* block */)arg1;
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(bool)arg1;
- (bool)hasPreviousVisibleRect;
- (bool)hasVisibleRect;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; unsigned int x8; struct SelectionArchive {} *x9; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; int x11; int x12; unsigned int x13; unsigned int x14; struct ChartSelectionArchive {} *x15; struct Reference {} *x16; int x17; bool x18; bool x19; bool x20; bool x21; struct RepeatedField<unsigned int> { unsigned int *x_22_1_1; int x_22_1_2; int x_22_1_3; } x22; struct Point {} *x23; struct Size {} *x24; struct Size {} *x25; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; }*)arg1 unarchiver:(id)arg2;
- (long long)inspectorPaneHiddenState;
- (bool)inspectorPaneIsAutoHidden;
- (bool)inspectorPaneIsVisible;
- (int)inspectorPaneViewMode;
- (bool)isEqual:(id)arg1;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)p_defaultViewScale;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (id)p_fixedUpSelectionPathForRestoration:(id)arg1 forcingUnpagination:(bool)arg2;
- (id)p_uiStateForActiveSheet;
- (struct CGPoint { double x1; double x2; })previousScrollPosition;
- (float)previousViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousVisibleRect;
- (void)removeUIStateForSheet:(id)arg1;
- (bool)removedAllQuickCalcFunctions;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; unsigned int x8; struct SelectionArchive {} *x9; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; int x11; int x12; unsigned int x13; unsigned int x14; struct ChartSelectionArchive {} *x15; struct Reference {} *x16; int x17; bool x18; bool x19; bool x20; bool x21; struct RepeatedField<unsigned int> { unsigned int *x_22_1_1; int x_22_1_2; int x_22_1_3; } x22; struct Point {} *x23; struct Size {} *x24; struct Size {} *x25; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (struct CGPoint { double x1; double x2; })scrollPosition;
- (id)selectedQuickCalcFunctions;
- (id)selectionPath;
- (void)setDelegate:(id)arg1;
- (void)setDesktopScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDesktopWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentMode:(long long)arg1;
- (void)setInspectorPaneHiddenState:(long long)arg1;
- (void)setInspectorPaneIsAutoHidden:(bool)arg1;
- (void)setInspectorPaneIsVisible:(bool)arg1;
- (void)setInspectorPaneViewMode:(int)arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (void)setRemovedAllQuickCalcFunctions:(bool)arg1;
- (void)setSelectedQuickCalcFunctions:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setShowCanvasGuides:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setShowsRulers:(bool)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (id)sheetUIStates;
- (bool)showCanvasGuides;
- (bool)showsComments;
- (bool)showsRulers;
- (id)uiStateForSheet:(id)arg1;
- (id)uiStateForSheet:(id)arg1 createIfNeeded:(bool)arg2;
- (float)viewScale;
- (float)viewScaleForSheet:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
