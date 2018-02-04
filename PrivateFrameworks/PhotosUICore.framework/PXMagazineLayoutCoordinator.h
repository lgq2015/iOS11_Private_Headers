/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMagazineLayoutCoordinator : NSObject {
    double  _currentBestScore;
    unsigned long long  _currentIndex;
    PXMagazineRectArray * _currentLayout;
    PXMagazineRectArray * _fallbackLayout;
    NSArray * _paddingInputs;
    NSMutableArray * _qualifiedLayouts;
    bool  _stop;
    bool  _stopIfAnyGoodLayout;
    double  _tileAspectRatio;
}

@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) PXMagazineRectArray *currentLayout;
@property (nonatomic, readonly) NSArray *paddingInputs;
@property (nonatomic, retain) NSMutableArray *qualifiedLayouts;
@property (nonatomic) bool stop;
@property (nonatomic, readonly) bool stopIfAnyGoodLayout;
@property (nonatomic, readonly) double tileAspectRatio;

- (void).cxx_destruct;
- (id)currentBestLayout;
- (unsigned long long)currentIndex;
- (id)currentLayout;
- (unsigned long long)currentLayoutsCount;
- (id)initWithPaddingInputs:(id)arg1 tileAspectRatio:(double)arg2 stopIfAnyGoodLayout:(bool)arg3;
- (id)paddingInputs;
- (id)qualifiedLayouts;
- (double)scoreOfLayout:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setQualifiedLayouts:(id)arg1;
- (void)setStop:(bool)arg1;
- (bool)stop;
- (bool)stopIfAnyGoodLayout;
- (double)tileAspectRatio;
- (bool)validateCurrentLayout;
- (void)validateCurrentLayoutAsFallback;

@end
