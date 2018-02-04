/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {
    struct CGSize { 
        double width; 
        double height; 
    }  _clipNaturalSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    int  _fillMode;
    int  _trackID;
}

@property (nonatomic) struct CGSize { double x1; double x2; } clipNaturalSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) int fillMode;
@property (nonatomic) int trackID;

+ (id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)newSourceTrackNode:(int)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 clipNaturalSize:(struct CGSize { double x1; double x2; })arg4;

- (struct CGSize { double x1; double x2; })clipNaturalSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (int)fillMode;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceTrackNode *> { struct map<PVInstructionGraphSourceTrackNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceTrackNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceTrackNode *const, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceTrackNode *, std::__1::__value_type<PVInstructionGraphSourceTrackNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceTrackNode *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (bool)isPassthru;
- (bool)isPortrait;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceTrackIDs;
- (void)setClipNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFillMode:(int)arg1;
- (void)setTrackID:(int)arg1;
- (int)trackID;

@end
