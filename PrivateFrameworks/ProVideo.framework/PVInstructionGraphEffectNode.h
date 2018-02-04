/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {
    bool  _bypassOutOfRangeEffects;
    PVEffect * _effect;
    struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > > { 
        struct __tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _inputMap;
}

@property (nonatomic) bool bypassOutOfRangeEffects;
@property (nonatomic, retain) PVEffect *effect;

+ (id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (bool)bypassOutOfRangeEffects;
- (/* Warning: unhandled struct encoding: '{PVIGHGNodeCacheKey=Q{?=qiIq}@}' */ struct PVIGHGNodeCacheKey { unsigned long long x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; id x3; })contextHGNodeCacheKeyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)effect;
- (id)getAllSourceNodes;
- (id)init;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceTrackNode *> { }*)arg2 renderer:(const struct HGRef<HGRenderer> { }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceTrackIDs;
- (void)setBypassOutOfRangeEffects:(bool)arg1;
- (void)setEffect:(id)arg1;
- (void)setInputNode:(id)arg1 forInputID:(unsigned int)arg2;
- (void)unloadIGNode;

@end
