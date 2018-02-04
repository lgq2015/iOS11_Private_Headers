/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditMultiUpController : NSObject {
    MiroMemory * _activeMemory;
    unsigned long long  _altStyle;
    NSArray * _chronologicallyOrderedAssets;
    MiroAutoEditKenBurnsController * _kbController;
    MiroAutoEditProjectPolish * _polishController;
    Project * _project;
    NSArray * _projectLayoutClips;
    NSMutableArray * _selectedPeers;
}

@property (nonatomic, retain) MiroMemory *activeMemory;
@property (nonatomic) unsigned long long altStyle;
@property (nonatomic, retain) NSArray *chronologicallyOrderedAssets;
@property (nonatomic, retain) MiroAutoEditKenBurnsController *kbController;
@property (nonatomic, retain) MiroAutoEditProjectPolish *polishController;
@property (nonatomic, retain) Project *project;
@property (nonatomic) NSArray *projectLayoutClips;
@property (nonatomic, retain) NSMutableArray *selectedPeers;

- (void).cxx_destruct;
- (id)activeMemory;
- (void)adjustKBRectanglesForClip:(id)arg1 animationStyle:(unsigned long long)arg2 aspect:(double)arg3;
- (id)allowedAssetsChronologically;
- (unsigned long long)altStyle;
- (id)appropriateDistancePeersFrom:(id)arg1 comparingTo:(id)arg2;
- (id)bestPeersAfterLayoutClip:(id)arg1;
- (id)bestPeersBeforeLayoutClip:(id)arg1;
- (id)bestPeersBetweenClip:(id)arg1 and:(id)arg2 withCurrent:(id)arg3;
- (id)bestPeersBetweenCurrent:(id)arg1 and:(id)arg2;
- (id)chronologicallyOrderedAssets;
- (bool)clipIsMultiCandidate:(id)arg1;
- (void)createAndReplaceMultiUpForLayoutClip:(id)arg1;
- (void)ensureMultiUpMovieClipIsFirstClip:(id)arg1;
- (void)evaluatePossilbeInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2;
- (bool)findInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2;
- (bool)findMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2;
- (id)kbController;
- (bool)layoutClip:(id)arg1 supportsMultiUpType:(int)arg2;
- (int)multiUpTypeForLayoutClip:(id)arg1 andPeer:(id)arg2;
- (bool)peer:(id)arg1 couldSupportAsset:(id)arg2;
- (id)pickBetweenClipA:(id)arg1 andClipB:(id)arg2 forLayoutClip:(id)arg3;
- (id)polishController;
- (void)prepareAltClip:(id)arg1 andClip:(id)arg2 fromSelectedPeer:(id)arg3;
- (id)project;
- (id)projectLayoutClips;
- (id)selectLayoutPeerFrom:(id)arg1;
- (id)selectedPeers;
- (bool)selectedPeersContains:(id)arg1;
- (void)setActiveMemory:(id)arg1;
- (void)setAltStyle:(unsigned long long)arg1;
- (void)setChronologicallyOrderedAssets:(id)arg1;
- (void)setKbController:(id)arg1;
- (void)setPolishController:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setProjectLayoutClips:(id)arg1;
- (void)setSelectedPeers:(id)arg1;
- (double)startZoomForLayoutClip:(id)arg1;

@end
