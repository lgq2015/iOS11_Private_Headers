/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNShow : TSPObject {
    bool  _automaticallyPlaysUponOpen;
    double  _autoplayBuildDelay;
    double  _autoplayTransitionDelay;
    bool  _idleTimerActive;
    double  _idleTimerDelay;
    bool  _localizeDocument;
    bool  _loopPresentation;
    long long  _mode;
    bool  _needsToUpdateThumbnails;
    KNRecording * _recording;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    KNSlideTree * _slideTree;
    KNSoundtrack * _soundtrack;
    TSSStylesheet * _stylesheet;
    KNTheme * _theme;
    KNUIState * _uiState;
    bool  _wasImportedAsPreUFF;
}

@property (nonatomic) bool automaticallyPlaysUponOpen;
@property (nonatomic) double autoplayBuildDelay;
@property (nonatomic) double autoplayTransitionDelay;
@property (nonatomic) bool idleTimerActive;
@property (nonatomic) double idleTimerDelay;
@property (nonatomic) bool localizeDocument;
@property (nonatomic) bool loopPresentation;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) bool needsToUpdateThumbnails;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, retain) KNRecording *recording;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) bool slideNumbersVisible;
@property (nonatomic, retain) KNSlideTree *slideTree;
@property (nonatomic, retain) KNSoundtrack *soundtrack;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (nonatomic, retain) KNTheme *theme;
@property (nonatomic, retain) KNUIState *uiState;
@property (nonatomic, readonly) bool wasImportedAsPreUFF;

+ (unsigned long long)maximumHeight;
+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)minimumWidth;
+ (id)showWithSize:(struct CGSize { double x1; double x2; })arg1 context:(id)arg2;

- (void).cxx_destruct;
- (bool)automaticallyPlaysUponOpen;
- (double)autoplayBuildDelay;
- (double)autoplayTransitionDelay;
- (struct CGPoint { double x1; double x2; })center;
- (bool)idleTimerActive;
- (double)idleTimerDelay;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 context:(id)arg2;
- (bool)isPlayable;
- (void)loadFromArchive:(const struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct SlideTreeArchive {} *x7; struct Size {} *x8; struct Reference {} *x9; struct Reference {} *x10; double x11; int x12; bool x13; bool x14; bool x15; bool x16; double x17; double x18; struct Reference {} *x19; struct Reference {} *x20; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (bool)localizeDocument;
- (bool)loopPresentation;
- (long long)mode;
- (bool)needsToUpdateThumbnails;
- (id)recording;
- (void)saveToArchive:(struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct SlideTreeArchive {} *x7; struct Size {} *x8; struct Reference {} *x9; struct Reference {} *x10; double x11; int x12; bool x13; bool x14; bool x15; bool x16; double x17; double x18; struct Reference {} *x19; struct Reference {} *x20; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomaticallyPlaysUponOpen:(bool)arg1;
- (void)setAutoplayBuildDelay:(double)arg1;
- (void)setAutoplayTransitionDelay:(double)arg1;
- (void)setIdleTimerActive:(bool)arg1;
- (void)setIdleTimerDelay:(double)arg1;
- (void)setLocalizeDocument:(bool)arg1;
- (void)setLoopPresentation:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setRecording:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSlideTree:(id)arg1;
- (void)setSoundtrack:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setUiState:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)slideNodeAtIndex:(unsigned long long)arg1;
- (id)slideNodesAtIndexes:(id)arg1;
- (bool)slideNumbersVisible;
- (id)slideTree;
- (id)soundtrack;
- (id)stylesheet;
- (id)theme;
- (id)uiState;
- (bool)wasImportedAsPreUFF;
- (void)willModify;

@end
