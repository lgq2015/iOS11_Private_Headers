/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKScene : SKEffectNode {
    bool  __needsRender;
    bool  __needsUpdate;
    PKPhysicsWorld * __pkPhysicsWorld;
    NSMutableArray * _allChildenWithConstraints;
    AVAudioEngine * _audioEngine;
    AVAudioEnvironmentNode * _avAudioEnvironmentNode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    SKCameraNode * _camera;
    <SKSceneDelegate> * _delegate;
    bool  _isSetup;
    double  _lastUpdate;
    SKNode * _listener;
    double  _pausedTime;
    SKPhysicsWorld * _physicsWorld;
    SKPhysicsBody * _scenePinBody;
    struct SKCSceneNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcSceneNode;
    NSMapTable * _touchMap;
    bool  _usesExplicitRender;
    bool  _usesExplicitUpdate;
    id  _view;
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
}

@property bool _needsRender;
@property bool _needsUpdate;
@property (nonatomic, retain) PKPhysicsWorld *_pkPhysicsWorld;
@property bool _usesExplicitRender;
@property bool _usesExplicitUpdate;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, readonly, retain) AVAudioEngine *audioEngine;
@property (nonatomic, retain) AVAudioEnvironmentNode *avAudioEnvironmentNode;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) SKCameraNode *camera;
@property (nonatomic) <SKSceneDelegate> *delegate;
@property (nonatomic) SKNode *listener;
@property (nonatomic, readonly) SKPhysicsWorld *physicsWorld;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) SKView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleRectCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } visibleRectSize;

+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)sceneWithSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void)_didMoveToView:(id)arg1;
- (id)_getFocusNodes;
- (bool)_hasConstraints;
- (bool)_isDirty;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (bool)_needsRender;
- (bool)_needsUpdate;
- (void)_notifyNextDirtyState;
- (id)_parentFocusEnvironment;
- (id)_pkPhysicsWorld;
- (void)_registerConstraintsForNode:(id)arg1;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_setBackgroundContentsWithBuffer:(struct __CVBuffer { }*)arg1;
- (void)_setDirty;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
- (void)_update:(double)arg1;
- (bool)_usesExplicitRender;
- (bool)_usesExplicitUpdate;
- (void)_willMoveFromView:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)audioEngine;
- (id)avAudioEnvironmentNode;
- (id)backgroundColor;
- (id)camera;
- (void)checkAudioEngine;
- (struct CGPoint { double x1; double x2; })convertPointFromParent:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToParent:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToView:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;
- (id)delegate;
- (id)description;
- (void)didApplyConstraints;
- (void)didChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didContinueContact:(id)arg1;
- (void)didEvaluateActions;
- (void)didFinishUpdate;
- (void)didMoveToView:(id)arg1;
- (void)didSimulatePhysics;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)handleAVAudioEngineInterruption:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)listener;
- (id)physicsWorld;
- (struct CGPoint { double x1; double x2; })position;
- (long long)scaleMode;
- (void)sceneDidLoad;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAvAudioEnvironmentNode:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleRectCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibleRectSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setXScale:(double)arg1;
- (void)setYScale:(double)arg1;
- (void)setZPosition:(double)arg1;
- (void)setZRotation:(double)arg1;
- (void)set_anchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_needsRender:(bool)arg1;
- (void)set_needsUpdate:(bool)arg1;
- (void)set_pkPhysicsWorld:(id)arg1;
- (void)set_usesExplicitRender:(bool)arg1;
- (void)set_usesExplicitUpdate:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)update:(double)arg1;
- (id)view;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGPoint { double x1; double x2; })visibleRectCenter;
- (struct CGSize { double x1; double x2; })visibleRectSize;
- (void)willMoveFromView:(id)arg1;
- (void)willRenderContent;
- (double)xScale;
- (double)yScale;
- (double)zPosition;
- (double)zRotation;

@end
