/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNUIState : NSObject <NSCopying> {
    NSMutableDictionary * _chartUIState;
    NSSet * _collapsedSlideNodes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _desktopCanvasOffset;
    double  _desktopCanvasViewScale;
    double  _desktopElementListViewWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _desktopMainContentSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _desktopMainWindowOrigin;
    double  _desktopNavigatorViewWidth;
    bool  _desktopOutlineViewDefaultFixed;
    double  _desktopOutlineViewWidth;
    double  _desktopPresenterNotesHeight;
    double  _desktopPresenterNotesScrollPosition;
    KNMacUILayout * _documentUILayout;
    NSArray * _elementListExpandedGroups;
    bool  _lightTableHidesSkippedSlides;
    double  _lightTableZoomScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mobileCanvasOffset;
    double  _mobileCanvasViewScale;
    bool  _mobileLightTableHidesSkippedSlides;
    double  _mobileLightTableZoomScale;
    NSSet * _outlineCollapsedSlideNodes;
    NSSet * _outlineHasBodySlideNodes;
    TSKSelectionPath * _selectionPath;
    bool  _showMasterGuides;
    bool  _showSlideGuides;
    bool  _showsComments;
    bool  _showsMobileLightTable;
    bool  _showsRuler;
    bool  _slideViewFitsContentInWindow;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } canvasOffset;
@property (nonatomic) double canvasViewScale;
@property (nonatomic, copy) NSSet *collapsedSlideNodes;
@property (nonatomic) double desktopElementListViewWidth;
@property (nonatomic) struct CGSize { double x1; double x2; } desktopMainContentSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } desktopMainWindowOrigin;
@property (nonatomic) double desktopNavigatorViewWidth;
@property (nonatomic) bool desktopOutlineViewDefaultFixed;
@property (nonatomic) double desktopOutlineViewWidth;
@property (nonatomic) double desktopPresenterNotesHeight;
@property (nonatomic) double desktopPresenterNotesScrollPosition;
@property (nonatomic, copy) KNMacUILayout *documentUILayout;
@property (nonatomic, copy) NSArray *elementListExpandedGroups;
@property (nonatomic) bool lightTableHidesSkippedSlides;
@property (nonatomic) double lightTableZoomScale;
@property (nonatomic) bool mobileLightTableHidesSkippedSlides;
@property (nonatomic) double mobileLightTableZoomScale;
@property (nonatomic, copy) NSSet *outlineCollapsedSlideNodes;
@property (nonatomic, copy) NSSet *outlineHasBodySlideNodes;
@property (nonatomic, retain) TSKSelectionPath *selectionPath;
@property (nonatomic) bool showMasterGuides;
@property (nonatomic) bool showSlideGuides;
@property (nonatomic) bool showsComments;
@property (nonatomic) bool showsMobileLightTable;
@property (nonatomic) bool showsRuler;
@property (nonatomic, readonly) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) bool slideViewFitsContentInWindow;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })canvasOffset;
- (double)canvasViewScale;
- (id)collapsedSlideNodes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (double)desktopElementListViewWidth;
- (struct CGSize { double x1; double x2; })desktopMainContentSize;
- (struct CGPoint { double x1; double x2; })desktopMainWindowOrigin;
- (double)desktopNavigatorViewWidth;
- (bool)desktopOutlineViewDefaultFixed;
- (double)desktopOutlineViewWidth;
- (double)desktopPresenterNotesHeight;
- (double)desktopPresenterNotesScrollPosition;
- (id)documentUILayout;
- (id)elementListExpandedGroups;
- (id)init;
- (bool)lightTableHidesSkippedSlides;
- (double)lightTableZoomScale;
- (void)loadFromArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct Reference {} *x5; struct Size {} *x6; struct Point {} *x7; float x8; float x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Point {} *x11; struct Point {} *x12; struct Reference {} *x13; float x14; float x15; struct Point {} *x16; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; float x18; bool x19; bool x20; bool x21; bool x22; struct RepeatedPtrField<TSP::Reference> { void **x_23_1_1; int x_23_1_2; int x_23_1_3; int x_23_1_4; } x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; struct RepeatedPtrField<TSP::Reference> { void **x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; float x26; float x27; struct Size {} *x28; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (bool)mobileLightTableHidesSkippedSlides;
- (double)mobileLightTableZoomScale;
- (id)outlineCollapsedSlideNodes;
- (id)outlineHasBodySlideNodes;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct Reference {} *x5; struct Size {} *x6; struct Point {} *x7; float x8; float x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct Point {} *x11; struct Point {} *x12; struct Reference {} *x13; float x14; float x15; struct Point {} *x16; struct RepeatedPtrField<TSCH::ChartUIState> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; float x18; bool x19; bool x20; bool x21; bool x22; struct RepeatedPtrField<TSP::Reference> { void **x_23_1_1; int x_23_1_2; int x_23_1_3; int x_23_1_4; } x23; struct RepeatedPtrField<TSP::Reference> { void **x_24_1_1; int x_24_1_2; int x_24_1_3; int x_24_1_4; } x24; struct RepeatedPtrField<TSP::Reference> { void **x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; float x26; float x27; struct Size {} *x28; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)selectionPath;
- (void)setCanvasOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanvasViewScale:(double)arg1;
- (void)setCollapsedSlideNodes:(id)arg1;
- (void)setDesktopElementListViewWidth:(double)arg1;
- (void)setDesktopMainContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDesktopMainWindowOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDesktopNavigatorViewWidth:(double)arg1;
- (void)setDesktopOutlineViewDefaultFixed:(bool)arg1;
- (void)setDesktopOutlineViewWidth:(double)arg1;
- (void)setDesktopPresenterNotesHeight:(double)arg1;
- (void)setDesktopPresenterNotesScrollPosition:(double)arg1;
- (void)setDocumentUILayout:(id)arg1;
- (void)setElementListExpandedGroups:(id)arg1;
- (void)setLightTableHidesSkippedSlides:(bool)arg1;
- (void)setLightTableZoomScale:(double)arg1;
- (void)setMobileLightTableHidesSkippedSlides:(bool)arg1;
- (void)setMobileLightTableZoomScale:(double)arg1;
- (void)setOutlineCollapsedSlideNodes:(id)arg1;
- (void)setOutlineHasBodySlideNodes:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setShowMasterGuides:(bool)arg1;
- (void)setShowSlideGuides:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setShowsMobileLightTable:(bool)arg1;
- (void)setShowsRuler:(bool)arg1;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
- (void)setSlideViewFitsContentInWindow:(bool)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (bool)showMasterGuides;
- (bool)showSlideGuides;
- (bool)showsComments;
- (bool)showsMobileLightTable;
- (bool)showsRuler;
- (id)slideTreeSelection;
- (bool)slideViewFitsContentInWindow;
- (void)updateOutlineStateFromSlideTree:(id)arg1;

@end
